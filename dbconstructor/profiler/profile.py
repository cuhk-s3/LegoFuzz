#!/usr/bin/env python3
import json
import os, re, tempfile, sys, argparse
from datetime import datetime
from copy import deepcopy
import random
import subprocess as sp
from enum import Enum, auto
import tqdm
from concurrent.futures import ThreadPoolExecutor, as_completed

sys.path.append(os.path.join(os.path.dirname(__file__), ".."))

from iogenerator.functioner import FunctionDB
from iogenerator.variable import VarType

CC1 = "gcc"  # use two compilers to avoid unspecified behavior
CC2 = "clang"
COMPILERS = ["gcc", "clang"]  # test with both compilers
OPT_LEVELS = ["-O0", "-O1", "-O2", "-O3"]  # optimization levels to test
NUM_ENV = 5  # number of env variables used for each tag, "1" means one env_val, e.g., Tag1:tag_val:env_val
PROFILER = f"{os.path.dirname(__file__)}/build/bin/profiler --mode=expr"

INVALID_TAG_VALUE = 111  # we use this value to indicate invalid tag values


class CMD(Enum):
    OK = auto()
    Timeout = auto()
    Error = auto()


class VarValue(Enum):
    STABLE = auto()  # value has been the same
    UNSTABLE = auto()  # value has been changing


class Var:
    """Variable"""

    def __init__(self):
        self.var_name: str = ""  # variable name
        self.var_type: str = ""  # variable type as string
        self.var_value: int = 0  # value (determined from multiple optimization levels)
        self.is_stable: bool = True  # if the variable is stable across all optimization levels and executions
        self.is_constant: bool = False  # variable has "const" keyword
        self.is_global: bool = False  # if the vairable has global storage
        self.scope_id: int = -1  # scope id of the variable


class Tag:
    """Tag"""

    tag_id: int
    func_name: str  # function name that the tag belongs to
    tag_str: str  # the original tag string showsn in the source file
    tag_check_strs: list[str] = []  # inserted tag and tagcheck strings
    tag_var: Var  # tagged variable
    tag_envs: list[Var]  # env vairales
    statement_id: int  # id of the statement that the Tag belongs to


class ScopeTree:
    def __init__(self, id: int) -> None:
        self.parent = None
        self.children = []
        self.id = id


def run_cmd(cmd, timeout=10, DEBUG=False):
    if type(cmd) is not list:
        cmd = cmd.split(" ")
    if DEBUG:
        print(
            datetime.now().strftime("%d/%m/%Y %H:%M:%S"),
            ">>run_cmd: \n",
            " ".join(cmd),
            flush=True,
        )
    ret, out = CMD.OK, ""
    try:
        process = sp.run(cmd, timeout=timeout, capture_output=True)
        if DEBUG:
            print(
                datetime.now().strftime("%d/%m/%Y %H:%M:%S"),
                ">>run_cmd: exit.",
                flush=True,
            )
        out = process.stdout.decode("utf-8")
        if process.returncode != 0:
            ret = CMD.Error
            # Include stderr in output when there's an error
            stderr = process.stderr.decode("utf-8")
            if stderr:
                out = out + "\nSTDERR:\n" + stderr
    except sp.TimeoutExpired:
        if DEBUG:
            print(
                datetime.now().strftime("%d/%m/%Y %H:%M:%S"),
                ">>run_cmd: time out.",
                flush=True,
            )
        ret = CMD.Timeout
    if DEBUG:
        print(
            datetime.now().strftime("%d/%m/%Y %H:%M:%S"), ">>run_cmd: done.", flush=True
        )
    return ret, out


def strip_type_str(ori_type_str: str) -> str:
    """Strip type str to remove keywords like const, static, volatile, etc."""
    return (
        ori_type_str.replace("static", "")
        .replace("const", "")
        .replace("volatile", "")
        .strip()
    )


MAX_CONST_CCOMP = 4611686018427387904  # 2**62, CompCert cannot handle constant values larger than this


class Profiler:
    def __init__(self, DEBUG: bool) -> None:
        self.DEBUG = DEBUG

    def preprocess_tags(self, src_file, func_name):
        """
        Before profiling, we need to preprocess the source file to rename tags.
        """
        with open(src_file, "r") as f:
            code = f.read()
        all_tags = re.findall(
            r"(Tag(\d+)\(\/\*(.*?):(\w+):(\w+):(\w+):(\w+)\*\/(.*?)\))", code
        )
        all_defines = re.findall(r"#define\s+Tag(\d+)\(.*?\)", code)
        # add func_name after tag_id and replace the old tag
        # example: Tag1(/*int:642:642:606:e*/b) -> Tag1_func_name(/*int:642:642:606:e*/b)
        for tag_info in all_tags:
            (
                tag_str,
                tag_id,
                tag_type_str,
                scope_curr_id,
                scope_parent_id,
                stmt_id,
                tag_style,
                tag_var_name,
            ) = tag_info[:]
            tag_id = int(tag_id)
            new_tag_str = f"Tag{tag_id}_{func_name}(/*{tag_type_str}:{scope_curr_id}:{scope_parent_id}:{stmt_id}:{tag_style}*/{tag_var_name})"
            code = code.replace(tag_str, new_tag_str, 1)
        # add func_name after tag_id in defines
        # #define Tag1(x) (x) -> #define Tag1_func_name(x) (x)
        for tag_info in all_defines:
            tag_id = int(tag_info)
            new_tag_define = f"#define Tag{tag_id}_{func_name}(x) (x)"
            code = code.replace(f"#define Tag{tag_id}(x) (x)", new_tag_define)
        with open(src_file, "w") as f:
            f.write(code)

    def static_analysis(self, src_file):
        """
        Statically analyze the source file to (1) get tag_var_name for each tag
        and (2) get all variables' values and stabibility information.
        """
        # get global/local information of each tag
        with open(src_file, "r") as f:
            code = f.read()
        static_tags = re.findall(
            r"(Tag(\d+)_(.*?)\(\/\*(.*?):(\w+):(\w+):(\w+):(\w+)\*\/(.*?)\))", code
        )
        self.tags = {}
        self.scope_up = {}  # key:val ==> child_scope:parent_scope
        self.scope_down = {}  # key:[val] ==> parent_scope:[child_scope(s)]
        for tag_info in static_tags:
            (
                tag_str,
                tag_id,
                func_name,
                tag_type_str,
                scope_curr_id,
                scope_parent_id,
                stmt_id,
                tag_style,
                tag_var_name,
            ) = tag_info[:]
            tag_id = int(tag_id)
            scope_curr_id = int(scope_curr_id)
            scope_parent_id = int(scope_parent_id)
            assert tag_id not in self.tags
            new_var = Var()
            new_var.scope_id = scope_curr_id
            new_var.is_constant = "const" in tag_type_str
            new_var.var_name = tag_var_name
            new_var.var_type = strip_type_str(tag_type_str)
            new_var.is_global = scope_curr_id == 0
            new_var.is_stable = True

            new_tag = Tag()
            new_tag.tag_str = tag_str
            new_tag.func_name = func_name
            new_tag.tag_var = new_var
            new_tag.tag_envs = []
            new_tag.statement_id = int(stmt_id)
            self.tags[tag_id] = new_tag
            # construct scope_up tree
            if scope_curr_id not in self.scope_up:
                self.scope_up[scope_curr_id] = scope_parent_id
            else:
                assert self.scope_up[scope_curr_id] == scope_parent_id

    def valid_scope(self, from_scope: int, to_scope: int) -> bool:
        """Identify if we can access something in to_scope from from_scope"""
        if to_scope == 0:  # global
            return True
        if from_scope == to_scope:
            return True
        child_scope = from_scope
        while True:
            if self.scope_up[child_scope] == to_scope:
                return True
            child_scope = self.scope_up[child_scope]
            if (
                child_scope not in self.scope_up
                or child_scope == self.scope_up[child_scope]
            ):
                break
        return False

    def get_envs(self, tag_id, env_num=1):
        """
        Get env vars for the given tag
        """
        curr_scope_id = self.tags[tag_id].tag_var.scope_id
        curr_tag_var_name = self.tags[tag_id].tag_var.var_name
        tag_id_list = list(self.tags.keys())
        tag_index = tag_id_list.index(tag_id)
        MAX_STEP = 20  # search backward or forward for MAX_STEP tags
        envs = []
        env_vars = []
        # for k in range(max(0, tag_index-MAX_STEP), min(len(tag_id_list), tag_index+MAX_STEP)): # search both upward and downward
        for k in range(
            max(0, tag_index - MAX_STEP), tag_index
        ):  # search upward only to avoid use uninitialized variable
            env_tag_id = tag_id_list[k]
            if self.tags[env_tag_id].tag_var.var_name == curr_tag_var_name:
                continue
            if self.valid_scope(
                from_scope=curr_scope_id,
                to_scope=self.tags[env_tag_id].tag_var.scope_id,
            ):
                if self.tags[env_tag_id].tag_var.var_name not in env_vars:
                    envs.append(env_tag_id)
                    env_vars.append(self.tags[env_tag_id].tag_var.var_name)
        random.shuffle(envs)
        return envs[:env_num]

    def construct_tag_def(self, tag_id: int, var_types: list[str]) -> str:
        """Construct Tag definition"""
        return_type = var_types[0]
        fmt_strs = ""
        for var_ty in var_types:
            fmt_strs += f':%"{VarType.get_format(VarType.from_str(var_ty))}"'
        v_para_strs = ",".join([f"v{var_i}" for var_i in range(len(var_types))])
        func_name = self.tags[tag_id].func_name
        print_tag = f'printf("Tag{tag_id}{fmt_strs}\\n", {v_para_strs});'
        var_defs = []
        count_defs = []
        last_defs = []
        all_i_ones = []
        last_assigns = []
        else_ifs = []
        for var_i, var_ty in enumerate(var_types):
            var_defs.append(f"{var_ty} v{var_i}")
            count_defs.append(f"static char i{var_i}=0;")
            last_defs.append(f"static {var_ty} last_v{var_i}=0;")
            all_i_ones.append(f"i{var_i}=1;")
            last_assigns.append(f"last_v{var_i}=v{var_i};")
            else_ifs.append(
                f"else if(i{var_i}==1&&v{var_i}!=last_v{var_i}){{{print_tag}i{var_i}=2;}}"
            )

        tag_def = f'{return_type} Tag{tag_id}_{func_name}({",".join(var_defs)}){{ \
{" ".join(count_defs)} \
{" ".join(last_defs)} \
if (i0 == 0) {{ \
    {"".join(all_i_ones)} \
    {print_tag} \
    {"".join(last_assigns)}\
}} \
{"".join(else_ifs)}\
return v0; \
}}'
        return tag_def

    def add_tags(self, src_file):
        """
        Add Tags for later profiling
        """
        with open(src_file, "r") as f:
            src = f.read()
        
        # ALWAYS add stdio.h at the very beginning for printf in tag functions
        # Even if stdio.h exists later in the file, we need it before tag definitions
        if not src.startswith("#include <stdio.h>") and not src.startswith("#include<stdio.h>"):
            src = "#include <stdio.h>\n" + src
        
        for tag_id in self.tags:
            envs = self.get_envs(tag_id, env_num=NUM_ENV)
            for env_id in envs:
                self.tags[tag_id].tag_envs.append(deepcopy(self.tags[env_id].tag_var))
            envs = [tag_id] + envs  # add self as the first env
            envs_str = ",".join(
                [
                    (
                        self.tags[env_id].tag_var.var_name
                        if "*" not in self.tags[env_id].tag_var.var_name
                        else "&({var})==0?{invalid}:{var}".format(
                            var=self.tags[env_id].tag_var.var_name,
                            invalid=INVALID_TAG_VALUE,
                        )
                    )
                    for env_id in envs
                ]
            )
            func_name = self.tags[tag_id].func_name
            # place TagBefore check Call
            bef_tag_call = f"/*bef*/Tag{tag_id}_{func_name}({envs_str});"
            src = src.replace(
                f"/*bef_stmt:{self.tags[tag_id].statement_id}*/", bef_tag_call, 1
            )
            self.tags[tag_id].tag_check_strs.append(bef_tag_call + "\n")
            # place Tag call
            tag_call = f"/*tag*/Tag{tag_id}_{func_name}({envs_str})"
            src = src.replace(self.tags[tag_id].tag_str, tag_call, 1)
            # self.tags[tag_id].tag_str = tag_call
            # place TagAfter check Call
            aft_tag_call = f"/*aft*/Tag{tag_id}_{func_name}({envs_str});"
            src = src.replace(
                f"/*aft_stmt:{self.tags[tag_id].statement_id}*/", aft_tag_call, 1
            )
            self.tags[tag_id].tag_check_strs.append(aft_tag_call + "\n")
            # replace Tag declaration
            var_types = []
            for env in envs:
                var_types.append(self.tags[env].tag_var.var_type)
            tag_defs = "\n" + self.construct_tag_def(tag_id, var_types)
            src = src.replace(f"#define Tag{tag_id}_{func_name}(x) (x)", tag_defs, 1)
            self.tags[tag_id].tag_check_strs.append(tag_defs + "\n")
        with open(src_file, "w") as f:
            f.write(src)

    def profiling(self, filename, func_name):
        """
        Instrument file with profiler;
        Run and collect values for multiple optimization levels.
        Note: we would rename tags to Tag{tag_id}_{func_name} before profiling.
        """
        # profiling
        ret, _ = run_cmd(f"{PROFILER} {filename} --", DEBUG=self.DEBUG)
        if ret != CMD.OK:
            raise ProfilerError

        self.preprocess_tags(filename, func_name)

        with open(filename, "r") as f:
            self.src_orig = f.read()

        self.static_analysis(filename)
        self.add_tags(filename)

        # Run with different compilers and optimization levels
        all_profile_outputs = {}  # key: (compiler, opt_level), value: profile output
        
        for compiler in COMPILERS:
            for opt_level in OPT_LEVELS:
                with tempfile.NamedTemporaryFile(suffix=".out", delete=True) as tmp_f:
                    tmp_f.close()
                    exe_out = tmp_f.name
                    # compile with current compiler and opt level
                    ret, compile_err = run_cmd(f"{compiler} -w {opt_level} {filename} -o {exe_out}", DEBUG=self.DEBUG)
                    if ret != CMD.OK:
                        if os.path.exists(exe_out):
                            os.remove(exe_out)
                        if self.DEBUG:
                            print(
                                datetime.now().strftime("%d/%m/%Y %H:%M:%S"),
                                f">>compile with {compiler} {opt_level} failed, skipping.",
                                flush=True,
                            )
                        # Skip this compiler/opt combination if compilation fails
                        continue
                    ret, profile_out = run_cmd(exe_out, timeout=3, DEBUG=self.DEBUG)
                    if ret != CMD.OK:
                        os.remove(exe_out)
                        if self.DEBUG:
                            print(
                                datetime.now().strftime("%d/%m/%Y %H:%M:%S"),
                                f">>run with {exe_out} at {compiler} {opt_level} failed, skipping.",
                                flush=True,
                            )
                        # Skip this compiler/opt combination if execution fails
                        continue
                    os.remove(exe_out)
                    all_profile_outputs[(compiler, opt_level)] = profile_out
        
        # Check if we got any outputs
        if not all_profile_outputs:
            raise ProfilerError

        # Process outputs for all compilers and optimization levels
        self.alive_tags = []
        # Use temporary dictionaries to collect values across compilers and optimization levels
        temp_var_values = {}  # {tag_id: {(compiler, opt_level): [value1, value2, ...]}}
        temp_env_values = {}  # {tag_id: {env_i: {(compiler, opt_level): [value1, value2, ...]}}}
        
        for (compiler, opt_level), profile_out in all_profile_outputs.items():
            raw_values = [
                [item.split(":")[0].replace("Tag", "")]
                + [x for x in item.split(":")[1:] if x != ""]
                for item in profile_out.split()
                if "Tag" in item
            ]
            
            for i in range(len(raw_values)):
                tag_info = raw_values[i]
                curr_tag_id = int(tag_info[0])
                curr_num_env = len(tag_info) - 2
                curr_tag_var_value = int(tag_info[1])
                curr_tag_env_value_list = (
                    [] if curr_num_env == 0 else list(map(int, tag_info[2:]))
                )
                
                # Initialize temp storage
                if curr_tag_id not in temp_var_values:
                    temp_var_values[curr_tag_id] = {}
                    temp_env_values[curr_tag_id] = {}
                
                if (compiler, opt_level) not in temp_var_values[curr_tag_id]:
                    temp_var_values[curr_tag_id][(compiler, opt_level)] = []
                
                # Store tag_var value
                temp_var_values[curr_tag_id][(compiler, opt_level)].append(curr_tag_var_value)
                
                # Store env values
                for env_i in range(curr_num_env):
                    if env_i not in temp_env_values[curr_tag_id]:
                        temp_env_values[curr_tag_id][env_i] = {}
                    if (compiler, opt_level) not in temp_env_values[curr_tag_id][env_i]:
                        temp_env_values[curr_tag_id][env_i][(compiler, opt_level)] = []
                    temp_env_values[curr_tag_id][env_i][(compiler, opt_level)].append(curr_tag_env_value_list[env_i])
                
                if curr_tag_id not in self.alive_tags:
                    self.alive_tags.append(curr_tag_id)
        
        # Now determine final var_value and is_stable based on all compilers and optimization levels
        for tag_id in self.alive_tags:
            # Determine tag_var stability and value
            all_values = []
            for compiler in COMPILERS:
                for opt_level in OPT_LEVELS:
                    if (compiler, opt_level) in temp_var_values[tag_id]:
                        all_values.extend(temp_var_values[tag_id][(compiler, opt_level)])
            
            # Check if all values are the same (stable) and not invalid
            if all_values:
                # Filter out invalid values
                valid_values = [v for v in all_values if v != INVALID_TAG_VALUE]
                if valid_values:
                    # Use gcc -O0 value if available, otherwise use first valid value
                    if ("gcc", "-O0") in temp_var_values[tag_id] and temp_var_values[tag_id][("gcc", "-O0")]:
                        self.tags[tag_id].tag_var.var_value = temp_var_values[tag_id][("gcc", "-O0")][0]
                    else:
                        self.tags[tag_id].tag_var.var_value = valid_values[0]
                    # Stable only if all values are the same
                    self.tags[tag_id].tag_var.is_stable = (len(set(valid_values)) == 1)
                else:
                    # All values are invalid
                    self.tags[tag_id].tag_var.var_value = INVALID_TAG_VALUE
                    self.tags[tag_id].tag_var.is_stable = False
            
            # Determine env vars stability and value
            for env_i in range(len(self.tags[tag_id].tag_envs)):
                if env_i in temp_env_values[tag_id]:
                    all_env_values = []
                    for compiler in COMPILERS:
                        for opt_level in OPT_LEVELS:
                            if (compiler, opt_level) in temp_env_values[tag_id][env_i]:
                                all_env_values.extend(temp_env_values[tag_id][env_i][(compiler, opt_level)])
                    
                    if all_env_values:
                        # Filter out invalid values
                        valid_env_values = [v for v in all_env_values if v != INVALID_TAG_VALUE]
                        if valid_env_values:
                            # Use gcc -O0 value if available, otherwise use first valid value
                            if ("gcc", "-O0") in temp_env_values[tag_id][env_i] and temp_env_values[tag_id][env_i][("gcc", "-O0")]:
                                self.tags[tag_id].tag_envs[env_i].var_value = temp_env_values[tag_id][env_i][("gcc", "-O0")][0]
                            else:
                                self.tags[tag_id].tag_envs[env_i].var_value = valid_env_values[0]
                            # Stable only if all values are the same
                            self.tags[tag_id].tag_envs[env_i].is_stable = (len(set(valid_env_values)) == 1)
                        else:
                            # All values are invalid
                            self.tags[tag_id].tag_envs[env_i].var_value = INVALID_TAG_VALUE
                            self.tags[tag_id].tag_envs[env_i].is_stable = False
        
        # serialize tags to json
        serialized_tags = {}
        for tag_id in self.tags:
            tag = self.tags[tag_id]
            # Serialize tag_var manually to ensure correct format
            tag_var_dict = {}
            if tag.tag_var:
                tag_var_dict = {
                    "var_name": tag.tag_var.var_name,
                    "var_type": tag.tag_var.var_type,
                    "var_value": tag.tag_var.var_value,
                    "is_stable": tag.tag_var.is_stable,
                    "is_constant": tag.tag_var.is_constant,
                    "is_global": tag.tag_var.is_global,
                    "scope_id": tag.tag_var.scope_id,
                }
            
            # Serialize tag_envs manually to ensure correct format
            tag_envs_list = []
            for env in getattr(tag, "tag_envs", []):
                tag_envs_list.append({
                    "var_name": env.var_name,
                    "var_type": env.var_type,
                    "var_value": env.var_value,
                    "is_stable": env.is_stable,
                    "is_constant": env.is_constant,
                    "is_global": env.is_global,
                    "scope_id": env.scope_id,
                })
            
            serialized_tags[tag_id] = {
                "tag_str": getattr(tag, "tag_str", ""),
                "func_name": getattr(tag, "func_name", ""),
                "tag_var": tag_var_dict,
                "tag_envs": tag_envs_list,
                "statement_id": getattr(tag, "statement_id", None),
            }
        code = re.sub(r"(?s)\bint\s+main\s*\([^)]*\)\s*\{.*?\}", "", self.src_orig)

        return code, serialized_tags, self.alive_tags


class ProfilerError(Exception):
    pass


def process_single_function(func, DEBUG=False):
    """
    Process a single function for profiling.
    This function is thread-safe and can be called in parallel.
    Returns: (func, success: bool)
    """
    tmp_f = tempfile.NamedTemporaryFile(suffix=".c", delete=False)
    tmp_name = None
    try:
        tmp_name = tmp_f.name
        tmp_f.close()
        with open(tmp_name, "w") as f:
            for misc in func.misc:
                f.write(misc)
                f.write("\n")
            f.write(func.function_body)
            f.write("\n")
            f.write("int main() {\n")
            f.write(
                "{func_name}({func_io});\n".format(
                    func_name=func.call_name,
                    func_io=",".join(map(str, func.io_list[0][0])),
                )
            )
            f.write("return 0;\n")
            f.write("}\n")

        profiler = Profiler(DEBUG=DEBUG)
        try:
            profiled_code, serialized_tags, alive_tags = profiler.profiling(
                tmp_name, func.call_name
            )
            func.function_body = profiled_code
            func.profile = serialized_tags
            func.alive_tags = alive_tags
            return func, True
        except ProfilerError:
            # profiling failed for this function
            return func, False
    finally:
        # always remove the temporary file to avoid filling disk
        if tmp_name and os.path.exists(tmp_name):
            try:
                os.remove(tmp_name)
            except Exception:
                pass


if __name__ == "__main__":

    parser = argparse.ArgumentParser(
        description="Profile functions in a function database."
    )
    parser.add_argument(
        "--src",
        dest="SRC",
        required=True,
        help="path to the original function database.",
    )
    parser.add_argument(
        "--dst", dest="DST", required=True, help="path to the output function database."
    )
    parser.add_argument(
        "--cpu",
        dest="CPU",
        type=int,
        default=4,
        help="number of parallel CPU workers (default: 4).",
    )
    parser.add_argument(
        "--debug", dest="DEBUG", action="store_true", help="print debug information."
    )

    args = parser.parse_args()
    if not os.path.exists(args.SRC):
        print(f"File {args.SRC} does not exist!")
        parser.print_help()
        exit(1)

    functionDB = FunctionDB(args.SRC)
    
    # Use ThreadPoolExecutor for parallel processing
    results = []
    with ThreadPoolExecutor(max_workers=args.CPU) as executor:
        # Submit all tasks
        future_to_func = {
            executor.submit(process_single_function, func, args.DEBUG): func 
            for func in functionDB.all_functions
        }
        
        # Process completed tasks with progress bar
        with tqdm.tqdm(total=len(functionDB.all_functions)) as pbar:
            for future in as_completed(future_to_func):
                func, success = future.result()
                results.append((func, success))
                pbar.update(1)
    
    # Sort results back to original order (to maintain consistency)
    func_index = {id(f): i for i, f in enumerate(functionDB.all_functions)}
    results.sort(key=lambda x: func_index[id(x[0])])

    # Write to new function database
    with open(args.DST, "w") as f:
        for func, success in results:
            f.write(json.dumps(func.to_json()) + "\n")
