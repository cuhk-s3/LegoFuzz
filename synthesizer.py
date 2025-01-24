#!/usr/bin/env python3
from pathlib import Path
import string
import os, re, tempfile, sys, argparse, shutil
from datetime import datetime
from copy import copy
import random

from functioner import FunctionDB
from profiler import MAX_CONST_CCOMP, Var
from variable import VarType
sys.path.append(os.path.join(os.path.dirname(__file__), ".."))

def id_generator(size=6, chars=string.ascii_uppercase + string.digits):
    return ''.join(random.choice(chars) for _ in range(size))

MAX_CHAIN_NUM = 100 # maximum number of iterations for one synthesis

class Synthesizer:
    def __init__(self, func_database:str, prob:int, DEBUG: bool) -> None:
        assert 0 < prob <= 100
        self.prob = prob
        self.functionDB = FunctionDB(func_database)
        self.DEBUG = DEBUG
    
    def ignore_typedef(self, _typedef:str) -> bool:
        ignored_typedef = [
            "int8_t", "uint8_t", "int16_t", "uint16_t", "int32_t", "uint32_t", "int64_t", "uint64_t", "char"
        ]
        for ignored in ignored_typedef:
            if f'{ignored};' in _typedef:
                return True
        return False

    def insert_func_decl(self, func_id_list):
        # insert the function declaration 
        for func_id in list(set(func_id_list)):
            miscs = ""
            profiled = True
            for misc in self.functionDB[func_id].misc:
                # For those that failed to be profiled, misc has not been inserted into the function body
                if misc not in self.functionDB[func_id].function_body:
                    profiled = False
                    break
            
            if not profiled:
                for misc in self.functionDB[func_id].misc:
                    miscs = miscs + misc + "\n"

            function_body = self.functionDB[func_id].function_body
            function_body = "\n" + miscs + function_body + "\n"
            self.src_syn = function_body + self.src_syn
        
    def synthesize_input(self, env_vars:list[Var], func_inp_list:list[str], func_inp_types:list[VarType]):
        """Synthesize input to the target function call with environmental variables"""
        new_inp_list = []
        for inp_i in range(len(func_inp_list)):
            inp_value = int(func_inp_list[inp_i])
            if len(env_vars) > 0:
                env = random.choice(env_vars)
                env_value_cast = VarType.get_ctypes(func_inp_types[inp_i], env['var_value']).value
                if abs(env_value_cast) > MAX_CONST_CCOMP:
                    new_inp_list.append(f"{inp_value}")
                else:
                    new_inp_list.append(f"({VarType.to_str(func_inp_types[inp_i])})({env['var_name']})+({inp_value - env_value_cast})")
            else:
                new_inp_list.append(f"{inp_value}")
        return new_inp_list

    def synthesize_output(self, env_vars:list[Var], func_out, func_return_type:VarType):
        """Synthesize output to make sure the function return a value in a reasonable range"""
        ret_val_min, ret_val_max = VarType.get_range(func_return_type) # the range of the return value
        func_return_type = VarType.get_base_type(func_return_type) #FIXME: This is a bug in generating proxy functions where we did not convert the proxy return type. This has been fixed in proxy.py but need to regenerate function datebase to get rid of this work-around
        func_out = int(func_out)
        output_str = ""
        output = func_out
        # if func_out already exceeds the range limit
        if not (ret_val_min <= func_out <= ret_val_max):
            output_str += f'-({func_out})'
            output = 0
        for env in env_vars:
            env_value_cast = VarType.get_ctypes(func_return_type, env['var_value']).value
            if abs(env_value_cast) > MAX_CONST_CCOMP or abs(env_value_cast+output) > MAX_CONST_CCOMP:
                continue
            env_var_name = env['var_name']
            if ret_val_min <= env_value_cast+output <= ret_val_max:
                output_str += f'+({VarType.to_str(func_return_type)})({env_var_name})'
                output += env_value_cast
            else:
                output_str += f'+(({VarType.to_str(func_return_type)})({env_var_name})-({env_value_cast}))'
        return output_str, output

    def replace_valuetag_with_func(self, tag_id:str, tgt_func_idx:int):
        """
        Replace a ValueTag with the selected function call
        """
        # use stable tag_var and env_vars for synthesis
        stable_env_vars = []
        if 'is_stable' in self.tags[tag_id]['tag_var']:
            if self.tags[tag_id]['tag_var']['is_stable']:
                stable_env_vars.append(self.tags[tag_id]['tag_var'])
        for env in self.tags[tag_id]['tag_envs']:
            if 'is_stable' in env and env['is_stable']:
                stable_env_vars.append(env)

        # select the first io pair of the tgt_func
        func_inp_list, func_out = self.functionDB[tgt_func_idx].io_list[0]
        new_input_str = self.synthesize_input(stable_env_vars, func_inp_list, self.functionDB[tgt_func_idx].args_type)
        if self.DEBUG:
            print(datetime.now().strftime("%d/%m/%Y %H:%M:%S"), "new_input_str", new_input_str)
        new_output_str, new_output = self.synthesize_output(stable_env_vars, func_out, self.functionDB[tgt_func_idx].return_type)
        if self.DEBUG:
            print(datetime.now().strftime("%d/%m/%Y %H:%M:%S"), "new_output_str", new_output_str, "new_output", new_output)

        # synthesize func_call for expr, make sure to restore the value of the expr
        func_call = "(({tag_type})({call_name}({input}){output})+{tag_var_value})".format(
            tag_type=self.tags[tag_id]['tag_var']['var_type'], 
            call_name=self.functionDB[tgt_func_idx].call_name, 
            input=", ".join(new_input_str), 
            output=f"{new_output_str}-({new_output})",
            tag_var_value=self.tags[tag_id]['tag_var']['var_name'],
        )
        if self.DEBUG:
            print(datetime.now().strftime("%d/%m/%Y %H:%M:%S"), "func_call", func_call)
        # insert the function call
        tag_str = self.tags[tag_id]['tag_str']
        tag_var_name = self.tags[tag_id]['tag_var']['var_name']
        self.src_syn = self.src_syn.replace(tag_str, f'/*TAG{tag_id}:STA*/' + func_call + f'/*TAG{tag_id}:END:{tag_var_name}*/')

    def synthesize_one(self, tgt_func_idx:int, used_func:list[int], replaced_tags:dict[int, list[int]]):
        """
        Synthesize functions for tags in the target function
        """
        tgt_func = self.functionDB[tgt_func_idx]
        synth_funcs = []
        for tag_id in tgt_func.alive_tags:
            if len(used_func) == len(self.functionDB):
                break
            if tag_id in replaced_tags[tgt_func_idx] or random.randint(0, 100) > self.prob:
                continue
            while True:
                synth_func_idx = random.randint(0, len(self.functionDB)-1)
                if self.functionDB[synth_func_idx].has_io and synth_func_idx not in used_func:
                    break
            self.replace_valuetag_with_func(str(tag_id), synth_func_idx)
            replaced_tags[tgt_func_idx].append(tag_id)
            synth_funcs.append(synth_func_idx)
            used_func.append(synth_func_idx)
        return synth_funcs
    
    def mutate_with_functions(self, function_idx):
        func = self.functionDB[function_idx]
        io_idx = random.choice(range(1, len(func.io_list)))
        func_call = func.call_name + "(" + ",".join(map(str, func.io_list[io_idx][0])) + ")"
        return f'    transparent_crc({func_call}, "{func_call}", print_hash_value);\n'

    def synthesizer(self, dst_dir:Path, num_mutant:int=1):
        """
        Synthesize a source file by replacing variables/constants with function calls.
        """
        # randomly select a seed function
        while True:
            seed_func_idx = random.randint(0, len(self.functionDB)-1)
            if self.functionDB[seed_func_idx].has_io and len(self.functionDB[seed_func_idx].profile) > 0:
                seed_func = self.functionDB[seed_func_idx]
                break

        assert num_mutant >= 1

        succ_file_id = id_generator()
        src_filename = str((dst_dir / f'{succ_file_id}_seed.c').absolute())
        with open(src_filename, "w") as f:
            f.write(seed_func.function_body)

        # backup src file
        tmp_f = tempfile.NamedTemporaryFile(suffix=".c", delete=False)
        tmp_f.close
        shutil.copy(src_filename, tmp_f.name)
        with open(tmp_f.name, "r") as f:
            self.src_orig = f.read()
        os.remove(tmp_f.name)

        # sythesis
        seed_alive_tags = seed_func.alive_tags  # tags that are not replaced by constants
        all_syn_files = [src_filename]
        if len(seed_alive_tags) == 0:
            return all_syn_files
        for num_i in range(num_mutant):
            if self.DEBUG:
                print(datetime.now().strftime("%d/%m/%Y %H:%M:%S"), ">synthesize mutatant start", num_i, flush=True)
            self.src_syn = copy(self.src_orig)
            used_func = [seed_func_idx]
            tgt_func = []
            replaced_tags = {seed_func_idx: []} # a dict that contains the replaced tags of used functions(ready to be tgts)
            repeat_time = random.randint(MAX_CHAIN_NUM // 2, MAX_CHAIN_NUM)
            for _ in range(repeat_time):
                tgt_func_idx = random.choice(used_func)
                self.tags = self.functionDB[tgt_func_idx].profile
                synth_funcs = self.synthesize_one(tgt_func_idx, used_func, replaced_tags)
                if synth_funcs != []:
                    tgt_func.append(tgt_func_idx)
                if self.DEBUG:
                    print(datetime.now().strftime("%d/%m/%Y %H:%M:%S"), "synth_funcs", synth_funcs)
                # update replaced_tags
                for synth_func in synth_funcs:
                    replaced_tags[synth_func] = []
                self.insert_func_decl(synth_funcs)
            dst_filename = f'{os.path.splitext(src_filename)[0]}_syn{num_i}.c'
            calls = []
            for idx in tgt_func:
                calls.append(self.mutate_with_functions(idx))
            calls.reverse()
            with open(dst_filename, "w") as f:
                f.write("#include <csmith.h>")
                f.write(self.src_syn)
                f.write("\n")
                f.write("#include <stdio.h>\n")
                f.write("#include <inttypes.h>\n")
                f.write("int main() {\n")
                f.write("    int print_hash_value = 0;\n")
                f.write("    platform_main_begin();\n")
                f.write("    crc32_gentab();\n")
                for call in calls:
                    f.write(call)
                f.write("    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);\n")
                f.write("    return 0;\n")
                f.write("}\n")
            all_syn_files.append(dst_filename)
            if self.DEBUG:
                print(datetime.now().strftime("%d/%m/%Y %H:%M:%S"), ">synthesize mutatant end", num_i, flush=True)

        return all_syn_files


class SynthesizerError(Exception):
    pass


if __name__=='__main__':

    parser = argparse.ArgumentParser(description='Synthesize a new program based on a seed program and a function database.')
    parser.add_argument('--dst', dest='DST', required=True, help='path to the destination dir.')
    parser.add_argument('--db', dest='DB', required=True, help='path to the function database json file.')
    args = parser.parse_args()
    if not os.path.exists(args.DB):
        print(f"File {args.DB} does not exist!")
        parser.print_help()
        exit(1)

    dst_dir = Path(args.DST)
    dst_dir.mkdir(parents=True, exist_ok=True)

    syner = Synthesizer(args.DB, prob=80, DEBUG=False)
    try:
        all_syn_files = syner.synthesizer(dst_dir, num_mutant=1)
    except SynthesizerError:
        print("SynthesizerError (OK).")
