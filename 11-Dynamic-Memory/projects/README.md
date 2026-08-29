# 🛠️ Chapter 11: Portfolio Mini Projects & Category Challenges

> Practical, hands-on mini projects and targeted category challenges built entirely using Chapter 11 concepts: `<stdlib.h>`, `sizeof()`, `malloc()`, `calloc()`, `realloc()`, `free()`, and `NULL` pointer checking.

---

## 📌 Short Description

This directory contains 5 portfolio mini projects and 5 specialized category challenge modules designed to master dynamic heap allocation, zero-initialized student mark storage, dynamic array expansion, memory leak demonstration & prevention, full DMA lifecycle management (**ALLOCATE ➜ CHECK ➜ USE ➜ RESIZE ➜ FREE**), `malloc` vs `calloc` selection, `realloc` shrinking/expansion rules, `NULL` pointer safety guards, safe pointer neutralization, and DMA debugging.

---

## 📚 Topics Covered

- [x] Basic Dynamic Memory Allocation (`01_dynamic_integer_array_allocator`)
- [x] Zero-Initialized Student Marks Storage (`02_dynamic_student_marks_storage`)
- [x] Dynamic Array Expansion via `realloc()` (`03_dynamic_array_resizer`)
- [x] Memory Leak Flaw Demonstration & Fix (`04_memory_leak_demonstrator`)
- [x] Full DMA Lifecycle Management (`05_full_dma_lifecycle_manager`)
- [x] Category Challenges (`malloc`, `calloc`, `realloc`, `NULL` safety, `free`, leaks, debugging)

---

## 🎯 Learning Objectives

- Request dynamic heap memory portably using `malloc(N * sizeof(int))`.
- Allocate zero-initialized memory for array storage using `calloc(N, sizeof(int))`.
- Dynamically resize heap memory blocks using `realloc()`.
- Identify pointer reassignment bugs and implement explicit `free()` calls to eliminate memory leaks.
- Execute complete, robust 5-step DMA lifecycles with pointer neutralization (`ptr = NULL`).

---

## 📁 Folder Contents

### 🛠️ Portfolio Mini Projects

| Project Directory | Title | Core Objective |
| :--- | :--- | :--- |
| [`01_dynamic_integer_array_allocator/`](./01_dynamic_integer_array_allocator/) | Dynamic Integer Array Allocator | Prompt user for size N, allocate using `malloc()`, check `NULL`, fill memory, free memory. |
| [`02_dynamic_student_marks_storage/`](./02_dynamic_student_marks_storage/) | Dynamic Student Marks Storage | Ask for N students, allocate via `calloc()` so all marks start at 0, check `NULL`, update marks, free memory. |
| [`03_dynamic_array_resizer/`](./03_dynamic_array_resizer/) | Dynamic Array Resizer | Allocate 3 integers with `malloc()`, prompt user to add 2 slots, resize to 5 integers using `realloc()`, free at end. |
| [`04_memory_leak_demonstrator/`](./04_memory_leak_demonstrator/) | Memory Leak Demonstrator | Demonstrate the pointer reassignment memory leak flaw conceptually, then demonstrate the proper `free()` fix. |
| [`05_full_dma_lifecycle_manager/`](./05_full_dma_lifecycle_manager/) | Full DMA Lifecycle Manager | Execute full lifecycle: `calloc(N, sizeof(float))` ──► `NULL` check ──► `realloc(N/2)` shrink ──► `free(ptr)` ──► `ptr = NULL`. |

### 🎯 Category Challenge Modules

| Challenge Document | Focus Area |
| :--- | :--- |
| [`challenges/MALLOC_CALLOC_CHALLENGES.md`](./challenges/MALLOC_CALLOC_CHALLENGES.md) | 5 Challenges on `malloc()`, `calloc()`, zero initialization, and `sizeof()` fixes. |
| [`challenges/REALLOC_CHALLENGES.md`](./challenges/REALLOC_CHALLENGES.md) | 5 Challenges on basic resizing, shrinking, data preservation, uninitialized expansion, multi-step resizing. |
| [`challenges/NULL_SAFETY_CHALLENGES.md`](./challenges/NULL_SAFETY_CHALLENGES.md) | 5 Challenges on safe initialization, `NULL` safety blocks, `realloc` returns, `free(NULL)`, and pointer neutralization. |
| [`challenges/LEAK_FREE_CHALLENGES.md`](./challenges/LEAK_FREE_CHALLENGES.md) | 5 Challenges on missing `free()`, loop memory leaks, double `free()` traps, reference loss, and reassignment leaks. |
| [`challenges/DEBUGGING_CHALLENGES.md`](./challenges/DEBUGGING_CHALLENGES.md) | 5 Challenges on cast crashes, `calloc` argument mismatches, size deficits, resizing wrong pointers, and missing headers. |

---

## 🔗 Navigation Links

- 🟢 **[Easy Practice (`../easy/`)](../easy/)**
- 🟡 **[Medium Practice (`../medium/`)](../medium/)**
- 🔴 **[Hard Practice (`../hard/`)](../hard/)**
- 🏠 **[Return to Chapter 11 Overview (`../README.md`)](../README.md)**
