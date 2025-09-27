#!/usr/bin/env python3
import json
import argparse
import random
import string
from collections import defaultdict
from tqdm import tqdm


def generate_random_suffix(length=3):
    """Generate a random string of uppercase letters."""
    return "".join(random.choices(string.ascii_letters, k=length))


def recursive_replace(obj, partial_map):
    """
    Recursively replace function names in all nested structures using `partial_map`.
    `partial_map` is specific to the JSON item (dict) at a particular top-level index.
    """
    if isinstance(obj, list):
        new_list = []
        for item in obj:
            if isinstance(item, (dict, list)):
                new_list.append(recursive_replace(item, partial_map))
            elif isinstance(item, str):
                new_str = item
                for old_name, new_name in partial_map.items():
                    if old_name in new_str:
                        new_str = new_str.replace(old_name, new_name)
                new_list.append(new_str)
            else:
                new_list.append(item)
        return new_list

    elif isinstance(obj, dict):
        new_dict = {}
        for k, v in obj.items():
            if isinstance(v, (dict, list)):
                new_dict[k] = recursive_replace(v, partial_map)
            elif isinstance(v, str):
                new_str = v
                for old_name, new_name in partial_map.items():
                    if old_name in new_str:
                        new_str = new_str.replace(old_name, new_name)
                new_dict[k] = new_str
            else:
                new_dict[k] = v
        return new_dict

    elif isinstance(obj, str):
        new_str = obj
        for old_name, new_name in partial_map.items():
            if old_name in new_str:
                new_str = new_str.replace(old_name, new_name)
        return new_str
    else:
        return obj


def update_function_names(json_file, output_file=None):
    """
    Update duplicate function names by adding a unique random suffix and
    replace all occurrences (including tag_envs, profile, etc.) in that item.
    If output_file is None, write back to the original file.
    """
    # First pass: read all data and collect function names
    data = []
    with open(json_file, "r", encoding="utf-8") as f:
        for line in f:
            line = line.strip()
            if line:  # skip empty lines
                data.append(json.loads(line))

    name_instances = defaultdict(list)

    # Step 1: Collect all function name instances with their index
    for idx, item in tqdm(
        enumerate(data), total=len(data), desc="Scanning function names"
    ):
        original_name = item["function_name"]
        name_instances[original_name].append(idx)

    idx_map = {}

    # Step 2: Assign new unique function names to duplicates
    for original_name, indices in tqdm(
        name_instances.items(), desc="Generating unique names"
    ):
        if len(indices) > 1:
            for i, idx in enumerate(indices):
                if i == 0:
                    idx_map[idx] = {original_name: original_name}
                else:
                    new_name = f"{original_name}_{generate_random_suffix()}"
                    while new_name in (
                        val for d in idx_map.values() for val in d.values()
                    ):
                        new_name = f"{original_name}_{generate_random_suffix()}"
                    idx_map[idx] = {original_name: new_name}
        else:
            idx = indices[0]
            idx_map[idx] = {original_name: original_name}

    for idx, item in enumerate(data):
        if idx in idx_map:
            partial_map = idx_map[idx]
            data[idx] = recursive_replace(item, partial_map)

    # Write back to JSONL format
    target_file = output_file if output_file else json_file
    with open(target_file, "w", encoding="utf-8") as f:
        for item in data:
            f.write(json.dumps(item) + "\n")

    if output_file:
        print(f"Updated JSONL saved to {target_file}")
    else:
        print(f"JSONL file updated in-place: {target_file}")


def main():
    parser = argparse.ArgumentParser(
        description="Remove duplicate function names in JSONL database"
    )
    parser.add_argument("input", help="Input JSONL file path")
    parser.add_argument(
        "-o", "--output", help="Output JSONL file path (default: update in-place)"
    )
    parser.add_argument(
        "--backup",
        action="store_true",
        help="Create backup of original file before updating in-place",
    )

    args = parser.parse_args()

    # Create backup if requested and updating in-place
    if args.backup and not args.output:
        backup_file = f"{args.input}.backup"
        import shutil

        shutil.copy2(args.input, backup_file)
        print(f"Backup created: {backup_file}")

    update_function_names(args.input, args.output)


if __name__ == "__main__":
    main()
