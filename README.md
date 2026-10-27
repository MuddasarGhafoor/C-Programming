# C Programming

> A progressive collection of C programs covering core concepts, problem-solving exercises, and practical console projects.

![Language](https://img.shields.io/badge/Language-C-00599C?style=flat-square&logo=c)
![Programs](https://img.shields.io/badge/Standalone_Programs-163-2ea44f?style=flat-square)
![Level](https://img.shields.io/badge/Level-Beginner_to_Intermediate-orange?style=flat-square)

This repository records my progress while learning C programming. It starts with small experiments and language fundamentals, continues with structured university exercises, and finishes with standalone projects that combine multiple concepts.

## Repository Overview

```text
C-Programming/
├── 01_Learning/
├── 02_University/
├── 03_Projects/
├── .gitignore
├── LICENSE
└── README.md
```

### Detailed layout

```text
01_Learning/
├── 00_stupidity/
├── 01_introduction_and_basic_programs/
├── 02_operators_and_expressions/
├── 03_conditional_statements/
├── 04_loops/
├── 05_functions_and_recursion/
├── 06_pointers/
├── 07_arrays/
├── 08_strings/
├── 09_structures/
├── 10_file_handling/
├── 11_dynamic_memory_allocation/
└── c_boiler.code-snippets

02_University/
└── 40 numbered practice programs

03_Projects/
├── 01_number_guessing_game/
├── 02_snake_water_gun/
├── 03_hollow_parallelogram/
├── 04_banking_system/
├── 05_online_store/
├── 06_file_read_write/
├── 07_library_management_system/
├── 08_bit_byte_conversion/
└── 09_ascii_conversion/
```

## Learning Roadmap

| Section | Main Concepts | Programs |
|---|---|---:|
| Introduction and Basics | Output, input, variables, calculations and conversions | 10 |
| Operators and Expressions | Arithmetic, precedence and remainder | 2 |
| Conditional Statements | `if`, `else if`, `switch`, grading and comparisons | 8 |
| Loops | `while`, `do-while`, `for`, tables, factorial and prime numbers | 8 |
| Functions and Recursion | Prototypes, return values, parameters and recursive solutions | 9 |
| Pointers | Addresses, dereferencing, pointer parameters and double pointers | 8 |
| Arrays | One-, two- and three-dimensional arrays and pointer relationships | 15 |
| Strings | Input, library functions, slicing, character counting and simple ciphers | 16 |
| Structures | Records, structure pointers, `typedef`, vectors, complex numbers and dates | 11 |
| File Handling | Reading, writing, copying and character-based file operations | 9 |
| Dynamic Memory | `malloc`, `calloc`, `realloc` and `free` | 6 |
| `00_stupidity` - **Small Experiments** | Evaluation order, random numbers, ASCII values, operators and early loop experiments | 12 |

## University Exercises

| Directory | Contents | Programs |
|---|---|---:|
| `02_University` | Numbered exercises covering decisions, loops, patterns, functions, matrices and small interactive programs | 40 |

## Projects

| Project | Purpose |
|---|---|
| Number Guessing Game | Guess a random number with higher/lower hints |
| Snake Water Gun | Play a validated three-choice game against the computer |
| Hollow Parallelogram | Print a validated hollow pattern from entered dimensions |
| Banking System | Deposit, withdraw and inspect a validated account balance |
| Online Store | Select products, validate quantities and generate a bill |
| File Read/Write | Copy text between files while counting letter case |
| Library Management System | Maintain persistent book records through a menu |
| Bit/Byte Conversion | Safely convert non-negative values between binary storage units |
| ASCII Conversion | Display character values and estimated storage requirements |

## Compile and Run

Each real C source is a separate program with its own `main` function, so compile programs individually:

```bash
gcc program.c -o program
./program
```

Run file-based projects from their own directories so relative `.txt` paths resolve correctly.

## Notes

- The programs target C99 or newer because many examples declare loop variables inside `for` statements.
- Several early exercises include `conio.h`, a Windows-specific header. Where it is unused, it can be removed for GCC/Linux or Clang/macOS builds.
- `getche()` is also non-standard and may need to be replaced with standard input functions on non-Windows systems.
- The examples are intentionally kept as separate, focused programs instead of being linked into one application.
- `01_Learning/c_boiler.code-snippets` contains a reusable Visual Studio Code snippet definition.
- Some early and university exercises are preserved as learning history and may still need stronger input validation or edge-case handling.
- Generated executables and common build artifacts are excluded through `.gitignore`.
- The repository is distributed under the permissive MIT License.

## Suggested learning order

1. Work through the numbered folders under `01_Learning`.
2. Learn additional exercises  under `02_University`.
3. Explore the standalone applications under `03_Projects`.

---

Built as a personal record of learning, practicing, and improving with C.
