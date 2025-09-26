# LegoFuzz: Interleaving LLMs for Compiler Testing

<p align="center">
    <a href="https://arxiv.org/abs/2508.18955"><img src="https://img.shields.io/badge/arXiv-2508.18955-b31b1b.svg?style=for-the-badge">
    <a href="https://doi.org/10.5281/zenodo.15758741"><img src="https://img.shields.io/badge/DOI-15758741-blue?style=for-the-badge">
    <a href="https://github.com/cuhk-s3/LegoFuzz/blob/main/LICENSE"><img src="https://forthebadge.com/images/badges/cc-by.svg" style="height: 28px"></a>
</p>


## 📢 News

LegoFuzz is accepted to [ACM OOPSLA 2025](https://2025.splashcon.org/track/OOPSLA). Check out preprint here 👉 [Interleaving Large Language Models for Compiler Testing](https://arxiv.org/pdf/2508.18955) 👈

## 📙 About

**LegoFuzz** is an LLM-based fuzzing framework. It currently supports testing C compilers, such as GCC and LLVM. 

> The core idea behind LegoFuzz is to separate the whole testing process into two phases: offline and online (🧱⮕🏗️⮕🏠).
>
> The offline phase queries LLMs to collect valid code snippets, which enables us to control the quality of code as well as the cost for LLMs querying.
> In contrast, the online phase eliminates the dependency on LLMs by **reusing** these pre-generated code snippets. Through our proposed *iterative program synthesis*, the online phase constructs increasingly complex yet valid programs for executing testing. 

This project is partly based on [Creal](https://github.com/cuhk-s3/Creal). 

## 🔥 QuickStart

> [!Note]
> This QuickStart focuses on experiencing the **online phase** of LegoFuzz - the iterative program synthesis. 
> For the complete workflow including LLM-based code generation (offline phase), see the "Full run with LegoFuzz" section below.

**Step 1: Environment setup**

Run our automated setup script to install all dependencies:

```shell
$ ./setup.sh
```

**Step 2: Build with Lego blocks 🧱**

Now let's start assembling! We've prepared a function database (like a box of Lego blocks) for you. Let's construct test programs:

```shell
# Start building! Combine functions like Lego blocks
$ ./synthesize.py --src functions.json --dst ./out --iter 10
```

## 🏗️ Complete LegoFuzz Workflow: From Blocks to Bugs

Want to experience the full power of LegoFuzz? Let's build everything from scratch - just like creating your own custom Lego set and then building amazing creations with it!

### Phase 1: Create Your Lego Blocks 🎲
> *Let LLMs learn from real code and make perfect building blocks*

Think of this step as having an LLM watch how real programmers write code, then create a whole set of well-crafted function blocks in a consistent style.

Before getting started, ensure that your API key is properly configured by setting the environment variable:

```shell
$ cd llmgenerator
$ echo "<API_KEY_NAME>=<API_KEY_SECRET>" > .env
```

LegoFuzz currently supports three API providers: **OpenAI**, **TogetherAI**, and **DeepSeek**. You can replace `<API_KEY_NAME>` with one of the following:
- `OPENAI_API_KEY`
- `TOGETHER_API_KEY`  
- `DEEPSEEK_API_KEY`

Once your API key is set, you can generate real code-aligned C functions using the following command:

```shell
$ ./generate.py --src /path/to/c_files --dst /path/to/output --model openai
```

This offline phase uses Large Language Models to generate diverse, valid C functions that are aligned with real-world code patterns - these will serve as our high-quality "Lego blocks."

### Phase 2: Build the Block Database 🔧
> *Process and organize your blocks for optimal building*

```shell
# Transform raw functions into a structured database
$ cd dbconstructor
$ ./build_db.sh --src /path/to/output --dst /path/to/db
```

This step analyzes the generated functions, extracts their properties, and creates I/O examples - preparing them for intelligent assembly.

### Phase 3: Start Building & Fuzzing 🎯
> *Combine blocks to build programs and hunt for compiler bugs*

You can customize which compilers to test by editing the `compilers.in` file - add your favorite compilers with different optimization levels to maximize bug discovery potential.

Ready to start hunting for bugs? Launch the fuzzing campaign:

```shell
# Launch the fuzzing campaign
$ ./fuzz.py --src /path/to/db
```

Watch as LegoFuzz automatically:
- 🧱 Selects function blocks from your database
- 🔗 Combines them into complex programs  
- 🎯 **Tests the same program across different compiler settings**
- 🔍 **Compares outputs to detect inconsistencies**
- 🐛 Reports any compiler bugs it discovers 

## 🐛 Found Bugs

LegoFuzz has successfully discovered real compiler bugs! 🎉

We've included the bugs found in GCC and LLVM compilers by LegoFuzz in the `buglist/` directory. These findings demonstrate the effectiveness of our Lego-block approach to compiler testing.
