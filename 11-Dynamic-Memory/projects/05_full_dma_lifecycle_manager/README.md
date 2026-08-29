# 🔄 Project 05: Full DMA Lifecycle Manager

> Master the complete 5-step dynamic memory lifecycle: **ALLOCATE ➜ CHECK ➜ USE ➜ RESIZE ➜ FREE**.

---

## 📌 Short Description

Write a program that allocates dynamic memory for N floats using `calloc()`. Implement a `NULL` safety check (`exit(1)` on failure). Perform calculations, then shrink the allocation to N/2 floats using `realloc()`. Finally, deallocate the memory with `free(ptr)` and neutralize the pointer by assigning `ptr = NULL`.

---

## 📚 Topics Covered

- [x] Initial Zeroed Allocation (`calloc`)
- [x] Immediate `NULL` Safety Guarding
- [x] Dynamic Resizing / Shrinking (`realloc`)
- [x] Deallocation (`free`)
- [x] Pointer Neutralization (`ptr = NULL`)

---

## 🎯 Learning Objectives

- Execute end-to-end responsible dynamic memory management.
- Eliminate dangling pointers by setting pointers to `NULL` after `free()`.

---

## 📁 Folder Contents

- `README.md`: Project specifications and guidelines.
- `main.c`: Starter source code file (contains empty template).

---

## 🔗 Navigation Links

- 🛠️ **[Return to Projects Index (`../`)](../README.md)**
- 🏠 **[Return to Chapter 10 Overview (`../../README.md`)](../../README.md)**
