#!/usr/bin/env python3
import glob
import argparse
import multiprocessing as mp
import re
import sys
import os, shutil, time, tempfile, signal, random, string
from datetime import datetime
from glob import glob
from enum import Enum, auto
from diopter.compiler import (
    CompilationSetting,
    CompilerExe,
    OptLevel,
    SourceProgram,
    Language,
)
from diopter.sanitizer import Sanitizer
from diopter.utils import TempDirEnv
import subprocess as sp
from dbconstructor.iogenerator.functioner import FunctionDB
from synthesize import Synthesizer
from dbconstructor.utils.compcert import CComp as this_CComp
from pathlib import Path

DEBUG = 1
NUM_MUTANTS = 10
COMPILER_TIMEOUT = 200
PROG_TIMEOUT = 10
CCOMP_TIMEOUT = 60
CSMITH_HOME = os.environ["CSMITH_HOME"]

GEN_BASE = "/data/yunboni/projects/compiler-fuzz-ci/compiler_flags_gen/target/debug/compiler_flags_gen"
GEN_TIMEOUT = 5

def gen_random_basic_flags(compiler: str) -> list[str]:
    if "clang" in compiler:
        gen_cmd = f"{GEN_BASE} --llvm --compile --flags basic-flags"
    else:
        gen_cmd = f"{GEN_BASE} --gcc --compile --flags basic-flags"
    ret, out = run_cmd(gen_cmd, GEN_TIMEOUT)
    if ret != 0 or not out:
        return []
    tokens = [t for t in out.strip().split() if t.startswith("-")]
    drop_prefixes = (
        "-march=", "-mabi=", "--target=", "-I", "-w",
        "-fuse-ld=", "-static", "-shared", "-pie", "-nostdlib", "-nodefaultlibs",
        "-Wl,", "--sysroot", "-l", "-L",
    )
    extra_drop_exact = {"-flto", "-ffat-lto-objects", "-mbig-endian", "-msave-restore"}
    # filter out flags that are known to cause heavy work or are undesirable
    # also drop any register-fixed flags like '-ffixed-x19'
    return [t for t in tokens if 'ffixed' not in t and not any(t.startswith(p) for p in drop_prefixes) and t not in extra_drop_exact]

def find_riscv_vector_include():
    clang_path = sp.check_output(['which', 'clang'], text=True).strip()
    clang_root = os.path.dirname(os.path.dirname(clang_path))
    candidate_dirs = glob(os.path.join(clang_root, 'lib', 'clang', '*', 'include'))
    for inc_dir in candidate_dirs:
        if os.path.exists(os.path.join(inc_dir, 'riscv_vector.h')):
            return os.path.join(inc_dir, 'riscv_vector.h')
    raise FileNotFoundError("No path to include is found")

WORK_DIR = "work"

def get_cc_args(compiler: str):
    if "clang" in compiler:
        return f"--target=riscv64-unknown-linux-gnu -march=rv64gcv -mabi=lp64d -menable-experimental-extensions -I{find_riscv_vector_include()}"
    else:
        return "-march=rv64gcv -mabi=lp64d"

class CompCode(Enum):
    OK = auto()
    Timeout = auto()
    Sanfail = auto()
    Crash = auto()
    Error = auto()
    WrongEval = auto()
    Wrong = auto()

def generate_random_string(len: int = 5) -> str:
    return "".join(random.choice(string.ascii_uppercase + string.ascii_lowercase + string.digits) for _ in range(len))

def run_cmd(cmd, timeout):
    if type(cmd) is not list:
        cmd = [x for x in cmd.split(" ") if x]
    process = sp.Popen(cmd, stdout=sp.PIPE, stderr=sp.PIPE)
    try:
        output, error = process.communicate(timeout=timeout)
        output = output.decode("utf-8", errors="ignore")
    except sp.TimeoutExpired:
        try:
            os.killpg(process.pid, signal.SIGTERM)
        except ProcessLookupError:
            pass
        output = ""
        cmd_str = " ".join(cmd)
        if ".exe" in cmd_str:
            os.system(f"pkill -9 -f -- '{cmd_str}'")
        return 124, output
    return process.returncode, output

def write_bug_desc_to_file(to_file, data):
    with open(to_file, "a") as f:
        f.write(f"/* {data} */\n")

def read_checksum(data):
    res = re.findall(r"checksum = (.*)", data)
    return res[0] if len(res) > 0 else "NO_CKSUM"

def compile_and_run(compiler, src, cc_args):
    """compile and run once with given args"""
    cksum = ""
    tmp_f = tempfile.NamedTemporaryFile(suffix=".exe", delete=False)
    exe = tmp_f.name
    tmp_f.close()
    cmd = f"{compiler} {src} {cc_args} -o {exe}"
    ret, out = run_cmd(cmd, COMPILER_TIMEOUT)
    # workaround for difference between clang and gcc
    if "-Wincompatible-pointer-types" in out: 
        return CompCode.OK, cksum
    if ret == 124:
        time.sleep(1)
        ret, out = run_cmd(cmd, COMPILER_TIMEOUT)
    if ret == 124:
        write_bug_desc_to_file(src, f"Compiler timeout! Can't compile with {compiler} {cc_args}")
        os.remove(exe) if os.path.exists(exe) else None
        return CompCode.Timeout, cksum
    if ret != 0:
        write_bug_desc_to_file(src, f"Compiler crash! Can't compile with {compiler} {cc_args}")
        os.remove(exe) if os.path.exists(exe) else None
        return CompCode.Crash, cksum

    os.remove(exe) if os.path.exists(exe) else None
    return CompCode.OK, cksum

def check_compile(src: str, compilers: list) -> CompCode:
    """Each compiler: 1×base + 1xgisel + 5×random flags."""
    for comp in compilers:
        cc_args = get_cc_args(comp)
        ret, cksum = compile_and_run(comp, src, cc_args)
        if DEBUG:
            print(f"[{datetime.now().strftime('%H:%M:%S')}] {comp} base", flush=True)
        if ret != CompCode.OK:
            return ret

        if "clang" in comp:
            ret, cksum = compile_and_run(comp, src, f"{cc_args} -fglobal-isel")
            if DEBUG:
                print(f"[{datetime.now().strftime('%H:%M:%S')}] {comp} gisel", flush=True)
            if ret != CompCode.OK:
                return ret

        for i in range(5):
            flags = gen_random_basic_flags(comp)
            cc_args = cc_args if not flags else f"{cc_args} {' '.join(flags)}"
            if DEBUG:
                print(f"[{datetime.now().strftime('%H:%M:%S')}] {comp} random flags {i+1}/5: {' '.join(flags) if flags else '(none)'}", flush=True)
            ret, cksum = compile_and_run(comp, src, cc_args)
            if ret != CompCode.OK:
                return ret

    return CompCode.OK

def run_one(compilers: list[str], save_wrong_dir: Path, SYNER: Synthesizer) -> Path | None:
    try:
        current_dir = Path.cwd() / WORK_DIR
        _, syn_files, _ = SYNER.synthesizer(dst_dir=current_dir)
    except Exception as e:
        print(f"SynthesizerError: {e}")
        return None

    src = syn_files[0]
    for syn_f in syn_files[1:]:
        print(f"Synthesized program {syn_f}", flush=True)
        ret = check_compile(syn_f, compilers)
        if ret == CompCode.Crash:
            rand_name = generate_random_string(8)
            case_dir = save_wrong_dir / f"case_{rand_name}"
            case_dir.mkdir(parents=True, exist_ok=True)
            shutil.copyfile(syn_f, case_dir / "case.c")
            shutil.copyfile(src, case_dir / "orig.c")
            print(f"COMPILER BUG FOUND: id {rand_name}", flush=True)
            return case_dir / "case.c"
    for f in syn_files:
        os.remove(f)
    print("--------------------------")
    return None

def parse_compilers(compiler_config_file):
    with open(compiler_config_file, "r") as f:
        lines = [l.strip() for l in f if l.strip()]
    compilers = []
    for line in lines:
        with tempfile.NamedTemporaryFile(suffix=".c", mode="w", delete=False) as tmp_f:
            tmp_f.write("int main() { return 0;}")
            tmp_f.close()
            ret, _ = run_cmd(f"{line} {tmp_f.name} -o /dev/null", COMPILER_TIMEOUT)
            os.remove(tmp_f.name)
            if ret == 0:
                compilers.append(line)
    return compilers

def fuzz_worker(worker_id: int, compilers: list[str], func_db: FunctionDB):
    save_dir = Path("bugs").resolve()
    save_dir.mkdir(parents=True, exist_ok=True)

    work_dir = Path(f"fuzz/work{worker_id}")
    work_dir.mkdir(parents=True, exist_ok=True)
    os.chdir(work_dir.absolute().as_posix())

    inner_work_dir = Path("work")
    inner_work_dir.mkdir(parents=True, exist_ok=True)
    for item in inner_work_dir.iterdir():
        if item.is_file():
            item.unlink()
        elif item.is_dir():
            shutil.rmtree(item)

    sys.stdout = open("log.txt", "w")
    sys.stderr = sys.stdout

    print(f"[{datetime.now().strftime('%Y-%m-%d %H:%M:%S')}] LegoFuzz starts", flush=True)

    SYNER = Synthesizer(func_database=func_db, prob=80, num_mutant=NUM_MUTANTS, iter=100, RAND=True, INLINE=False, DEBUG=False)

    with TempDirEnv() as tmp_dir:
        os.environ["TMPDIR"] = tmp_dir.absolute().as_posix()
        while True:
            run_one(compilers, save_dir, SYNER)
            for p in tmp_dir.iterdir():
                try:
                    p.unlink()
                except IsADirectoryError:
                    shutil.rmtree(p, ignore_errors=True)
                except Exception:
                    pass

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Let's LegoFuzz!")
    parser.add_argument("--src", type=str, default="functions.jsonl")
    parser.add_argument("--cpu", type=int, default=mp.cpu_count())
    parser.add_argument("--config", type=str, default="compilers.in")
    args = parser.parse_args()

    if not os.path.exists(args.src):
        print(f"Error: Function database file '{args.src}' not found!")
        sys.exit(1)

    compilers = parse_compilers(args.config)
    func_db = FunctionDB(args.src)

    processes = []
    for i in range(args.cpu):
        p = mp.Process(target=fuzz_worker, args=(i, compilers, func_db))
        p.start()
        processes.append(p)
    for p in processes:
        p.join()
