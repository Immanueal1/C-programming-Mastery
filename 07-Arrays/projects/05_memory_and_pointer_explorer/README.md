# 🔍 Project 05: Memory & Pointer Explorer

> Inspect physical contiguous RAM addresses and observe pointer arithmetic byte jumps across a double-precision floating-point array.

---

## 📌 Short Description

Declare an array of 5 `double` precision floating-point numbers. Using a `for` loop, print each element's index, stored value, and exact physical memory address (`&arr[i]`) using `%p`. Observe how each consecutive element's memory address jumps by exactly 8 bytes (the size of a `double`).

---

## 📚 Topics Covered

- [x] Contiguous Physical RAM Memory Inspection (`%p`)
- [x] Data-Type Sizing & Memory Byte Jumps (`sizeof(double) = 8`)
- [x] Pointer Base Address Alignment

---

## 🎯 Learning Objectives

- Empirically verify contiguous memory allocation in system RAM.
- Connect theoretical data type byte sizes (`8 bytes`) with observed memory addresses.

---

## 📁 Folder Contents

- `README.md`: Project specifications and guidelines.
- `main.c`: Starter source code file (contains empty template).

---

## 🔗 Navigation Links

- 🛠️ **[Return to Projects Index (`../`)](../README.md)**
- 🏠 **[Return to Chapter 7 Overview (`../../README.md`)](../../README.md)**
