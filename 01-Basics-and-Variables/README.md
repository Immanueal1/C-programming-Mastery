# 📘 Chapter 1: Basics & Variables

> Master the foundational building blocks of C programming: compilation, variables, memory storage, data types, and fundamental input/output operations.

---

## Chapter Overview

This chapter serves as your entry point into the C language. You will explore how C programs compile and execute, how data is stored in computer memory using variables and constants, and how to interact with users via standard input and output streams. Designed for quick scanning and hands-on practice, this chapter lays the groundwork required for writing clean, efficient low-level software.

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

## Visual Cheat Sheet

![Chapter 1 Cheat Sheet](./images/C%20programming%20Visual%20Notes_watermark_page-0001.jpg)

> 💡 **Note**: The complete, high-resolution master visual notes PDF is available in the repository root: [`C-Programming-Visual-Notes.pdf`](../C-Programming-Visual-Notes.pdf) (or [`C programming Visual Notes_watermark.pdf`](../C%20programming%20Visual%20Notes_watermark.pdf)).

---

## Practice Programs

Access the practice problem folders directly by clicking on the links below:

| Difficulty Level | Folder Link | Description |
| :--- | :--- | :--- |
| 🟢 **Easy** | 📂 **[Browse Easy Programs](./easy/)** | Fundamental programs covering core syntax, basic `printf`/`scanf`, and data types. |
| 🟡 **Medium** | 📂 **[Browse Medium Programs](./medium/)** | Intermediate programs focusing on formatting, conversions, and variable swaps. |
| 🔴 **Hard** | 📂 **[Browse Hard Programs](./hard/)** | Advanced programs exploring memory addresses (`%p`), chained inputs, and `const` limits. |

---

## Common Beginner Mistakes

- **Forgetting Semicolons**: Omitting `;` at the end of statements causes syntax compilation errors.
- **Missing `&` in `scanf()`**: Forgetting the address-of operator `&` for primitive variables leads to segmentation faults or unexpected behavior.
- **Mismatched Format Specifiers**: Using `%d` for a `float` or `%f` for an `int` causes corrupted output.
- **Uninitialized Variables**: Reading a variable before assigning a value results in unpredictable garbage values.
- **Case-Sensitivity Errors**: Writing `Printf` or `Main` instead of lowercase `printf` and `main`.

---

## Mini Project

### 🧾 Personal Data Card & Billing Receipt Generator

Create an interactive console application that prompts the user for student or product details, calculates total charges with constants, and prints a formatted, aligned text receipt.

- **Concepts Used**: `printf`, `scanf`, `int`, `float`, `char`, `#define` constants, format specifiers, comments.
- **Difficulty**: 🟢 Beginner

---

## Next Chapter

➡️ **[Chapter 2 – Instructions & Operators](../02-Instructions-and-Operators/README.md)**
