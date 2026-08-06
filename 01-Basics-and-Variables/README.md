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
| **Programs Count** | 14 Practice Problems |
| **Visual Cheat Sheet** | Included (`./images/cheat-sheet.png`) |

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

![Chapter 1 Cheat Sheet](./images/cheat-sheet.png)

> 💡 **Note**: The complete, high-resolution master visual notes PDF is available in the repository root: [`C-Programming-Visual-Notes.pdf`](../C-Programming-Visual-Notes.pdf) (or [`C programming Visual Notes_watermark.pdf`](../C%20programming%20Visual%20Notes_watermark.pdf)).

---

## Practice Programs

### 🟢 Easy Programs

| No. | Program | Status |
| :---: | :--- | :---: |
| 01 | **Hello World**: Print basic output using `printf()` | ⬜ |
| 02 | **Variable Printing**: Declare and print `int`, `float`, and `char` variables | ⬜ |
| 03 | **User Input**: Read integer and float values using `scanf()` | ⬜ |
| 04 | **Data Type Sizes**: Print memory sizes of primitive data types using `sizeof` | ⬜ |
| 05 | **Format Specifier Demo**: Display numbers with precision control (`%.2f`, `%05d`) | ⬜ |

### 🟡 Medium Programs

| No. | Program | Status |
| :---: | :--- | :---: |
| 01 | **Formatted Store Receipt**: Align text and numeric columns using field width specifiers | ⬜ |
| 02 | **Temperature Converter**: Convert Celsius to Fahrenheit using variables and arithmetic | ⬜ |
| 03 | **ASCII Value Explorer**: Input a character and print its decimal ASCII code (and vice versa) | ⬜ |
| 04 | **Variable Swapper**: Swap two variable values using a temporary third variable | ⬜ |
| 05 | **Circle Calculator**: Calculate area and circumference using `#define PI 3.14159` constant | ⬜ |

### 🔴 Hard Programs

| No. | Program | Status |
| :---: | :--- | :---: |
| 01 | **Memory Address Tracker**: Print memory addresses of variables using `%p` and address operator `&` | ⬜ |
| 02 | **In-Place Swap**: Swap two integer variables without using an extra temporary variable | ⬜ |
| 03 | **Chained Input Buffer**: Parse multiple space-separated variables in a single `scanf()` call | ⬜ |
| 04 | **Const Mutation Guard**: Demonstrate compiler error behavior when attempting to modify a `const` variable | ⬜ |

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
