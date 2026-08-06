# 📘 Chapter 1: Basics & Variables

> Master the foundational building blocks of C programming: compilation, variables, memory storage, data types, and fundamental input/output operations.

---

## Chapter Overview

This chapter serves as your entry point into the C language. You will explore how C programs compile and execute, how data is stored in computer memory using variables and constants, and how to interact with users via standard input and output streams. Designed for quick scanning and hands-on practice, this chapter lays the groundwork required for writing clean, efficient low-level software.

### Introduction to C

C is a general-purpose, procedural programming language developed by Dennis Ritchie at Bell Labs. It is widely used for systems programming, operating systems (like Linux and Windows kernels), embedded systems, compilers, and high-performance applications.

C gives direct access to memory, which makes it fast and efficient, helping programmers understand how computers work under the hood—knowledge that carries over into almost every modern language.

---

## Chapter Information

| Metadata | Details |
| :--- | :--- |
| **Difficulty** | 🟢 Beginner |
| **Prerequisite** | None (Starting Chapter) |
| **Estimated Time** | ~2–3 Hours |
| **Practice Directories** | [`easy/`](./easy/), [`medium/`](./medium/), [`hard/`](./hard/) |
| **Visual Cheat Sheet** | Included ([View Image](./images/C%20programming%20Visual%20Notes_watermark_page-0001.jpg)) |

---

## Topics Covered

- [x] Setup & Compilation Architecture
- [x] Anatomy of a C Program
- [x] Variables & Memory
- [x] Variable Naming Rules
- [x] Data Types
- [x] Constants
- [x] Input & Output
- [x] Format Specifiers
- [x] Keywords
- [x] Comments

---

## 📖 Chapter Theory

### 1. Setup & Compilation Architecture

Before a C program can execute, it passes through distinct stages:

| Stage | Tool | Description |
| :--- | :--- | :--- |
| **1. Code Editor** | VS Code, Code::Blocks, Dev-C++, CLion | Where you write your human-readable C source code and save it as a `.c` file. |
| **2. Compiler** | GCC / MinGW (on Windows) | Checks for syntax errors and translates source code into machine-executable binary code. |
| **3. Machine Code** | — | The executable binary the OS runs (`program.exe` on Windows, `a.out` on Linux/macOS). |

```text
Source Code (.c)  ➜  Compiler (GCC/MinGW)  ➜  Executable (.exe / a.out)
```

> 💡 **Pro Tip**: When using MinGW on Windows, add the MinGW `bin` folder to your system's Environment Variables (`PATH`)—otherwise your terminal won't recognize the `gcc` command.

---

### 2. Anatomy of a C Program

Every C program follows a standard skeleton:

```c
#include <stdio.h>

int main() {
    printf("Hello World\n");
    return 0;
}
```

#### Line-by-Line Breakdown:

| Component | Meaning |
| :--- | :--- |
| `#include <stdio.h>` | Preprocessor directive that includes the Standard Input/Output library. Provides functions like `printf()` and `scanf()`. |
| `int main()` | Execution entry point. Every C program begins at `main()`. `int` specifies that it returns an integer status code to the OS. |
| `{ ... }` | Curly braces that enclose the code block for the main function. |
| `printf("Hello World\n");` | Displays text output on the screen. |
| `\n` | Newline escape sequence—moves the cursor to the next line. |
| `;` | Semicolon terminator. Every statement in C must end with a semicolon. |
| `return 0;` | Returns status code `0` to the operating system, signaling successful execution. |

#### Example: `\n` Escape Sequence in Action

```c
printf("Hello\n");
printf("World");
```

**Output:**
```text
Hello
World
```

---

### 3. Variables & Memory

A variable is a named location in memory used to hold data values. Every variable possesses a name, an assigned memory address, and a stored value.

```c
int age = 20;
```

Here: Variable name → `age`, Data value → `20`, stored in a system-allocated memory location.

#### The Kitchen Container Analogy

Think of a variable like a labeled storage container in a kitchen:
- **Variable Name**: The label on the container (e.g., `cookieJar`).
- **Memory Location**: The physical spot on the shelf where the container rests.
- **Data Value**: The items stored inside (e.g., `3` cookies).

```c
int cookieJar = 3;
```

#### Variable Naming Rules

- ✅ **Valid**:
  - Must begin with an alphabet letter (`a-z`, `A-Z`) or an underscore (`_`).
  - Case-sensitive: `age` and `Age` are two distinct variables.
  - May contain digits after the first character.
  - *Examples*: `age`, `_age`, `student1`, `totalMarks`
- ❌ **Invalid**:
  - Cannot begin with a number (e.g., `1age`).
  - Cannot contain spaces or commas (e.g., `student name`).
  - Cannot contain special symbols like `@`, `#`, `%` (e.g., `price@`).

---

### 4. Data Types & Constants

#### Primitive Data Types

C requires explicit type declarations before using variables:

| Data Type | Description | Example | Typical Size | Format Specifier |
| :--- | :--- | :--- | :--- | :---: |
| `int` | Whole numbers | `int age = 20;` | 2 or 4 bytes | `%d` |
| `float` | Decimal numbers | `float pi = 3.14;` | 4 bytes | `%f` |
| `char` | Single character | `char grade = 'A';` | 1 byte | `%c` |
| `double` | Double-precision float | `double price = 99.99;` | 8 bytes | `%lf` |

> ⚠️ **Important**: C does not have built-in `String` or `boolean` types. Strings are represented as arrays of characters (`char str[]`), and booleans are represented using integers (`0` = false, non-zero = true) or via `<stdbool.h>` in C99+.

#### Constants

Fixed values that cannot be modified during program execution.

| Constant Type | Examples | Description |
| :--- | :--- | :--- |
| **Integer Constants** | `1`, `2`, `100`, `0` | Literal whole numbers |
| **Real Constants** | `1.0`, `3.14`, `-0.05` | Floating-point decimal values |
| **Character Constants** | `'A'`, `'*'`, `'7'` | Single characters enclosed in single quotes |

---

### 5. Input, Output & Keywords

#### Output — `printf()`
Displays formatted data on the terminal output.

```c
int age = 20;
printf("Age = %d", age);
```

#### Input — `scanf()`
Reads formatted input from the user keyboard and stores it into a variable.

```c
int age;
scanf("%d", &age);
```

> ⭐ **Why `&` is used**: The ampersand (`&`) is the **address-of operator**. It passes the exact memory address of `age` to `scanf()`, allowing it to write the entered value directly into memory.

#### Format Specifiers Summary

| Data Type | Format Specifier |
| :--- | :---: |
| `int` | `%d` |
| `float` | `%f` |
| `char` | `%c` |
| `double` | `%lf` |
| String (`char[]`) | `%s` |

#### Keywords
Keywords are **32 reserved words** in C with predefined language meanings (e.g., `int`, `return`, `if`, `for`). Reserved keywords **cannot** be used as variable names.

#### Comments
Non-executable explanatory notes for improving code readability:
- **Single-Line**: `// comment`
- **Multi-Line**: `/* comment */`

---

## 🎨 Visual Cheat Sheet

![Chapter 1 Cheat Sheet](./images/C%20programming%20Visual%20Notes_watermark_page-0001.jpg)

> 💡 **Note**: The complete, high-resolution master visual notes PDF is available in the repository root: [`C-Programming-Visual-Notes.pdf`](../C-Programming-Visual-Notes.pdf) (or [`C programming Visual Notes_watermark.pdf`](../C%20programming%20Visual%20Notes_watermark.pdf)).

---

## ⚡ Syntax Quick Reference

### Program Skeleton
```c
#include <stdio.h>

int main() {
    // your code here
    return 0;
}
```

### Variable Declaration & Initialization
```c
int age;                // declaration only
int age = 25;           // declaration + initialization
float price = 99.99;
char grade = 'A';
```

### Output
```c
printf("Hello World\n");
printf("Age is %d\n", age);
printf("Price: %.2f, Grade: %c\n", price, grade);
```

### Input
```c
int age;
scanf("%d", &age);      // note the & (address-of operator)
```

### Comments
```c
// single-line comment

/* multi-line
   comment */
```

### Compile & Run
```bash
# Compile source code
gcc filename.c -o output

# Execute output program
./output          # Linux / macOS
output.exe        # Windows
```

---

## 📂 Practice Programs

Access the practice problem folders directly by clicking on the links below:

| Difficulty Level | Folder Link | Description |
| :--- | :--- | :--- |
| 🟢 **Easy** | 📂 **[Browse Easy Programs](./easy/)** | Fundamental programs covering core syntax, basic `printf`/`scanf`, and data types. |
| 🟡 **Medium** | 📂 **[Browse Medium Programs](./medium/)** | Intermediate programs focusing on formatting, conversions, and variable swaps. |
| 🔴 **Hard** | 📂 **[Browse Hard Programs](./hard/)** | Advanced programs exploring memory addresses (`%p`), chained inputs, and `const` limits. |

---

## ⚠️ Common Beginner Mistakes

- **Forgetting Semicolons**: Omitting `;` at the end of statements causes syntax compilation errors.
- **Missing `&` in `scanf()`**: Forgetting the address-of operator `&` for primitive variables leads to segmentation faults or unexpected behavior.
- **Mismatched Format Specifiers**: Using `%d` for a `float` or `%f` for an `int` causes corrupted output.
- **Uninitialized Variables**: Reading a variable before assigning a value results in unpredictable garbage values.
- **Case-Sensitivity Errors**: Writing `Printf` or `Main` instead of lowercase `printf` and `main`.

---

## 🛠️ Mini Project

### 🧾 Personal Data Card & Billing Receipt Generator

Create an interactive console application that prompts the user for student or product details, calculates total charges with constants, and prints a formatted, aligned text receipt.

- **Concepts Used**: `printf`, `scanf`, `int`, `float`, `char`, `#define` constants, format specifiers, comments.
- **Difficulty**: 🟢 Beginner

---

## ✅ Chapter Summary

After completing this chapter, you should be able to:

- [x] Set up a C programming environment
- [x] Understand the compilation process (Source → Compiler → Machine Code)
- [x] Write and execute your first C program
- [x] Explain the structure of a C program (`#include`, `main()`, `return 0`)
- [x] Declare and initialize variables
- [x] Use basic data types (`int`, `float`, `char`)
- [x] Work with constants
- [x] Use `printf()` for output and `scanf()` for input
- [x] Apply format specifiers correctly (`%d`, `%f`, `%c`, `%lf`, `%s`)
- [x] Write comments for better code readability

---

## Next Chapter

➡️ **[Chapter 2 – Instructions & Operators](../02-Instructions-and-Operators/README.md)**
