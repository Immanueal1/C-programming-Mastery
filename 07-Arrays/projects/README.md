# 🛠️ Chapter 7: Portfolio Mini Projects

> Practical, hands-on mini projects built entirely using Chapter 7 concepts: 1D Arrays, 2D Arrays, Contiguous Memory, Pointer Traversal, Row-Major Grid Processing, and Array Function Parameters.

---

## 📌 Short Description

This directory contains 5 portfolio mini projects designed to apply array processing functions (Sum, Average, Max, Min), 2D matrix addition grid transformations, row-wise student marks processing, palindrome array checking algorithms, and contiguous memory address exploration with double precision byte jumps.

---

## 📚 Topics Covered

- [x] Multi-Function Array Dataset Analysis (`01_array_statistics_calculator`)
- [x] 2D Matrix Addition Engine & Grid Formatting (`02_matrix_addition_utility`)
- [x] Student Marks Row-Wise Average Processing (`03_student_grades_tracker`)
- [x] Symmetric Palindrome Array Traversal Logic (`04_the_palindrome_array_checker`)
- [x] Contiguous Memory Address & Byte Jump Inspection (`05_memory_and_pointer_explorer`)

---

## 🎯 Learning Objectives

- Implement modular functions accepting array parameters (`void f(int arr[], int n)`).
- Perform element-wise addition on 2D matrices and format output as a clean grid.
- Compute row-wise averages across 2D student mark tables (`mat[row][col]`).
- Check array symmetry by comparing elements from both ends (`arr[i]` vs `arr[n - i - 1]`).
- Print and inspect contiguous memory addresses (`%p`) for `double` arrays to observe 8-byte steps.

---

## 📁 Folder Contents

| Project Directory | Title | Core Objective |
| :--- | :--- | :--- |
| [`01_array_statistics_calculator/`](./01_array_statistics_calculator/) | Array Statistics Calculator | Read 10 numbers and compute `getSum()`, `getAverage()`, `getMax()`, `getMin()` via functions. |
| [`02_matrix_addition_utility/`](./02_matrix_addition_utility/) | Matrix Addition Utility | Read two 2x2 matrices, compute element-wise sum `res[i][j]`, and display grid output. |
| [`03_student_grades_tracker/`](./03_student_grades_tracker/) | Student Grades Tracker | Manage 2D array `marks[3][4]` (3 students, 4 subjects) and compute student averages. |
| [`04_the_palindrome_array_checker/`](./04_the_palindrome_array_checker/) | The Palindrome Array Checker | Read size-5 array, check if `arr[i] == arr[n - i - 1]` for all elements, print result. |
| [`05_memory_and_pointer_explorer/`](./05_memory_and_pointer_explorer/) | Memory & Pointer Explorer | Declare 5 `double` values, print index, value, and address (`&arr[i]`) to observe 8-byte jumps. |

---

## 🔗 Navigation Links

- 🟢 **[Easy Practice (`../easy/`)](../easy/)**
- 🟡 **[Medium Practice (`../medium/`)](../medium/)**
- 🔴 **[Hard Practice (`../hard/`)](../hard/)**
- 🏠 **[Return to Chapter 7 Overview (`../README.md`)](../README.md)**
