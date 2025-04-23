# LegoFuzz

**LegoFuzz** is an LLM-based fuzzing framework. It currently supports testing C compilers, such as GCC and LLVM. 

> The core idea behind LegoFuzz is to separate the whole testing process into two phases: offline and online. The offline phase queries LLMs to collect valid code snippets, which enables us to control the quality of code as well as the cost for LLMs querying. In contrast, the online phase eliminates the dependency on LLMs by **reusing** these pre-generated code snippets. Through our proposed *iterative program synthesis*, the online phase constructs increasingly complex yet valid programs for executing testing. 

This project is partly based on [Creal](https://github.com/UniCodeSphere/Creal). 

## Structure of the project

```
├── synthesize.py         # For iterative program synthesis
├── fuzz.py               # For conducting fuzzing
├── transformer           # LLMs-based real code-aligned code generation
│   ├── config            # Configuration for LLMs
│   └── generate.py       # For generating code with LLMs
├── databaseconstructor   # Constructing function database
│   ├── functionextractor  
│   │   └── extract.py    # For extracting valid functions
│   └── generate.py       # For generating IO for functions
├── profiler              
│   └── profile.py        # For profiling functions
└── utils                 # Development utilities
```

## QuickStart

**Step 1: Environment setup**

- **Python** >= 3.10
- **Csmith** (Please install it following [Csmith](https://github.com/csmith-project/csmith))
- **CSMITH_HOME**: After installing Csmith, please set the environment variable `CSMITH_HOME` to the installation path, with which we can locate `$CSMITH_HOME/include/csmith.h`.
- **CompCert** (Please install it following [CompCert](https://compcert.org/man/manual002.html#install))
- **clang** >= 18, **libclang-dev**
- **diopter** == 0.0.24 (`pip install diopter==0.0.24`)
- **termcolor** (`pip install termcolor`)
- **openai** (`pip install openai`)
- **together** (`pip install together`)

**Step 2: Synthesize a program**

> Please run `git lfs install && git lfs pull` first to download `functions.json`.

```shell
$ ./synthesize.py --src functions.json --dst ./tmp --iter 10
```

LegoFuzz will synthesize a program with 10 iterations. The synthesized program is stored in the `dst` directory, which is "./tmp" in this case. 

> Note: Due to GitHub's 2GB file size limitation, we are unable to provide the complete database containing 553,246 functions. Instead, `functions.json` currently includes 250,000 functions of the dataset. You can follow the full run instructions to generate the database yourself. 
>
> We are also preparing a formal artifact that will provide the complete dataset. Please stay tuned for the artifact release! 🚀

## Full run with LegoFuzz

> Before running, please setup the enviroment following Step 1 in Quickstart.

### Phase 1: Offline Code Database Construction with LLMs

**Step 1: Real Code-aligned Code Generation**

> All configurations related to LLMs, including model and prompt settings, are defined in `transformer/config/config.yaml`. Feel free to customize these settings to suit your needs.

Before getting started, ensure that your API key is properly configured by setting the environment variable:

```shell
$ cd transformer
$ echo "<API_KEY_NAME>=<API_KEY_SECRET>" > .env
```

LegoFuzz currently supports three API providers: OpenAI, TogetherAI, and DeepSeek. You can replace <API_KEY_NAME> with one of the following:

- OPENAI_API_KEY
- TOGETHER_API_KEY
- DEEPSEEK_API_KEY

If you wish to use a different platform, you can extend support in `transformer/config/models.py`. For instance, to integrate OpenRouter API, modify the LLMClient type and specify `base_url="https://openrouter.ai/api/v1"` in the __init__ method. We've provided essential API hooks for easy customization.

Once your API key is set, you can generate aligned C code using the following command:

```shell
$ ./generate.py --src <DIR_SRC> --dst <DIR_DST> openai 
```

Parameters explanation:

```shell
--src SRC             Path to the source directory containing C files
--dst DST             Directory to save generated C files
--model {openai,deepseek,togetherai}
                    Which LLM model to use (openai, deepseek, togetherai)
--max_files MAX_FILES 
                    Maximum number of C files to process (Optional)
```

**Step 2: Code Database Construction**

> Before proceeding, ensure you have followed the instructions in `databaseconstructor/functionextractor/README.md` and `profiler/README.md` to build the function extractor and profiler.

Firstly, extract functions from the LLMs-generated C files:

```shell
$ cd databaseconstructor/functionextractor
$ ./extract.py --src <DIR_C_FILES> --dst ./functions.json
```

Then generate I/O pairs for the functions with verification:

```shell
$ cd ..
$ ./generate.py --src functions.json --dst ./functions_io.json
```

Finally, proflie the functions:

```shell
$ cd ../profiler
$ ./profile.py --src ../databaseconstructor/functions_io.json --dst ./functions_profiled.json
```

> If you have multiple functions, there may be duplicate randomly generated names. Use the deduplication script: `./dedup.py functions_profiled.json`

After these steps, you will have a fully constructed function database.

### Phase 2: Online Iterative Program Synthesis

Once the function database is ready (`profiler/functions_profiled.json`), you can synthesize programs using:

```shell
$ ./synthesize.py --src profiler/functions_profiled.json --dst ./tmp --prob 80 --num_mutant 10 --iter 100
```

This command generates 10 mutants in the `tmp` directory, starting from an initial seed function.

Parameters explanation:

```shell
--src SRC                path to the function database json file.
--dst DST                path to the destination dir.
--prob PROB              probability of replacing an expression (default=80). 
--num_mutant NUM_MUTANT  number of mutants to generate (default=1).
--iter ITER              number of iterations for one synthesis (default=100).
--no-rand                randomize the number of iterations.
--inline                 inline the function call.
--debug                  print debug information.
```

### Fuzzing execution

The fuzzing process continuously synthesizes 10 mutants per iteration and applies differential testing to detect crashes or miscompilation bugs. 

Before starting fuzzing, configure the compiler settings by copying the example file:

```shell
$ cp compilers.in.example compilers.in
```

In compilers.in, specify the compiler commands you want to test, such as:

```
gcc -O0
gcc -O1
```

Then, start to fuzz:

```shell
$ ./fuzz.py --cpu 4 --config compilers.in
```

This will launch the fuzzing process using 4 CPU cores. A `fuzz` directory will be created and any detected bugs will be stored in `bugs` directory. 

Parameters explanation:

```shell
--cpu CPU        Number of CPUs to run in parallel (default: all available cores)
--config CONFIG  Path to compiler config file (default: ./compilers.in)
```
