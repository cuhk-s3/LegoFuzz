# Csynth
A tool for profiling C program and then synthesizing mutants based on the profiled program.
This is a part of our LLM-based compiler testing tool.

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

**Step3: Synthesize the profiled program**

This step will produce synthesized programs with the programs in the source database and 
store the mutants in the destination directory.

```shell
$ python3 synthesizer.py --dst <destination dir> --db <source database>
```

## TODO

- [ ] Rename tags before synthesizing mutants
