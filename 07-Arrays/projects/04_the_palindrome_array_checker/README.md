# 🔄 Project 04: The Palindrome Array Checker

> Verify whether an array reads identically forwards and backwards using symmetric index comparison.

---

## 📌 Short Description

Read an array of 5 integers from the user. An array is a palindrome if its elements read identically forwards and backwards (e.g., `{1, 2, 3, 2, 1}`). Compare `arr[i]` with `arr[n - i - 1]` for `i = 0` to `n / 2`. If a mismatch occurs, clear a state flag (`isPal = 0`) and break early. Print `"Palindrome"` or `"Not Palindrome"`.

---

## 📚 Topics Covered

- [x] Dual-Direction Index Comparison (`arr[i]` vs `arr[n - i - 1]`)
- [x] State Flags & Early Loop Breaks
- [x] Efficient Half-Array Traversal (`n / 2`)

---

## 🎯 Learning Objectives

- Apply symmetric index traversal logic to check array properties.
- Optimize loop iterations using half-array bounds and state flags.

---

## 📁 Folder Contents

- `README.md`: Project specifications and guidelines.
- `main.c`: Starter source code file (contains empty template).

---

## 🔗 Navigation Links

- 🛠️ **[Return to Projects Index (`../`)](../README.md)**
- 🏠 **[Return to Chapter 7 Overview (`../../README.md`)](../../README.md)**
