# 📘 Chapter 2: Instructions & Operators

> Learn how C evaluates expressions, manipulates variables, applies operator precedence, performs type conversions, and makes logical decisions.

---

## Chapter Overview

This chapter explores how instructions command execution and how operators process data within C programs. You will learn the mechanics of arithmetic instructions, type conversion rules, relational and logical comparisons, operator precedence, and shorthand assignment operators. Designed for quick scanning and hands-on practice, this page guides your progression through Chapter 2.

---

## Chapter Information

| Metadata | Details |
| :--- | :--- |
| **Difficulty** | 🟢 Beginner |
| **Prerequisite** | [Chapter 1 – Basics & Variables](../01-Basics-and-Variables/README.md) |
| **Estimated Time** | ~2–3 Hours |
| **Programs Count** | 15 Practice Problems |
| **Visual Cheat Sheet** | Included ([View Image](./images/C%20programming%20Visual%20Notes_watermark_page-0002.jpg)) |

---

## Topics Covered

- [x] Types of Instructions
- [x] Type Declaration Rules
- [x] Arithmetic Instructions
- [x] Arithmetic Rules & Quirks
- [x] The Left-Hand Side (LHS) Rule
- [x] Multiplication Rules
- [x] Power Operator Trap (`^` vs `pow()`)
- [x] Modulo Operator (`%`)
- [x] Type Conversion (Implicit & Explicit)
- [x] Relational Operators
- [x] Logical Operators
- [x] True vs False in C
- [x] Operator Precedence
- [x] Operator Associativity
- [x] Assignment Shorthand Operators
- [x] Common Practice Patterns

---

## Visual Cheat Sheet

![Chapter 2 Cheat Sheet](./images/C%20programming%20Visual%20Notes_watermark_page-0002.jpg)

> 💡 **Note**: The complete, high-resolution master visual notes PDF is available in the repository root: [`C-Programming-Visual-Notes.pdf`](../C-Programming-Visual-Notes.pdf) (or [`C programming Visual Notes_watermark.pdf`](../C%20programming%20Visual%20Notes_watermark.pdf)).

---

## Practice Programs

### 🟢 Easy Programs

| No. | Program | Status |
| :---: | :--- | :---: |
| 01 | **Basic Arithmetic Calculator**: Perform addition, subtraction, multiplication, and division | ⬜ |
| 02 | **Modulo Remainder Finder**: Calculate integer division remainders using `%` | ⬜ |
| 03 | **Assignment Shorthand Demo**: Demonstrate `+=`, `-=`, `*=`, and `/=` operators | ⬜ |
| 04 | **Circle Area & Perimeter**: Compute area and perimeter using mathematical formulas | ⬜ |
| 05 | **Explicit Type Caster**: Convert floating-point numbers to integers using `(int)` | ⬜ |

### 🟡 Medium Programs

| No. | Program | Status |
| :---: | :--- | :---: |
| 01 | **Temperature Converter**: Convert Celsius to Fahrenheit using floating-point formulas | ⬜ |
| 02 | **In-Place Number Swap**: Swap two variables without using a temporary third variable | ⬜ |
| 03 | **Even or Odd Checker**: Test number parity using modulo logic (`x % 2 == 0`) | ⬜ |
| 04 | **Student Percentage Calculator**: Sum subject marks and calculate exact percentage | ⬜ |
| 05 | **Power Calculator**: Compare `pow()` from `<math.h>` against bitwise XOR (`^`) | ⬜ |

### 🔴 Hard Programs

| No. | Program | Status |
| :---: | :--- | :---: |
| 01 | **Operator Precedence Evaluator**: Trace multi-operator expressions using priority rules | ⬜ |
| 02 | **Two-Digit Range Validator**: Validate two-digit numbers using relational and `&&` operators | ⬜ |
| 03 | **Largest of Two Numbers**: Compare values using relational operators | ⬜ |
| 04 | **Digit Extractor**: Isolate individual digits using `% 10` and `/ 10` chaining | ⬜ |
| 05 | **Type Conversion Profiler**: Analyze implicit promotion vs explicit truncation | ⬜ |

---

## Common Beginner Mistakes

- **Confusing `=` with `==`**: Using `=` (assignment) instead of `==` (equality check) silent assigns values instead of comparing.
- **Using `^` for Exponentiation**: `^` is bitwise XOR in C; use `pow(base, exp)` from `<math.h>` for powers.
- **Integer Division Truncation**: `int / int` discards decimal remainders (e.g., `5 / 2` yields `2`, not `2.5`).
- **Ignoring Precedence Rules**: Assuming expressions evaluate left-to-right without accounting for operator priority.
- **Using Modulo on Floats**: Applying `%` on floating-point numbers causes compilation errors (`%` only works on integers).

---

## Mini Project

### 🧾 Utility Bill & Tax Calculator Engine

Build a console-based utility calculator that reads user consumption units, applies multi-tiered rate multipliers using arithmetic operators, calculates applicable tax rates via type casting, and outputs a formatted breakdown.

- **Concepts Used**: Arithmetic operators, type conversion, relational/logical operators, assignment shorthand, format specifiers.
- **Difficulty**: 🟢 Beginner

---

## Next Chapter

➡️ **[Chapter 3 – Conditional Statements](../03-Conditional-Statements/README.md)**
