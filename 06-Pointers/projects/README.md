# 🛠️ Chapter 6: Portfolio Mini Projects

> Practical, real-world mini projects built entirely using Chapter 6 concepts: Pointers, Memory Addresses, Dereferencing, Call by Reference, and Multiple Return Output Parameters. No arrays, strings, or structs!

---

## 📌 Short Description

This folder contains 5 hands-on portfolio mini projects designed to apply single memory address updates across multi-stage function pipelines, classic two-number swapping, multi-value arithmetic engine returns, Call by Reference profile mutations, and brute-force quadratic root finding via output pointers.

---

## 📚 Topics Covered

- [x] Multi-Stage Pipeline Memory Mutations (`01_pointer_based_number_modifier`)
- [x] Two-Number In-Place Swapping Engine (`02_swap_two_numbers_using_pointers`)
- [x] Multi-Value Output Calculator (`03_multi_value_calculator`)
- [x] Call by Reference Personal Profile Updater (`04_personal_data_modifier`)
- [x] Quadratic Simulation & Dual-Root Finder (`05_the_root_finder`)

---

## 🎯 Learning Objectives

- Apply Call by Reference to modify a single memory location sequentially across multiple function calls.
- Implement reusable two-variable swapping functions using pointer parameters (`swap(&a, &b)`).
- Design multi-value arithmetic output engines returning results via pointers (`int *sum, int *diff, int *prod, float *div`).
- Mutate diverse primitive data types (`int *`, `float *`, `char *`) directly inside function bodies.
- Return multiple computed roots from a solver function using output pointer parameters.

---

## 📁 Folder Contents

| Project Directory | Title | Core Objective |
| :--- | :--- | :--- |
| [`01_pointer_based_number_modifier/`](./01_pointer_based_number_modifier/) | Pointer-Based Number Modifier | Pass base salary address to `applyTax()`, `applyBonus()`, and `applyDeduction()`. |
| [`02_swap_two_numbers_using_pointers/`](./02_swap_two_numbers_using_pointers/) | Swap Two Numbers Using Pointers | Classic `swap(int *a, int *b)` function exchanging user-provided variables in `main()`. |
| [`03_multi_value_calculator/`](./03_multi_value_calculator/) | Multi-Value Calculator | `doMath()` function computing sum, diff, prod, and div into 4 pointer addresses. |
| [`04_personal_data_modifier/`](./04_personal_data_modifier/) | Personal Data Modifier | `updateProfile(int *a, float *w, char *g)` updating age, weight, and grade. |
| [`05_the_root_finder/`](./05_the_root_finder/) | The Root Finder (Quadratic Simulation) | `findRoots(sum, product, int *root1, int *root2)` calculating two numbers from sum & product. |

---

## 🔗 Navigation Links

- 🟢 **[Easy Practice (`../easy/`)](../easy/)**
- 🟡 **[Medium Practice (`../medium/`)](../medium/)**
- 🔴 **[Hard Practice (`../hard/`)](../hard/)**
- 🏠 **[Return to Chapter 6 Overview (`../README.md`)](../README.md)**
