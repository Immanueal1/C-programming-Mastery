# 🟢 Chapter 11: Easy Practice Problems

> Beginner-friendly C programming challenges focusing on Dynamic Memory Allocation (DMA), header `#include <stdlib.h>`, memory calculation using `sizeof()`, generic void pointer typecasting `(int *)`, basic `malloc()`, zero-initialized `calloc()`, memory initialization differences, `NULL` pointer safety checking, `realloc()`, and heap memory deallocation via `free()`.

---

## 📌 Short Description

This directory contains 10 fundamental practice problems designed to build core confidence with dynamic run-time memory allocation. You will learn why static compile-time arrays (`int scores[30];`) fail when requirements vary, how to include `<stdlib.h>`, how to calculate platform-independent byte requirements with `sizeof()`, how to cast `void *` pointers, how to allocate uninitialized memory via `malloc()`, how to allocate zero-initialized memory via `calloc()`, how to check for `NULL` allocation failures, how to resize memory blocks using `realloc()`, and how to release heap memory using `free()`.

---

## 📚 Topics Covered

- [x] Static vs. Dynamic Memory Allocation
- [x] Standard Header Requirement (`#include <stdlib.h>`)
- [x] Byte Size Calculation using `sizeof()`
- [x] Generic Pointer Typecasting `(type *)` from `void *`
- [x] Memory Allocation via `malloc(total_bytes)`
- [x] Contiguous Zero-Initialized Allocation via `calloc(num, size)`
- [x] Memory Initialization Differences (`malloc` garbage vs. `calloc` zero)
- [x] `NULL` Allocation Failure Guarding (`if (ptr == NULL)`)
- [x] Dynamic Memory Resizing via `realloc(ptr, new_size)`
- [x] Heap Memory Deallocation via `free(ptr)` to Prevent Memory Leaks

---

## 🎯 Learning Objectives

- Contrast static compile-time memory with dynamic run-time memory allocation.
- Include the standard library header `<stdlib.h>`.
- Calculate system-independent byte requirements using `sizeof()`.
- Typecast generic `void *` pointers returned by DMA functions.
- Allocate dynamic heap memory using `malloc()` (1 argument).
- Allocate zero-initialized memory using `calloc()` (2 arguments).
- Implement `NULL` pointer safety guards (`if (ptr == NULL)`).
- Resize dynamic memory blocks using `realloc()`.
- Release heap memory using `free()` to prevent memory leaks.

---

## 📈 Progress Checklist

- [ ] 01 The Fixed Array Limitation
- [ ] 02 The DMA Library
- [ ] 03 The Byte Calculator
- [ ] 04 The Generic Return
- [ ] 05 Basic Memory Allocation
- [ ] 06 The Zero Initializer
- [ ] 07 Uninitialized vs Zeroed
- [ ] 08 The Safety Net
- [ ] 09 The Memory Resizer
- [ ] 10 The Releaser

---

## 📁 Folder Contents

| File | Title | Concepts Used |
| :--- | :--- | :--- |
| [`01_the_fixed_array_limitation.c`](./01_the_fixed_array_limitation.c) | The Fixed Array Limitation | Compile-Time vs Run-Time Memory |
| [`02_the_dma_library.c`](./02_the_dma_library.c) | The DMA Library | `<stdlib.h>` |
| [`03_the_byte_calculator.c`](./03_the_byte_calculator.c) | The Byte Calculator | `sizeof()` |
| [`04_the_generic_return.c`](./04_the_generic_return.c) | The Generic Return | `void *`, Typecasting |
| [`05_basic_memory_allocation.c`](./05_basic_memory_allocation.c) | Basic Memory Allocation | `malloc()`, Pointer Declaration |
| [`06_the_zero_initializer.c`](./06_the_zero_initializer.c) | The Zero Initializer | `calloc()`, Arguments |
| [`07_uninitialized_vs_zeroed.c`](./07_uninitialized_vs_zeroed.c) | Uninitialized vs Zeroed | `malloc()` vs `calloc()` initialization |
| [`08_the_safety_net.c`](./08_the_safety_net.c) | The Safety Net | `NULL` Checking |
| [`09_the_memory_resizer.c`](./09_the_memory_resizer.c) | The Memory Resizer | `realloc()` |
| [`10_the_releaser.c`](./10_the_releaser.c) | The Releaser | `free()`, Memory Leaks |

---

## 📝 Practice Questions

### Question 01: The Fixed Array Limitation

- **Difficulty**: Easy
- **Concepts Used**: Compile-Time vs Run-Time Memory
- **Problem Statement**:
  You are writing a program to store test scores, but you do not know how many students will take the test until the user types the number. Conceptually explain why `int scores[30];` is a bad approach and why Dynamic Memory Allocation is required.
- **Sample Input**: *(No input)*
- **Sample Output**: *(Explanation of static vs dynamic memory)*
- **Constraints**: Focus on the limitation of compile-time allocation.
- **Hints**:
  - *Hint 1*: When the compiler sees `int scores[30];`, it locks that size forever.
  - *Hint 2*: If 50 students show up, the program crashes or loses data. If 2 students show up, memory is wasted.
  - *Hint 3*: Dynamic memory allows the program to wait until the user inputs the number of students, and then requests the exact amount of memory needed at run time.

---

### Question 02: The DMA Library

- **Difficulty**: Easy
- **Concepts Used**: `<stdlib.h>`
- **Problem Statement**:
  Write the exact preprocessor directive required at the top of your C program to unlock the standard Dynamic Memory Allocation functions.
- **Sample Input**: *(No input)*
- **Sample Output**: *(Valid C preprocessor directive)*
- **Constraints**: Must be the correct standard library header.
- **Hints**:
  - *Hint 1*: The header starts with `#include`.
  - *Hint 2*: It stands for "Standard Library".
  - *Hint 3*: `#include <stdlib.h>`

---

### Question 03: The Byte Calculator

- **Difficulty**: Easy
- **Concepts Used**: `sizeof()`
- **Problem Statement**:
  Write a statement that calculates the total number of bytes required to store 15 floating-point numbers.
- **Sample Input**: *(No input)*
- **Sample Output**: *(Calculation expression)*
- **Constraints**: Do not hardcode byte sizes (like 4 or 8), as they are system-dependent.
- **Hints**:
  - *Hint 1*: Use the operator that determines memory size.
  - *Hint 2*: The operator is `sizeof()`.
  - *Hint 3*: Multiply 15 by `sizeof(float)`.

---

### Question 04: The Generic Return

- **Difficulty**: Easy
- **Concepts Used**: `void *`, Typecasting
- **Problem Statement**:
  `malloc()` returns a `void *` (a generic pointer). If you are allocating memory for integers, write the typecast required to convert this generic pointer into an integer pointer.
- **Sample Input**: *(No input)*
- **Sample Output**: *(Typecast syntax)*
- **Constraints**: Provide only the cast operator.
- **Hints**:
  - *Hint 1*: A typecast is placed inside parentheses before the function call.
  - *Hint 2*: You are casting to a pointer that points to an `int`.
  - *Hint 3*: `(int *)`

---

### Question 05: Basic Memory Allocation

- **Difficulty**: Easy
- **Concepts Used**: `malloc()`, Pointer Declaration
- **Problem Statement**:
  Declare a pointer to an integer named `ptr`. Use `malloc()` to allocate memory for exactly 1 integer, and assign the returned pointer to `ptr`.
- **Sample Input**: *(No input)*
- **Sample Output**: *(Declaration and allocation syntax)*
- **Constraints**: Properly typecast the return value.
- **Hints**:
  - *Hint 1*: First, declare `int *ptr;`.
  - *Hint 2*: `malloc()` takes one argument: the total bytes required.
  - *Hint 3*: `ptr = (int *) malloc(sizeof(int));`

---

### Question 06: The Zero Initializer

- **Difficulty**: Easy
- **Concepts Used**: `calloc()`, Arguments
- **Problem Statement**:
  Use `calloc()` to allocate memory for 10 integers. Assign the result to an integer pointer named `arr_ptr`.
- **Sample Input**: *(No input)*
- **Sample Output**: *(Allocation syntax)*
- **Constraints**: Remember that `calloc` takes two arguments, not one.
- **Hints**:
  - *Hint 1*: `calloc` stands for contiguous allocation.
  - *Hint 2*: The first argument is the number of locations; the second is the size of each location.
  - *Hint 3*: `arr_ptr = (int *) calloc(10, sizeof(int));`

---

### Question 07: Uninitialized vs Zeroed

- **Difficulty**: Easy
- **Concepts Used**: `malloc()` vs `calloc()` initialization
- **Problem Statement**:
  If you allocate 5 integers using `malloc()`, what values exist in that memory immediately after allocation? What values exist if you use `calloc()` instead?
- **Sample Input**: *(No input)*
- **Sample Output**: *(Conceptual explanation of initial memory state)*
- **Constraints**: State the difference clearly.
- **Hints**:
  - *Hint 1*: `malloc` is fast but leaves memory exactly as it found it.
  - *Hint 2*: `malloc` leaves garbage (uninitialized) values.
  - *Hint 3*: `calloc` explicitly overwrites the allocated memory with zeros.

---

### Question 08: The Safety Net

- **Difficulty**: Easy
- **Concepts Used**: `NULL` Checking
- **Problem Statement**:
  After executing `ptr = (int *) malloc(5 * sizeof(int));`, write the `if` statement required to check if the memory allocation failed.
- **Sample Input**: *(No input)*
- **Sample Output**: *(Conditional checking syntax)*
- **Constraints**: Check against the macro used for failed pointers.
- **Hints**:
  - *Hint 1*: If allocation fails, the function returns a special null pointer.
  - *Hint 2*: You need to check if `ptr` is equal to `NULL`.
  - *Hint 3*: `if (ptr == NULL) { ... }`

---

### Question 09: The Memory Resizer

- **Difficulty**: Easy
- **Concepts Used**: `realloc()`
- **Problem Statement**:
  You have an integer pointer `ptr` that currently points to 5 allocated integers. Write the statement to resize this memory to hold 10 integers using `realloc()`.
- **Sample Input**: *(No input)*
- **Sample Output**: *(Reallocation syntax)*
- **Constraints**: Ensure you catch the returned pointer back into `ptr`.
- **Hints**:
  - *Hint 1*: `realloc()` requires two arguments: the old pointer and the new total size.
  - *Hint 2*: The new size must be calculated using `sizeof(int)`.
  - *Hint 3*: `ptr = realloc(ptr, 10 * sizeof(int));`

---

### Question 10: The Releaser

- **Difficulty**: Easy
- **Concepts Used**: `free()`, Memory Leaks
- **Problem Statement**:
  You have finished using the dynamically allocated memory pointed to by `ptr`. Write the statement to release this memory back to the system to prevent a memory leak.
- **Sample Input**: *(No input)*
- **Sample Output**: *(Freeing syntax)*
- **Constraints**: Use the standard library function designed for this.
- **Hints**:
  - *Hint 1*: The function name is four letters long.
  - *Hint 2*: It takes exactly one argument: the pointer to the memory.
  - *Hint 3*: `free(ptr);`

---

## 🔗 Navigation Links

- 📋 **[View Complete Practice Workbook (`PRACTICE.md`)](./PRACTICE.md)**
- 🟡 **[Proceed to Medium Practice (`../medium/`)](../medium/)**
- 🔴 **[Proceed to Hard Practice (`../hard/`)](../hard/)**
- 🏠 **[Return to Chapter 11 Overview (`../README.md`)](../README.md)**
