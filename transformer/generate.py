#!/usr/bin/env python3
import json
import os
import re
import threading
import time
import argparse
import yaml
from concurrent.futures import ThreadPoolExecutor, as_completed
from pathlib import Path


from dotenv import load_dotenv

with open("config/config.yaml", "r", encoding="utf-8") as f:
    config = yaml.safe_load(f)

os.environ['all_proxy'] = ''
os.environ['ALL_PROXY'] = ''
os.environ["http_proxy"] = "http://127.0.0.1:7890"
os.environ["https_proxy"] = "http://127.0.0.1:7890"

MAX_THREADS = config["MAX_THREADS"]
PROMPT_CODE = config["PROMPT_CODE"]
MODEL_NAME = config["MODEL_NAME"]

from config.models import LLMClientFactory

load_dotenv()

count = 0
count_lock = threading.Lock()
log_lock = threading.Lock()

def process_single_item(file_path, dst, client):
    global count
    start_time = time.time()

    with open(file_path, "r", encoding="utf-8") as f:
        code_content = f.read()
    
    generation_query = PROMPT_CODE.format(code_snippet=code_content)
    response = client.create_chat_completion([generation_query])

    if response is None or response.choices is None or response.choices[0].message is None:
        return None

    generation_res = response.choices[0].message.content
    pattern = r"```(?:[Cc])?(.*?)```"
    match = re.search(pattern, generation_res, re.DOTALL)

    if match:
        code_snippet = match.group(1).strip()
        with count_lock:
            count += 1
            c_file_path = os.path.join(dst, f"{count}.c")

        with open(c_file_path, "w", encoding="utf-8") as f:
            f.write(code_snippet)

        end_time = time.time()
        time_interval = end_time - start_time

        return {
            "id": count,
            "path": file_path,
            "time": time_interval,
        }
    return None

def process_c_files(src, dst, client):    
    if not os.path.exists(dst):
        os.makedirs(dst, exist_ok=True)

    path_log_info_file = os.path.join(dst, "log.json")

    if not os.path.exists(path_log_info_file):
        with open(path_log_info_file, "w", encoding="utf-8") as f:
            json.dump([], f)

    try:
        with open(path_log_info_file, "r", encoding="utf-8") as f:
            log_data = json.load(f)
    except json.JSONDecodeError:
        log_data = []

    src_path = Path(src)
    c_files = list(src_path.rglob("*.c"))

    local_results = []
    
    max_inner_threads = min(MAX_THREADS, len(c_files))
    with ThreadPoolExecutor(max_workers=max_inner_threads) as executor:
        futures = {executor.submit(process_single_item, file, dst, client): file for file in c_files}
        
        for future in as_completed(futures):
            result = future.result()
            if result:
                local_results.append(result)

    with log_lock:
        log_data.extend(local_results)
        with open(path_log_info_file, "w", encoding="utf-8") as f:
            json.dump(log_data, f, ensure_ascii=False, indent=4)

def main():
    parser = argparse.ArgumentParser(description="Process a directory of C files and generate transformed C files in parallel.")
    parser.add_argument("-s", "--src", type=str, required=True, help="Path to the source directory containing C files")
    parser.add_argument("-d", "--dst", type=str, required=True, help="Directory to save generated C files")
    parser.add_argument("-m", "--model", type=str, choices=["openai", "deepseek", "togetherai"], required=True, help="Which LLM model to use (openai, deepseek, togetherai)")

    args = parser.parse_args()

    api_key = os.environ.get("OPENAI_API_KEY") if args.model == "openai" else \
              os.environ.get("DEEPSEEK_API_KEY") if args.model == "deepseek" else \
              os.environ.get("TOGETHER_API_KEY")

    client = LLMClientFactory.create_client(args.model, api_key=api_key)

    process_c_files(args.src, args.dst, client)

if __name__ == "__main__":
    main()
