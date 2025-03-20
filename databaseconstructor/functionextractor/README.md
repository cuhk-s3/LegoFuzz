#### Function extractor

This tool checks all defined functions in an input file and prints the names of
these with the following properties:

- All arguments are of type `int`
- The return value is of type `int`

#### Prerequisites

LLVM, clang, cmake, parallel, ninja


#### Build

```
make build
cd build
cmake .. -G Ninja
ninja
```
