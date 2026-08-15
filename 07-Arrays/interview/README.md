# 🎯 Chapter 7: Technical Interview Preparation

> Master Technical Interview Questions, Output Predictions, Memory Address Calculations, Debugging Challenges, and MCQs for Chapter 7 (Arrays & Contiguous Memory).

---

## 📌 Module Overview

This module consolidates core array conceptual interview materials from Chapter 7. It prepares software engineering candidates for technical screeners, whiteboard interviews, memory tracing exercises, pointer scaling questions, 2D row-major layout mapping, and C memory safety questions.

---

## 📁 File Structure

| File | Description | Focus Area |
| :--- | :--- | :--- |
| 📖 [`THEORY.md`](./THEORY.md) | Top 10 Conceptual Theory Questions | Array decay, pointer scaling, contiguous memory, 2D row-major mapping, `arr[i]` vs `*(arr+i)` |
| 🔮 [`OUTPUT_PREDICTION.md`](./OUTPUT_PREDICTION.md) | Top 10 Code Output Snippets | Pointer subtraction, flat 2D initialization, `p2 - p1` element distance, array base address scaling |
| 🧠 [`MEMORY_PREDICTION.md`](./MEMORY_PREDICTION.md) | Top 10 Memory & Address Prediction Problems | Row-major address formulas, `arr + 1` vs `&arr + 1` scaling, pointer offset math |
| 🐞 [`DEBUGGING.md`](./DEBUGGING.md) | Top 10 Syntax & Logical Debugging Challenges | VLA initialization, bulk array assignment, missing 2D column parameters, pointer type mismatch |
| 📝 [`MCQs.md`](./MCQs.md) | Top 10 Multiple Choice Questions | Data type sizing, 2D formula math, `arr[-1]` undefined behavior, passing array pointers |

---

## 🎯 Key Interview Concepts Covered

1. **Contiguous Allocation**: Why array memory elements sit immediately adjacent in RAM.
2. **Zero-Based Index Base Formula**: $\text{Address}(\text{arr}[i]) = \text{Base} + i \times \text{sizeof(Type)}$.
3. **Array Decay**: Why `arr` converts to `&arr[0]` in expressions and loses its size in functions.
4. **Pointer Scaling**: Why `ptr + 1` jumps by `sizeof(Type)` bytes rather than 1 byte.
5. **Array Name vs Array Address**: The difference between `arr + 1` (+4 bytes) and `&arr + 1` (+20 bytes for `int[5]`).
6. **Bounds Checking Lack**: Why C permits out-of-bounds reading/writing and the danger of memory corruption.
7. **Implicit Call by Reference**: How passing `arr` sends a pointer, permitting in-place function mutations.
8. **Row-Major Layout**: How 2D matrices physically store rows sequentially in 1D linear memory.
9. **Mandatory 2D Column Parameter**: Why `void f(int mat[][cols], int rows)` requires column dimensions to calculate memory offsets.
10. **Syntax Equivalence**: Why `arr[i]` and `*(arr + i)` evaluate to identical machine code.

---

## 🔗 Navigation Links

- 🟢 **[Easy Practice (`../easy/`)](../easy/)**
- 🟡 **[Medium Practice (`../medium/`)](../medium/)**
- 🔴 **[Hard Practice (`../hard/`)](../hard/)**
- 🛠️ **[Portfolio Mini Projects (`../projects/`)](../projects/)**
- 🏠 **[Return to Chapter 7 Overview (`../README.md`)](../README.md)**
