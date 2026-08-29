# 📘 Chapter 11: Dynamic Memory Allocation (DMA)

> Master run-time memory management, `<stdlib.h>`, `malloc()`, `calloc()`, `realloc()`, and `free()`.

---

## 📌 Chapter Overview

This chapter introduces **Dynamic Memory Allocation (DMA)** — a mechanism in C to request, resize, and release memory dynamically while the program is running.

The central idea of this chapter is:
**Static memory has a fixed size decided before execution; dynamic memory allows memory requirements to be handled flexibly at run time.**

---

## ℹ️ Chapter Information

| Metadata | Details |
| :--- | :--- |
| **Difficulty** | 🟡 Intermediate to 🔴 Advanced |
| **Prerequisites** | [Chapter 6 – Pointers](../06-Pointers/README.md), [Chapter 7 – Arrays](../07-Arrays/README.md) |
| **Estimated Time** | ~3–4 Hours |
| **Practice Directories** | [`easy/`](./easy/), [`medium/`](./medium/), [`hard/`](./hard/) |
| **Visual Cheat Sheet** | Included ([View Image](./images/C%20programming%20Visual%20Notes_watermark_page-0011.jpg)) |

---

## 📚 Topics Covered

- [x] Static vs. Dynamic Memory Allocation
- [x] Compile-Time vs. Run-Time Memory Allocation
- [x] Memory Header Requirement (`#include <stdlib.h>`)
- [x] Memory Measurement via `sizeof()` Operator
- [x] Void Pointers (`void *`) & Typecasting Rule
- [x] Memory Allocation via `malloc()`
- [x] Contiguous Allocation via `calloc()`
- [x] `malloc()` vs. `calloc()` Comparison Matrix
- [x] The `NULL` Pointer Trap & Safety Guarding
- [x] Resizing Allocated Memory via `realloc()`
- [x] Expansion & Shrinking Behavior of `realloc()`
- [x] Memory Release via `free()`
- [x] Memory Leak Prevention & Lifecycle Management
- [x] Complete DMA Concept Maps & Mental Models
- [x] Common DMA Traps & Mistakes 🚨
- [x] 15 Golden Rules of Chapter 11
- [x] Technical Interview Revision Q&A

---

## 🎨 Visual Cheat Sheet

![Chapter 11 Cheat Sheet](./images/C%20programming%20Visual%20Notes_watermark_page-0011.jpg)

> 💡 **Note**: The complete, high-resolution master visual notes PDF is available in the repository root: [`C-Programming-Visual-Notes.pdf`](../C-Programming-Visual-Notes.pdf) (or [`C programming Visual Notes_watermark.pdf`](../C%20programming%20Visual%20Notes_watermark.pdf)).

---

## 📖 Complete Chapter Theory

### 1. Why Dynamic Memory Allocation?

Before understanding DMA, understand the problem with fixed-size memory.

Suppose you declare:

```c
int arr[30];
```

The size of the array is fixed at compile-time as: **30 integers**. The compiler knows this size before the program runs.

#### The Problem:

Imagine a program where:
- Initially, you expect 30 students.
- Later, 3 more students join.

With `int arr[30];`, you cannot simply expand the array to `int arr[33];`. The original fixed-size declaration does not automatically adapt.

There can also be the opposite problem:
Suppose only 10 students actually show up:
- 30 spaces allocated
- 10 spaces used
- 20 spaces unused ➜ **Wasted memory!**

---

### 2. Static Memory vs Dynamic Memory

#### Static Memory — Compile-Time
Example:
```c
int arr[30];
```
The size is fixed before the program runs.

```text
COMPILE TIME  ──►  Size = 30  ──►  PROGRAM RUNS  ──►  Size remains fixed
```

#### Dynamic Memory — Run-Time
Dynamic Memory Allocation allows the program to request or adjust memory while it is executing.

```text
PROGRAM RUNS  ──►  Need more memory?  ──►  Request more
              ──►  Need less memory?  ──►  Shrink memory
```

Therefore: **DMA allows memory to be requested, expanded, or shrunk while the program is running.**

---

### 3. Compile-Time vs Run-Time

| Feature | Static Memory | Dynamic Memory |
| :--- | :--- | :--- |
| **Allocation Timing** | Size determined before execution | Memory requested during execution |
| **Flexibility** | Fixed size | Flexible size |
| **Syntax Example** | `int arr[30];` | `malloc()`, `calloc()`, `realloc()` |
| **Resizability** | Cannot resize the original fixed array | Can expand/shrink allocated memory |
| **Efficiency** | May waste unused space | Adapts dynamically to requirements |

#### Mental Model:

```text
STATIC:
30 seats [██████████████████████████████] Fixed

DYNAMIC:
Need 10? [██████████]
Need 20? [████████████████████]
Need 8?  [████████]
```

---

### 4. The Required Header — `<stdlib.h>`

Dynamic Memory Allocation functions require:

```c
#include <stdlib.h>
```

Without `<stdlib.h>`, the compiler cannot recognize `malloc()`, `calloc()`, `realloc()`, or `free()`.

---

### 5. The Main DMA Functions

This chapter introduces four major functions:

| Function | Purpose |
| :--- | :--- |
| `malloc()` | Allocate raw memory bytes |
| `calloc()` | Allocate contiguous memory initialized to zero |
| `realloc()` | Resize previously allocated memory |
| `free()` | Release allocated memory back to the system |

#### Overall DMA Lifecycle:

```text
ALLOCATE  ──►  USE  ──►  RESIZE (if needed)  ──►  FREE
```

---

### 6. `sizeof()` Operator

DMA requires knowing how many bytes of memory to request. The `sizeof()` operator returns the size in bytes of a data type or object.

```c
sizeof(data_type)
```

Example:
```c
sizeof(int)
```

---

### 7. Why `sizeof()` Is Important

Memory is measured in bytes. The size of a C data type can vary depending on the system/architecture.

For example:
- On a 16-bit system: `sizeof(int) == 2`
- On a 32-bit/64-bit system: `sizeof(int) == 4`

Instead of hardcoding numbers like `4`, write `sizeof(int)`. This guarantees cross-platform portability.

---

### 8. `sizeof()` Syntax

General syntax:
```c
sizeof(data_type)
```

Example:
```c
5 * sizeof(int)
```
This means: **The number of bytes required to store 5 integers.**

---

### 9. Void Pointers (`void *`)

DMA functions return a generic pointer type: `void *`. A `void *` pointer represents a raw memory address without any associated data type. It can point to any data type (`int`, `float`, `char`, `struct`).

---

### 10. The Typecasting Rule

Because DMA functions return `void *`, you must explicitly typecast the returned pointer to the destination pointer type:

```c
(int *)
(float *)
(char *)
```

```text
         ┌──► (int *)
         │
void * ──┼──► (float *)
         │
         └──► (char *)
```

---

### 11. `malloc()` — Memory Allocation

`malloc()` stands for **Memory Allocation**. It reserves a requested block of contiguous bytes in memory (heap).

Syntax:
```c
ptr = (int *) malloc(5 * sizeof(int));
```

This requests enough memory for **5 integers**.

---

### 12. Understanding `malloc()` Syntax

Breakdown of:
```c
ptr = (int *) malloc(5 * sizeof(int));
```

- `(int *)` ➜ Typecast returned generic `void *` pointer to `int *`.
- `malloc()` ➜ Memory allocation function.
- `5` ➜ Number of elements desired.
- `sizeof(int)` ➜ Byte size of one integer.
- `5 * sizeof(int)` ➜ Total bytes requested from heap.

---

### 13. What Does `malloc()` Take?

`malloc()` takes **one argument**: the **total number of bytes to allocate**.

Example:
```c
malloc(5 * sizeof(int))
```
The single argument is `5 * sizeof(int)`, calculating total byte requirement.

---

### 14. What Does `malloc()` Return?

`malloc()` returns a generic `void *` pointing to the first byte of allocated memory.

```text
malloc()  ──►  void *  ──►  (int *)  ──►  ptr
```

---

### 15. Initial Contents of `malloc()` Memory

**Critical Concept**: `malloc()` **does NOT initialize** allocated memory. The memory contains whatever garbage values were left behind in RAM.

```text
malloc() ──► Allocated Memory:
┌──────┬──────┬──────┬──────┬──────┐
│  ?   │  ?   │  ?   │  ?   │  ?   │
└──────┴──────┴──────┴──────┴──────┘
(Garbage / Uninitialized Values)
```

Never assume newly allocated `malloc()` memory contains zeros!

---

### 16. `malloc()` Summary

- Allocates raw heap memory.
- Takes **1 argument** (total bytes).
- Returns `void *` (requires typecasting).
- Memory contains **garbage values**.

Example:
```c
int *ptr;
ptr = (int *) malloc(5 * sizeof(int));
```

---

### 17. `calloc()` — Contiguous Allocation

`calloc()` stands for **Contiguous Allocation**. It allocates multiple memory blocks and initializes every byte to zero.

Syntax:
```c
ptr = (int *) calloc(5, sizeof(int));
```

---

### 18. `calloc()` Syntax

Breakdown of:
```c
ptr = (int *) calloc(5, sizeof(int));
```

It takes **two arguments**:
- `5` ➜ Number of locations (elements).
- `sizeof(int)` ➜ Size of each location (bytes per element).

---

### 19. What Does `calloc()` Take?

Unlike `malloc()`, `calloc()` takes **two distinct arguments**:

```c
calloc(number_of_elements, size_of_each_element)
```

---

### 20. Initialization Difference — `malloc()` vs `calloc()`

#### `malloc()` Memory (Uninitialized Garbage):
```text
┌──────┬──────┬──────┬──────┬──────┐
│  ?   │  ?   │  ?   │  ?   │  ?   │
└──────┴──────┴──────┴──────┴──────┘
```

#### `calloc()` Memory (Zero-Initialized):
```text
┌──────┬──────┬──────┬──────┬──────┐
│  0   │  0   │  0   │  0   │  0   │
└──────┴──────┴──────┴──────┴──────┘
```

---

### 21. `malloc()` vs `calloc()` Comparison Matrix

| Feature | `malloc()` | `calloc()` |
| :--- | :--- | :--- |
| **Purpose** | Allocate memory | Allocate contiguous memory |
| **Arguments** | 1 (`total_bytes`) | 2 (`num_elements`, `element_size`) |
| **First Argument** | Total bytes | Number of elements |
| **Second Argument** | — | Size of each element |
| **Initial Contents** | Garbage / Uninitialized | Zero initialized (`0` or `0.0`) |
| **Return Type** | `void *` | `void *` |

#### Golden Memory Shortcut:
- **`malloc`** ➜ 1 argument ➜ Total bytes ➜ Uninitialized garbage
- **`calloc`** ➜ 2 arguments ➜ Count × Size ➜ Zero-initialized

---

### 22. The `NULL` Trap

Dynamic memory allocation is not guaranteed to succeed. If the system runs out of memory (RAM) or requests an absurd size (e.g., 50 GB), `malloc()` and `calloc()` return `NULL`.

---

### 23. Checking for `NULL` After Allocation

Always validate the returned pointer before using it:

```c
int *ptr = (int *) malloc(5 * sizeof(int));

if (ptr == NULL) {
    printf("Memory allocation failed!\n");
    exit(1);
}
```

```text
Request Memory  ──►  Successful? ──► YES ──► Continue Execution
                                 └──► NO  ──► ptr == NULL ──► Error & Exit
```

---

### 24. Why Does `malloc()` Return `NULL`?

If system RAM is depleted or fragmented, `malloc()` cannot reserve the requested block. It safety-returns `NULL`. Accessing a `NULL` pointer without checking results in a **Segmentation Fault** crash.

---

### 25. `realloc()` — The Memory Resizer

`realloc()` stands for **Re-allocation**. It changes the size of previously allocated dynamic memory block without losing existing data.

Example:
Initially allocated for 5 integers ──► Need space for 8 integers ──► Use `realloc()`.

---

### 26. `realloc()` Syntax

Syntax:
```c
ptr = realloc(ptr, 8 * sizeof(int));
```

General format:
```c
ptr = realloc(original_pointer, new_total_bytes);
```

---

### 27. Understanding `realloc()`

- `ptr` ➜ Original pointer pointing to existing dynamic memory block.
- `8 * sizeof(int)` ➜ New total bytes required.

---

### 28. Expanding Memory with `realloc()`

Initial allocation (5 integers):
```text
┌────┬────┬────┬────┬────┐
│ 10 │ 20 │ 30 │ 40 │ 50 │
└────┴────┴────┴────┴────┘
```

After `ptr = realloc(ptr, 8 * sizeof(int));`:
```text
┌────┬────┬────┬────┬────┬────┬────┬────┐
│ 10 │ 20 │ 30 │ 40 │ 50 │ ?  │ ?  │ ?  │
└────┴────┴────┴────┴────┴────┴────┴────┘
 (Old data preserved)    (New space uninitialized)
```

---

### 29. Shrinking Memory with `realloc()`

Suppose memory currently holds 5 elements: `10 20 30 40 50`.
Resize to hold 3 elements:

```c
ptr = realloc(ptr, 3 * sizeof(int));
```

Result:
```text
┌────┬────┬────┐
│ 10 │ 20 │ 30 │
└────┴────┴────┘
```
The first 3 elements are preserved; trailing elements are freed.

---

### 30. The `realloc()` Data Preservation Rule

**Old data is strictly preserved up to `min(old_size, new_size)`.**
- **Expansion** (5 ➜ 8): All 5 old elements preserved; 3 new elements added.
- **Shrinking** (5 ➜ 3): First 3 old elements preserved; remainder truncated.

---

### 31. `realloc()` Summary

- Resizes existing dynamic memory.
- Takes 2 parameters: `(original_pointer, new_size)`.
- Can expand or shrink memory block.
- Preserves existing contents up to `min(old_size, new_size)`.

```c
ptr = realloc(ptr, new_size);
```

---

### 32. `free()` — Releasing Dynamic Memory

Static variables are automatically cleaned up when scope ends. Dynamic memory in the heap is **NOT** automatically freed by C compiler. The programmer is explicitly responsible for releasing dynamic memory using `free()`.

Syntax:
```c
free(ptr);
```

---

### 33. Why Do We Need `free()`?

```text
Program  ──►  malloc()  ──►  Heap Memory Allocated
Program  ──►  free(ptr) ──►  Heap Memory Returned to OS
```

Thinking analogy: Like returning a library book or recycling waste so system resources remain available.

---

### 34. Static vs Dynamic Memory Management

- **Static Memory**: Managed automatically by the runtime call stack.
- **Dynamic Memory**: Managed manually by programmer via `malloc`/`free`.

---

### 35. `free()` Syntax

```c
int *ptr = (int *) malloc(5 * sizeof(int));

/* Work with memory */

free(ptr);
ptr = NULL; // Best practice to prevent dangling pointer
```

---

### 36. Memory Leak

A **Memory Leak** occurs when dynamically allocated memory is no longer needed but is never released using `free()`.

```text
Allocate ──► Use ──► Forget to free() ──► Memory remains occupied indefinitely!
```

Consequences:
- RAM exhaustion
- Sluggish performance
- Program / system crashes

---

### 37. The Memory Leak Problem

```c
void function() {
    int *ptr = (int *) malloc(100 * sizeof(int));
    // Missing free(ptr)!
}
```

Every time `function()` is called, 400 bytes of heap memory are leaked and lost until the program terminates.

---

### 38. The Golden DMA Lifecycle

```text
ALLOCATE  ──►  USE  ──►  RESIZE (if needed)  ──►  FREE
```

---

### 39. Complete DMA Concept Map

```text
DYNAMIC MEMORY ALLOCATION
│
├── WHY?
│   ├── Static memory is fixed at compile-time
│   └── Dynamic memory adapts at run-time
│
├── REQUIREMENT
│   └── #include <stdlib.h>
│
├── sizeof()
│   └── Determines size in bytes portably
│
├── VOID POINTER (void *)
│   └── Requires explicit typecasting (e.g. (int *))
│
├── malloc()
│   ├── 1 argument (total_bytes)
│   └── Uninitialized garbage memory
│
├── calloc()
│   ├── 2 arguments (count, size)
│   └── Zero-initialized memory
│
├── NULL CHECK
│   └── Detect allocation failures
│
├── realloc()
│   ├── Resizes allocation (ptr, new_size)
│   └── Preserves data up to min(old, new)
│
└── free()
    ├── Releases heap memory
    └── Prevents memory leaks
```

---

### 40. Complete Syntax Reference

#### Required Header:
```c
#include <stdlib.h>
```

#### Pointer Declaration:
```c
int *ptr;
```

#### `malloc()` Allocation:
```c
ptr = (int *) malloc(5 * sizeof(int));
```

#### `calloc()` Allocation:
```c
ptr = (int *) calloc(5, sizeof(int));
```

#### `NULL` Safety Guard:
```c
if (ptr == NULL) {
    printf("Memory Allocation Failed!\n");
    exit(1);
}
```

#### `realloc()` Resizing:
```c
ptr = (int *) realloc(ptr, 8 * sizeof(int));
```

#### `free()` Deallocation:
```c
free(ptr);
ptr = NULL;
```

---

### 41. Function Summary Comparison Matrix

| Function | Main Purpose | Arguments | Initial Memory State |
| :--- | :--- | :--- | :--- |
| `malloc()` | Allocate raw memory | `1` (total bytes) | Uninitialized (garbage) |
| `calloc()` | Allocate contiguous zeroed memory | `2` (count, size) | Zero-initialized (`0` / `0.0`) |
| `realloc()` | Resize existing block | `2` (ptr, new_bytes) | Preserves old data |
| `free()` | Deallocate heap memory | `1` (ptr) | Memory released |

---

### 42. The Most Important Syntax to Memorize

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // 1. Allocate using malloc
    ptr = (int *) malloc(5 * sizeof(int));

    // 2. Safety check
    if (ptr == NULL) {
        printf("Memory not allocated!\n");
        exit(1);
    }

    // 3. Resize using realloc
    ptr = (int *) realloc(ptr, 8 * sizeof(int));

    // 4. Clean up using free
    free(ptr);
    ptr = NULL;

    return 0;
}
```

---

### 43. `malloc()` Mental Model

```text
malloc(5 * sizeof(int))
         │
         ▼
 Total bytes (e.g. 20)
         │
         ▼
 Allocate Heap RAM
         │
         ▼
  Returns void *
         │
         ▼
 Typecast (int *)
         │
         ▼
   Assign to ptr
```

---

### 44. `calloc()` Mental Model

```text
calloc(5, sizeof(int))
       │        │
       │        └── Size of each element
       └── Count of elements
            │
            ▼
 Allocate Contiguous Heap RAM
            │
            ▼
 Initialize every byte to 0
```

---

### 45. `realloc()` Mental Model

```text
Existing pointer (ptr) ──► realloc(ptr, 8 * sizeof(int))
                                   │
                                   ▼
                      Preserve existing data
                      Expand / Shrink memory
                                   │
                                   ▼
                         Return new address
```

---

### 46. `free()` Mental Model

```text
malloc() / calloc()  ──►  Heap Memory Occupied  ──►  Use Memory  ──►  free(ptr)  ──►  Heap Memory Returned
```

---

### 47. Common Mistakes & Pitfalls

#### Mistake 1: Forgetting `<stdlib.h>`
DMA functions require `#include <stdlib.h>`.

#### Mistake 2: Assuming `malloc()` Gives Zeros
`malloc()` leaves memory uninitialized (garbage). If you need zeros, use `calloc()`.

#### Mistake 3: Confusing Arguments
- `malloc(total_bytes)` ➜ 1 argument
- `calloc(num_elements, element_size)` ➜ 2 arguments

#### Mistake 4: Forgetting the Typecast
Cast the returned `void *` pointer: `(int *) malloc(...)`.

---

### 48. Common Mistake — Forgetting `sizeof()`

Never hardcode byte numbers like `malloc(20)`. Write `malloc(5 * sizeof(int))` to ensure portability across 32-bit and 64-bit platforms.

---

### 49. Common Mistake — Not Checking `NULL`

Never dereference a pointer immediately after allocation without checking `if (ptr == NULL)`.

---

### 50. Common Mistake — Forgetting `free()`

Every `malloc()` / `calloc()` must have a corresponding `free()`. Missing `free()` causes memory leaks.

---

### 51. Common Mistake — Confusing `realloc()` with New Allocation

`realloc()` takes an existing pointer and resizes its block; it is not for initial allocation.

---

### 52. Quick Revision Summary

| Concept | Key Point |
| :--- | :--- |
| **DMA** | Run-time memory allocation in heap |
| **Static Memory** | Fixed compile-time size in stack/data segment |
| **Required Header** | `#include <stdlib.h>` |
| **`sizeof()`** | Calculates byte size portably |
| **`void *`** | Generic pointer returned by allocation functions |
| **`malloc()`** | Allocates uninitialized memory (1 arg) |
| **`calloc()`** | Allocates zero-initialized memory (2 args) |
| **`realloc()`** | Resizes existing dynamic allocation |
| **`free()`** | Deallocates heap memory |
| **`NULL`** | Returned when allocation fails |
| **Memory Leak** | Unreleased dynamic memory |

---

### 53. 15 Golden Rules of Chapter 11

1. Static memory size is fixed before program execution.
2. Dynamic memory can be requested, resized, and freed at run time.
3. All DMA functions require `#include <stdlib.h>`.
4. Always use `sizeof()` to calculate data type byte requirements portably.
5. DMA allocation functions return a generic `void *` pointer.
6. Explicitly typecast `void *` to the target pointer type (e.g. `(int *)`).
7. `malloc()` takes 1 argument: total bytes.
8. `malloc()` memory is uninitialized and contains garbage values.
9. `calloc()` takes 2 arguments: element count and element size.
10. `calloc()` initializes allocated memory to zero.
11. Both `malloc()` and `calloc()` return `NULL` if allocation fails.
12. Always validate pointers with `if (ptr == NULL)` before accessing allocated memory.
13. `realloc()` resizes an existing allocation while preserving old data up to `min(old_size, new_size)`.
14. Always free dynamic memory with `free(ptr)` when it is no longer needed.
15. Failing to call `free()` leads to memory leaks.

---

### 54. Technical Interview Questions & Answers

#### Q1: What is Dynamic Memory Allocation?
> **Answer**: DMA is the process of allocating, resizing, and freeing memory at run-time (from the heap) rather than at compile-time (on the stack).

#### Q2: Why is DMA useful?
> **Answer**: It allows memory requirements to adapt dynamically during program execution, preventing memory wastage and buffer overflow limitations.

#### Q3: Which header is required for DMA?
> **Answer**: `#include <stdlib.h>`

#### Q4: What does `sizeof()` do?
> **Answer**: It returns the size of a data type or object in bytes on the host system.

#### Q5: What does `malloc()` do and how many arguments does it take?
> **Answer**: `malloc()` allocates a contiguous block of bytes on the heap. It takes **1 argument**: total bytes to allocate.

#### Q6: What are the initial contents of `malloc()` memory?
> **Answer**: Uninitialized garbage values.

#### Q7: What does `calloc()` do and how many arguments does it take?
> **Answer**: `calloc()` allocates contiguous memory for multiple elements and initializes every byte to zero. It takes **2 arguments**: number of elements and size of each element.

#### Q8: What is the key difference between `malloc()` and `calloc()`?
> **Answer**: `malloc()` takes 1 argument (total bytes) and leaves memory uninitialized; `calloc()` takes 2 arguments (count and size) and initializes memory to zero.

#### Q9: What does `realloc()` do?
> **Answer**: It changes the size of a previously allocated dynamic memory block while preserving existing contents up to `min(old_size, new_size)`.

#### Q10: What happens if dynamic memory allocation fails?
> **Answer**: The allocation function returns `NULL`.

#### Q11: Why must we check for `NULL` after calling `malloc()` or `calloc()`?
> **Answer**: Dereferencing a `NULL` pointer causes a fatal Segmentation Fault crash.

#### Q12: What does `free()` do?
> **Answer**: It releases dynamically allocated heap memory back to the operating system.

#### Q13: What is a memory leak?
> **Answer**: A memory leak occurs when dynamically allocated heap memory is no longer needed but is never released using `free()`, wasting system RAM.

---

### 55. Final Chapter Takeaway

Dynamic Memory Allocation gives a C program the flexibility to request, resize, and release memory at run time. Use `malloc()` for raw allocation, `calloc()` for zero-initialized allocation, `realloc()` for resizing, and `free()` to release memory responsibly.

```text
⭐ Golden Lifecycle: ALLOCATE ──► USE ──► RESIZE IF NEEDED ──► FREE
```

---

## 📂 Practice Programs

Access the practice problem folders directly by clicking on the links below:

| Difficulty Level | Folder Link | Description |
| :--- | :--- | :--- |
| 🟢 **Easy** | [`easy/`](./easy/) | Beginner problems: `sizeof()`, `malloc()`, `calloc()`, `free()`, `NULL` checks |
| 🟡 **Medium** | [`medium/`](./medium/) | Intermediate problems: dynamic arrays, `realloc()`, average calculation, string DMA |
| 🔴 **Hard** | [`hard/`](./hard/) | Advanced problems: dynamic 2D matrices, reallocation growth, custom memory structures |
