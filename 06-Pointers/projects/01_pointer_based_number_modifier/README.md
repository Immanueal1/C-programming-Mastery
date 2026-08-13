# 💰 Project 01: Pointer-Based Number Modifier

> A multi-stage financial pipeline modifying a single base salary variable across three sequential function calls using Call by Reference.

---

## 📌 Short Description

Write a program that declares a base salary variable in `main()`. Pass its memory address sequentially to three dedicated functions: `applyTax(int *s)`, `applyBonus(int *s)`, and `applyDeduction(int *s)`. Print the final salary in `main()` after all three function calls to verify that the single memory address was directly updated.

---

## 📚 Topics Covered

- [x] Pass by Address (`&salary`)
- [x] Pointer Dereferencing (`*s`)
- [x] Sequential Memory Pipeline Mutation

---

## 🎯 Learning Objectives

- Pass a variable's address across multiple functions.
- Verify that pointer mutations in helper functions alter the exact same memory location in `main()`.

---

## 📁 Folder Contents

- `README.md`: Project specifications and guidelines.
- `main.c`: Starter source code file (contains empty template).

---

## 🔗 Navigation Links

- 🛠️ **[Return to Projects Index (`../`)](../README.md)**
- 🏠 **[Return to Chapter 6 Overview (`../../README.md`)](../../README.md)**
