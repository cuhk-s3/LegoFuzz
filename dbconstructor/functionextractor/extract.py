#!/usr/bin/env python3
import os, argparse, json, tempfile, re, random, string
from pathlib import Path
import subprocess as sp
from copy import deepcopy
import multiprocessing as mp
from tqdm import tqdm
from diopter.compiler import (
    CompilationSetting,
    CompilerExe,
    OptLevel,
    SourceProgram,
    Language,
)

# path of functionextractor
FUNCTION_EXTRACTOR_PATH = os.path.join(
    os.path.dirname(__file__), "build/bin/functionextractor"
)
# compiler args such as -I$CSMITH_HOME/include
CC_ARGS = ""
# minimum size of extracted function in tokens separated by space
MIN_FUNC_SIZE = 0


def run_cmd(cmd, timeout=5):
    if type(cmd) is not list:
        cmd = cmd.split(" ")
    try:
        proc = sp.run(cmd, timeout=timeout, capture_output=True)
        return True if proc.returncode == 0 else False, proc.stdout.decode("utf-8")
    except:
        return False, ""


def is_interesting_function(function_text):
    """Returns True if the function body is long enough (>MIN_FUNC_SIZE)"""
    body_start = function_text.find("{") + 1
    body_end = function_text.rfind("}")
    if (
        len(
            [
                x
                for x in function_text[body_start:body_end]
                .replace("\t", " ")
                .replace("\n", " ")
                .replace("(1);", " ")
                .split(" ")
                if x != ""
            ]
        )
        < MIN_FUNC_SIZE
    ):
        return False
    return True


def extract_one_file(src_file):
    with tempfile.NamedTemporaryFile(
        suffix=".c", mode="w", delete=False
    ) as tmp_src_file:
        with open(src_file, "r") as f:
            tmp_src_file.write(f.read())
        tmp_src_file_path = tmp_src_file.name

    # --mode rename
    ret, _ = run_cmd(
        f"{FUNCTION_EXTRACTOR_PATH} --mode rename {tmp_src_file_path} -- -w {CC_ARGS}"
    )
    # --mode rename-global
    ret, _ = run_cmd(
        f"{FUNCTION_EXTRACTOR_PATH} --mode rename-global {tmp_src_file_path} -- -w {CC_ARGS}"
    )
    # --mode rename-struct
    ret, _ = run_cmd(
        f"{FUNCTION_EXTRACTOR_PATH} --mode rename-struct {tmp_src_file_path} -- -w {CC_ARGS}"
    )
    # --mode rename-var
    ret, _ = run_cmd(
        f"{FUNCTION_EXTRACTOR_PATH} --mode rename-var {tmp_src_file_path} -- -w {CC_ARGS}"
    )
    # --mode extract-headers
    ret, headers = run_cmd(
        f"{FUNCTION_EXTRACTOR_PATH} --mode extract-header {tmp_src_file_path} -- -w {CC_ARGS}"
    )
    # --mode extract-struct
    ret, structs = run_cmd(
        f"{FUNCTION_EXTRACTOR_PATH} --mode extract-struct {tmp_src_file_path} -- -w {CC_ARGS}"
    )
    if ret == False:
        os.remove(tmp_src_file_path)
        return ""

    with open(tmp_src_file_path, "r") as f:
        prog = SourceProgram(code=f.read(), language=Language.C)
    comp = CompilationSetting(
        compiler=CompilerExe.get_system_clang(),
        opt_level=OptLevel.O0,
    )
    pre_prog = comp.preprocess_program(prog)

    with tempfile.NamedTemporaryFile(suffix=".c", mode="w", delete=False) as tmp_f:
        tmp_f.write(pre_prog.get_modified_code())
        tmp_f.close()
        tmp_f_path = tmp_f.name

    # --mode process
    ret, _ = run_cmd(
        f"{FUNCTION_EXTRACTOR_PATH} --mode process {tmp_f_path} -- -w {CC_ARGS}"
    )
    # --mode extract
    ret, res = run_cmd(
        f"{FUNCTION_EXTRACTOR_PATH} --mode extract {tmp_f_path} -- -w {CC_ARGS}"
    )

    os.remove(tmp_f_path)
    os.remove(tmp_src_file_path)

    if ret == False or res == "":
        return ""

    extracted_json = {"misc": [], "function": ""}
    to_replace_typedef_list = []

    for item in headers.split("\n"):
        if item.strip() == "":
            continue
        item_json = json.loads(item)
        if "include" in item_json:
            extracted_json["misc"].append(
                "#include" + ' "' + item_json["include"] + '"'
            )
    for item in structs.split("\n"):
        if item.strip() == "":
            continue
        item_json = json.loads(item)
        if "typedef" in item_json:
            extracted_json["misc"].append(item_json["typedef"] + ";")
        elif "struct" in item_json:
            extracted_json["misc"].append(item_json["struct"] + ";")
    for item in res.split("\n"):
        if item.strip() == "":
            continue
        item_json = json.loads(item)
        if "typedef" in item_json:
            matched_typedef = re.findall(
                r"typedef\s+([\w\s\*\_]+)\s([\w\_]+)", item_json["typedef"]
            )
            if len(matched_typedef) > 0:
                type_replace, type_orig = matched_typedef[0]
                if re.search(rf"\b{re.escape(type_orig)}\b", type_replace):
                    continue
                to_replace_typedef_list.append(matched_typedef[0])
        elif "global" in item_json:
            if "struct" not in item_json["global"]:
                extracted_json["misc"].append(
                    item_json["global"] + " = " + str(random.randint(-10, 20)) + ";"
                )
            else:
                extracted_json["misc"].append(item_json["global"] + ";")
        else:
            for key in item_json:
                extracted_json[key] = item_json[key]

    extracted_json["src_file"] = str(src_file)

    if not is_interesting_function(extracted_json["function"]):
        extracted_json = ""
    else:
        matched_lego_name = re.findall(r"(lego\_\w+)", extracted_json["function"])
        if len(matched_lego_name) > 0:
            matched_lego_name = matched_lego_name[0]
        else:
            matched_lego_name = "lego_" + "".join(
                random.choice(
                    string.ascii_uppercase + string.ascii_lowercase + string.digits
                )
                for _ in range(5)
            )
        while True:
            has_type_change = False
            for type_replace, type_orig in to_replace_typedef_list[::-1]:
                for key in extracted_json:
                    if type(extracted_json[key]) is list:
                        for i in range(len(extracted_json[key])):
                            orig_extracted_json_value = deepcopy(extracted_json[key][i])
                            extracted_json[key][i] = re.sub(
                                r"\b" + type_orig + r"\b",
                                type_replace,
                                extracted_json[key][i],
                            )
                            if orig_extracted_json_value != extracted_json[key][i]:
                                has_type_change = True
                    else:
                        orig_extracted_json_value = deepcopy(extracted_json[key])
                        extracted_json[key] = re.sub(
                            r"\b" + type_orig + r"\b", type_replace, extracted_json[key]
                        )
                        if orig_extracted_json_value != extracted_json[key]:
                            has_type_change = True
            if not has_type_change:
                break

    return extracted_json


if __name__ == "__main__":

    parser = argparse.ArgumentParser(
        description="Extract  closed functions from files."
    )
    parser.add_argument(
        "--src", dest="SRC", required=True, help="C/C++ source directory."
    )
    parser.add_argument(
        "--dst",
        dest="DST",
        default="./functions.jsonl",
        help="(jsonl) filename to store the extracted functions.",
    )
    parser.add_argument(
        "--cpu",
        dest="CPU",
        default=-1,
        type=int,
        help="number of io pairs generated for each function. (default=#ALL_CPUs)",
    )
    parser.add_argument(
        "--min",
        dest="MIN_SIZE",
        default=5,
        type=int,
        help="minimum size of a function in tokens. (default=5)",
    )
    args = parser.parse_args()
    if not os.path.exists(args.SRC):
        print(f"Directory {args.SRC} does not exist!")
        parser.print_help()
        exit(1)
    MIN_FUNC_SIZE = args.MIN_SIZE

    src_files = list(Path(args.SRC).rglob("*.c"))
    src_files.extend(list(Path(args.SRC).rglob("*.cpp")))

    cpu_count = mp.cpu_count()
    cpu_use = cpu_count if args.CPU == -1 else min(cpu_count, args.CPU)

    with open(args.DST, "w") as f:
        with tqdm(total=len(src_files)) as pbar, mp.Pool(cpu_use) as pool:
            for res in pool.imap(extract_one_file, src_files):
                pbar.update()
                if res != "":
                    f.write(json.dumps(res) + "\n")
