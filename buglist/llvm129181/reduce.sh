#!/bin/bash

ulimit -t 10

clang="/home/yunbo/eval/compilers/llvm_latest/bin/clang"

clang -O0 simple.c -fsanitize=undefined,address -fno-sanitize-recover=all -o san.out >/dev/null 2>&1
if [ $? -ne 0 ];then
    exit 1
fi
./san.out >/dev/null 2>&1
if [ $? -ne 0 ];then
    exit 1
fi

$clang -O0 simple.c -o O0.out -Wall >warning.txt 2>&1
if [ $? -ne 0 ];then
    exit 1
fi
./O0.out >O0.txt 2>&1
if [ $? -ne 0 ];then
    exit 1
fi

# if grep -q "is used uninitialized" warning.txt || grep -q "conflicting types for built-in function" warning.txt; then
#     exit 1
# fi
rm warning.txt

$clang -O1 simple.c -o O1.out >/dev/null 2>&1
if [ $? -ne 0 ];then
    exit 1
fi
./O1.out >O1.txt 2>&1
if [ $? -ne 0 ];then
    exit 1
fi

$clang -O2 simple.c -o O2.out >/dev/null 2>&1
if [ $? -ne 0 ];then
    exit 1
fi
./O2.out >O2.txt 2>&1

diff O0.txt O1.txt && ! diff O0.txt O2.txt > /dev/null 2>&1

