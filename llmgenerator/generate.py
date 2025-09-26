#!/usr/bin/env python3
import os
import re
import threading
import time
import argparse
import yaml
import json
from concurrent.futures import ThreadPoolExecutor, as_completed
from pathlib import Path

from dotenv import load_dotenv

with open("config/config.yaml", "r", encoding="utf-8") as f:
    config = yaml.safe_load(f)

MAX_THREADS = config["MAX_THREADS"]
PROMPT_CODE = config["PROMPT_CODE"]
MODEL_NAME = config["MODEL_NAME"]

from config.models import LLMClientFactory

load_dotenv()

count = 0
count_lock = threading.Lock()
stop_event = threading.Event()

def process_single_item(file_path, dst, client, max_files):
    global count
    
    if stop_event.is_set():
        return None

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
            if max_files is not None and count >= max_files:
                stop_event.set()
                return None
            count += 1
            file_number = count
            if max_files is not None and count >= max_files:
                stop_event.set()
        
        c_file_path = os.path.join(dst, f"{file_number}.c")
        with open(c_file_path, "w", encoding="utf-8") as f:
            f.write(code_snippet)
        
        end_time = time.time()
        time_interval = end_time - start_time

        return {
            "id": file_number,
            "path": str(file_path),
            "time": time_interval,
        }
    
    return None

def process_c_files(src, dst, client, max_files=None):
    global count
    
    if not os.path.exists(dst):
        os.makedirs(dst, exist_ok=True)
    
    src_path = Path(src)
    c_files = list(src_path.rglob("*.c"))
    results = []
    
    with ThreadPoolExecutor(max_workers=MAX_THREADS) as executor:
        futures = []
        for file in c_files:
            with count_lock:
                if max_files is not None and count >= max_files:
                    break
            futures.append(executor.submit(process_single_item, file, dst, client, max_files))
        
        for future in as_completed(futures):
            result = future.result()
            if result:
                results.append(result)
    
    result_file = os.path.join(dst, "results.json")
    with open(result_file, "w", encoding="utf-8") as f:
        json.dump(results, f, ensure_ascii=False, indent=4)

def main():
    parser = argparse.ArgumentParser(description="Process a directory of C files and generate transformed C files in parallel.")
    parser.add_argument("--src", type=str, required=True, help="Path to the source directory containing C files")
    parser.add_argument("--dst", type=str, required=True, help="Directory to save generated C files")
    parser.add_argument("--model", type=str, choices=["openai", "deepseek", "togetherai"], required=True, help="Which LLM model to use (openai, deepseek, togetherai)")
    parser.add_argument("--max_files", type=int, default=None, help="Maximum number of C files to process")
    
    args = parser.parse_args()
    
    api_key = os.environ.get("OPENAI_API_KEY") if args.model == "openai" else \
              os.environ.get("DEEPSEEK_API_KEY") if args.model == "deepseek" else \
              os.environ.get("TOGETHER_API_KEY")
    
    client = LLMClientFactory.create_client(args.model, api_key=api_key)
    
    process_c_files(args.src, args.dst, client, args.max_files)

if __name__ == "__main__":
    main()
