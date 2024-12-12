# Cprofiler
A tool for profiling C program. This is a part of offline mode of our LLM-based compiler testing tool.

## Usage

**Step 1: Compile the profiler**
```shell
$ cd profiler
$ mkdir build
$ cd build
$ cmake ..
$ make
```

**Step2: Profile the program**

This step will add profile information and replace code with the profiled one to functions in the source database and save the result to the destination database.

```shell
$ python3 profiler.py --src <source database> --dst <destination database>
```
