#!/usr/bin/env python3
import json
import os, re, tempfile, sys, argparse
from datetime import datetime
from copy import deepcopy
import random
import subprocess as sp
from enum import Enum, auto
import tqdm

sys.path.append(os.path.join(os.path.dirname(__file__), ".."))

from iogenerator.functioner import FunctionDB
from iogenerator.variable import VarType

CC1 = "gcc"  # use two compilers to avoid unspecified behavior
CC2 = "clang"
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

    var_name: str  # variable name
    var_type: str  # variable type as string
    var_value: int  # value
    is_stable: bool = (
        True  # if the variable values is stable, i.e., never changed or len(set(values))<=1.
    )
    is_constant: bool = False  # variable has "const" keyword
    is_global: bool = False  # if the vairable has global storage
    scope_id: int = -1  # scope id of the variable


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
        Run and collect values.
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

        with tempfile.NamedTemporaryFile(suffix=".out", delete=True) as tmp_f:
            tmp_f.close()
            exe_out = tmp_f.name
            # run with CC1
            ret, _ = run_cmd(f"{CC1} -w -O0 {filename} -o {exe_out}", DEBUG=self.DEBUG)
            if ret != CMD.OK:
                if os.path.exists(exe_out):
                    os.remove(exe_out)
                if self.DEBUG:
                    print(
                        datetime.now().strftime("%d/%m/%Y %H:%M:%S"),
                        ">>run_cmd with {CC1} failed.",
                        flush=True,
                    )
                raise ProfilerError
            ret, profile_out_1 = run_cmd(exe_out, timeout=3, DEBUG=self.DEBUG)
            if ret != CMD.OK:
                os.remove(exe_out)
                if self.DEBUG:
                    print(
                        datetime.now().strftime("%d/%m/%Y %H:%M:%S"),
                        ">>run_cmd with {exe_out} failed.",
                        flush=True,
                    )
                raise ProfilerError
            os.remove(exe_out)

        raw_values_1 = [
            [item.split(":")[0].replace("Tag", "")]
            + [x for x in item.split(":")[1:] if x != ""]
            for item in profile_out_1.split()
            if "Tag" in item
        ]

        if self.DEBUG:
            print(
                datetime.now().strftime("%d/%m/%Y %H:%M:%S"),
                f">>length of raw_values: {len(raw_values_1)}",
                flush=True,
            )
        # construct tags
        self.alive_tags = []
        # get values and check stability with raw_values_1
        checked_tag_id = (
            []
        )  # all tag_id that have been checked. A tag's env is not stable if it has never been checked.
        for i in range(len(raw_values_1)):
            tag_info = raw_values_1[i]
            curr_tag_id = int(tag_info[0])
            curr_num_env = len(tag_info) - 2
            curr_tag_var_value = int(tag_info[1])
            curr_tag_env_value_list = (
                [] if curr_num_env == 0 else list(map(int, tag_info[2:]))
            )
            # Test the stability of the tag_var
            if hasattr(self.tags[curr_tag_id].tag_var, "var_value"):
                if curr_tag_var_value != self.tags[curr_tag_id].tag_var.var_value:
                    self.tags[curr_tag_id].tag_var.is_stable = False
            else:
                self.tags[curr_tag_id].tag_var.var_value = curr_tag_var_value
            if (
                curr_tag_var_value == INVALID_TAG_VALUE
            ):  # invalid tag value because of null pointer. should only in env vars
                self.tags[curr_tag_id].tag_var.is_stable = False
            # Test the stability of each env var
            for env_i in range(curr_num_env):
                if hasattr(self.tags[curr_tag_id].tag_envs[env_i], "var_value"):
                    if (
                        curr_tag_env_value_list[env_i]
                        != self.tags[curr_tag_id].tag_envs[env_i].var_value
                    ):
                        self.tags[curr_tag_id].tag_envs[env_i].is_stable = False
                    checked_tag_id.append(
                        curr_tag_id
                    )  # if we are not assigning the value for the first time, the value is now checked.
                else:
                    self.tags[curr_tag_id].tag_envs[env_i].var_value = (
                        curr_tag_env_value_list[env_i]
                    )
                if (
                    curr_tag_env_value_list[env_i] == INVALID_TAG_VALUE
                ):  # invalid tag value because of null pointer. should only in env vars
                    self.tags[curr_tag_id].tag_envs[env_i].is_stable = False
            if curr_tag_id not in self.alive_tags:
                self.alive_tags.append(curr_tag_id)
        # all tag_id that have been checked. A tag's env is not stable if it has never been checked.
        for tag_id in self.alive_tags:
            if tag_id not in checked_tag_id:
                for env_i in range(len(self.tags[tag_id].tag_envs)):
                    self.tags[tag_id].tag_envs[env_i].is_stable = False
        # serialize tags to json
        serialized_tags = {}
        for tag_id in self.tags:
            tag = self.tags[tag_id]
            serialized_tags[tag_id] = {
                "tag_str": getattr(tag, "tag_str", ""),
                "func_name": getattr(tag, "func_name", ""),
                "tag_var": (
                    getattr(tag, "tag_var", None).__dict__ if tag.tag_var else {}
                ),
                "tag_envs": [env.__dict__ for env in getattr(tag, "tag_envs", [])],
                "statement_id": getattr(tag, "statement_id", None),
            }
        code = re.sub(r"(?s)\bint\s+main\s*\([^)]*\)\s*\{.*?\}", "", self.src_orig)

        return code, serialized_tags, self.alive_tags


class ProfilerError(Exception):
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

    args = parser.parse_args()
    if not os.path.exists(args.SRC):
        print(f"File {args.SRC} does not exist!")
        parser.print_help()
        exit(1)

    functionDB = FunctionDB(args.SRC)
    with tqdm.tqdm(total=len(functionDB.all_functions)) as pbar:
        for func in functionDB.all_functions:
            tmp_f = tempfile.NamedTemporaryFile(suffix=".c", delete=False)
            tmp_f.close
            with open(tmp_f.name, "w") as f:
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

            profiler = Profiler(DEBUG=False)
            try:
                profiled_code, serialized_tags, alive_tags = profiler.profiling(
                    tmp_f.name, func.call_name
                )
                func.function_body = profiled_code
                func.profile = serialized_tags
                func.alive_tags = alive_tags
            except ProfilerError:
                pass
            pbar.update(1)

    # Write to new function database
    with open(args.DST, "w") as f:
        for func in functionDB.all_functions:
            f.write(json.dumps(func.to_json()) + "\n")
