# 🔐 Project 04: The 5-Digit Cryptography Shifter

> An encryption algorithm extracting digits mathematically, shifting each value by +1 with modulo 10 wrap, and recombining the integer.

---

## 📌 Short Description

Read a 5-digit integer from the user. Mathematically extract each individual digit using integer division `/` and modulo `%`. Increment each digit by 1 (wrapping 9 back to 0 using `(digit + 1) % 10`). Recombine the digits into a new encrypted integer and print the result.

---

## 📚 Topics Covered

- [x] Mathematical Digit Extraction (`/ 10000`, `% 10`)
- [x] Modulo 10 Digit Wrapping `(d + 1) % 10`
- [x] Place-Value Recombination (`d1 * 10000 + d2 * 1000 ...`)

---

## 🎯 Learning Objectives

- Deconstruct fixed-width numbers mathematically without string functions or loops.
- Apply modulo wrapping arithmetic to create simple cryptographic ciphers.

---

## 📁 Folder Contents

- `README.md`: Project specifications and guidelines.
- `main.c`: Starter source code file (contains empty template).

---

## 🔗 Navigation Links

- 🛠️ **[Return to Projects Index (`../`)](../README.md)**
- 🏠 **[Return to Chapter 2 Overview (`../../README.md`)](../../README.md)**
