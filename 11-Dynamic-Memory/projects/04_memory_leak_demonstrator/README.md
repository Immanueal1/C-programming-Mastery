# 🚨 Project 04: Memory Leak Demonstrator

> Demonstrate the mechanics of pointer reassignment memory leaks and implement the proper deallocation fix.

---

## 📌 Short Description

Write a program that allocates 10 integers to `ptr`. Then conceptually demonstrate how reassigning `ptr = (int *) malloc(20 * sizeof(int));` without calling `free(ptr)` first orphans the original 10 integers (causing a 40-byte memory leak). Then write the corrected version demonstrating proper `free()` execution before reassignment.

---

## 📚 Topics Covered

- [x] Memory Leak Mechanics
- [x] Pointer Reassignment Hazards
- [x] Proper Deallocation Workflow (`free(ptr)`)

---

## 🎯 Learning Objectives

- Identify silent memory leaks caused by losing memory references.
- Fix pointer reassignment flaws by invoking `free()` before assigning new allocations.

---

## 📁 Folder Contents

- `README.md`: Project specifications and guidelines.
- `main.c`: Starter source code file (contains empty template).

---

## 🔗 Navigation Links

- 🛠️ **[Return to Projects Index (`../`)](../README.md)**
- 🏠 **[Return to Chapter 11 Overview (`../../README.md`)](../../README.md)**
