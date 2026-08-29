# 🟡 Chapter 11: Medium Practice Problems

> Intermediate C programming challenges focusing on dynamic memory allocation expressions, comparing `malloc()` and `calloc()` parameter structures, `realloc()` capacity expansion and data preservation during shrinking, understanding `void *` typecasts in strict standard environments, identifying pointer reassignment memory leaks, constructing complete safe allocation blocks with `NULL` checks, selecting optimal DMA functions based on application requirements, character `sizeof(char)` simplification, and tracing responsible 5-step DMA lifecycle workflows.

---

## 📌 Short Description

This directory contains 10 intermediate practice problems designed to deepen your conceptual understanding of dynamic memory allocation expressions (`count * sizeof(float)`), argument count differences between `malloc()` and `calloc()`, tracking `realloc()` expansions and data truncation during shrinking, enforcing explicit `void *` typecasts for portability, identifying silent memory leaks caused by pointer reassignment (`ptr = NULL`), building complete safe allocation structures with `exit(1)` error handling, evaluating performance tradeoffs between `malloc()` and `calloc()`, simplifying `sizeof(char)` expressions, and executing responsible 5-step dynamic memory workflows.

---

## 📚 Topics Covered

- [x] Variable-Based Dynamic Requests (`count * sizeof(float)`)
- [x] `malloc()` vs. `calloc()` Parameter Structure Differences
- [x] Capacity Expansion via `realloc()`
- [x] Data Preservation & Truncation Rules during `realloc()` Shrinking
- [x] Explicit `void *` Typecasting in Strict Standard Environments
- [x] Silent Memory Leaks via Pointer Reassignment (`ptr = NULL`)
- [x] Cohesive Safe Allocation Blocks (`calloc` + `NULL` Check + `exit(1)`)
- [x] Function Selection Tradeoffs (`malloc` for speed vs `calloc` for zeroing)
- [x] `sizeof(char)` Simplification Rules
- [x] 5-Step Responsible DMA Lifecycle Workflow

---

## 🎯 Learning Objectives

- Calculate dynamic allocation expressions using variables (`count * sizeof(float)`).
- Distinguish parameter counts between `malloc(total_bytes)` and `calloc(count, size)`.
- Analyze `realloc()` behavior during block expansion and truncation during shrinking.
- Understand the necessity of typecasting `void *` pointers in strict standard C.
- Recognize pointer reassignment memory leaks (`ptr = NULL` without `free(ptr)`).
- Construct complete safe allocation blocks combining `calloc()`, `NULL` check, and `exit(1)`.
- Select `malloc()` for high-speed buffers vs. `calloc()` for zero-initialized counters.
- Simplify redundant `sizeof(char)` expressions.
- Execute the 5-step DMA workflow: **Declare/Allocate ➜ `NULL` Check ➜ Use ➜ Resize ➜ Free**.

---

## 📈 Progress Checklist

- [ ] 11 Calculating the Request
- [ ] 12 Two Arguments vs One
- [ ] 13 Expanding the Capacity
- [ ] 14 Data Preservation During Shrink
- [ ] 15 The Missing Typecast
- [ ] 16 The Invisible Leak
- [ ] 17 The Complete Safe Allocation
- [ ] 18 Changing Data Requirements
- [ ] 19 Redundant Code Check
- [ ] 20 The Workflow Sequence

---

## 📁 Folder Contents

| File | Title | Concepts Used |
| :--- | :--- | :--- |
| [`11_calculating_the_request.c`](./11_calculating_the_request.c) | Calculating the Request | `sizeof()`, Variable-based allocation |
| [`12_two_arguments_vs_one.c`](./12_two_arguments_vs_one.c) | Two Arguments vs One | `malloc()` vs `calloc()` |
| [`13_expanding_the_capacity.c`](./13_expanding_the_capacity.c) | Expanding the Capacity | `realloc()` Expansion |
| [`14_data_preservation_during_shrink.c`](./14_data_preservation_during_shrink.c) | Data Preservation During Shrink | `realloc()` Shrinking, Data Preservation Rule |
| [`15_the_missing_typecast.c`](./15_the_missing_typecast.c) | The Missing Typecast | `void *`, Typecasting |
| [`16_the_invisible_leak.c`](./16_the_invisible_leak.c) | The Invisible Leak | Memory Leaks |
| [`17_the_complete_safe_allocation.c`](./17_the_complete_safe_allocation.c) | The Complete Safe Allocation | Allocate ──► Check |
| [`18_changing_data_requirements.c`](./18_changing_data_requirements.c) | Changing Data Requirements | `malloc` vs `calloc` Choice |
| [`19_redundant_code_check.c`](./19_redundant_code_check.c) | Redundant Code Check | `sizeof()` with characters |
| [`20_the_workflow_sequence.c`](./20_the_workflow_sequence.c) | The Workflow Sequence | Allocate ──► Use ──► Resize ──► Free |

---

## 📝 Practice Questions

### Question 11: Calculating the Request

- **Difficulty**: Medium
- **Concepts Used**: `sizeof()`, Variable-based allocation
- **Problem Statement**:
  Assume `int count = 25;`. Write the exact `malloc` statement to allocate memory for `count` number of floating-point values, catching it in a properly declared pointer `fptr`.
- **Sample Input**: *(No input)*
- **Sample Output**: *(Declaration and allocation)*
- **Constraints**: Use the variable `count` dynamically, do not hardcode 25.
- **Hints**:
  - *Hint 1*: Declare `float *fptr;`.
  - *Hint 2*: The total bytes needed is `count * sizeof(float)`.
  - *Hint 3*: `fptr = (float *) malloc(count * sizeof(float));`

---

### Question 12: Two Arguments vs One

- **Difficulty**: Medium
- **Concepts Used**: `malloc()` vs `calloc()`
- **Problem Statement**:
  A programmer wrote `ptr = (char *) malloc(50, sizeof(char));`. Identify the error and write the two ways this could be corrected (one using `malloc`, one using `calloc`).
- **Sample Input**: *(No input)*
- **Sample Output**: *(Corrected `malloc` and `calloc` statements)*
- **Constraints**: Understand parameter requirements for both functions.
- **Hints**:
  - *Hint 1*: `malloc` only takes one argument.
  - *Hint 2*: To fix `malloc`, multiply the two values to create a single argument.
  - *Hint 3*: `malloc(50 * sizeof(char))` or `calloc(50, sizeof(char))`.

---

### Question 13: Expanding the Capacity

- **Difficulty**: Medium
- **Concepts Used**: `realloc()` Expansion
- **Problem Statement**:
  `ptr` points to 3 allocated integers. You resize it: `ptr = realloc(ptr, 5 * sizeof(int));`. Conceptually, how many new uninitialized integer slots have been added to the end of your block?
- **Sample Input**: *(No input)*
- **Sample Output**: *(Number of new slots)*
- **Constraints**: Understand that `realloc` defines the total new size, not the amount to add.
- **Hints**:
  - *Hint 1*: The original size was 3. The new total size is 5.
  - *Hint 2*: It preserves the first 3 and adds the difference.
  - *Hint 3*: 5 total - 3 existing = 2 new slots.

---

### Question 14: Data Preservation During Shrink

- **Difficulty**: Medium
- **Concepts Used**: `realloc()` Shrinking, Data Preservation Rule
- **Problem Statement**:
  An allocated block holds the integers `10, 20, 30, 40, 50`. You execute `ptr = realloc(ptr, 2 * sizeof(int));`. What exact values remain available in the newly sized memory block?
- **Sample Input**: *(No input)*
- **Sample Output**: *(Remaining values)*
- **Constraints**: Apply the `min(old_size, new_size)` preservation rule.
- **Hints**:
  - *Hint 1*: Shrinking memory chops off data from the end.
  - *Hint 2*: The new size is 2 integers.
  - *Hint 3*: Only the first two integers (10 and 20) are preserved.

---

### Question 15: The Missing Typecast

- **Difficulty**: Medium
- **Concepts Used**: `void *`, Typecasting
- **Problem Statement**:
  What happens conceptually if a compiler strictly enforces C++ or modern C standards and you write `int *p = malloc(10 * sizeof(int));` without a cast? Write the corrected version.
- **Sample Input**: *(No input)*
- **Sample Output**: *(Explanation and corrected syntax)*
- **Constraints**: Explain the role of `void *`.
- **Hints**:
  - *Hint 1*: `malloc` returns a `void *`.
  - *Hint 2*: A `void *` cannot be directly assigned to an `int *` in strict type-checking without explicitly telling the compiler.
  - *Hint 3*: You must add `(int *)` before `malloc`.

---

### Question 16: The Invisible Leak

- **Difficulty**: Medium
- **Concepts Used**: Memory Leaks
- **Problem Statement**:
  Consider the following pseudo-logic: Allocate memory for `ptr`. Use it. Then assign `ptr = NULL;`. Did this release the memory? What is this specific problem called?
- **Sample Input**: *(No input)*
- **Sample Output**: *(Explanation of the memory leak)*
- **Constraints**: Differentiate between pointer reassignment and memory releasing.
- **Hints**:
  - *Hint 1*: No, setting a pointer to `NULL` does not free the memory.
  - *Hint 2*: It simply makes you lose the address of the allocated memory, making it impossible to ever free it.
  - *Hint 3*: This causes a permanent Memory Leak until the program terminates.

---

### Question 17: The Complete Safe Allocation

- **Difficulty**: Medium
- **Concepts Used**: Allocate ──► Check
- **Problem Statement**:
  Write a cohesive block of code that declares a float pointer, uses `calloc` to allocate 100 floats, and immediately checks if the allocation failed, calling `exit(1)` if it did.
- **Sample Input**: *(No input)*
- **Sample Output**: *(Code block)*
- **Constraints**: Follow the standard safe allocation pattern.
- **Hints**:
  - *Hint 1*: `float *ptr = (float *) calloc(100, sizeof(float));`
  - *Hint 2*: Immediately follow this with an `if` statement.
  - *Hint 3*: `if (ptr == NULL) { exit(1); }`

---

### Question 18: Changing Data Requirements

- **Difficulty**: Medium
- **Concepts Used**: `malloc` vs `calloc` Choice
- **Problem Statement**:
  **Scenario A**: You are building a high-speed buffer where data will be immediately overwritten by a file download. **Scenario B**: You are building a counter system where every slot must start at zero. Which DMA function is most appropriate for each scenario and why?
- **Sample Input**: *(No input)*
- **Sample Output**: *(Scenario choices)*
- **Constraints**: Relate the function's internal behavior to the scenario.
- **Hints**:
  - *Hint 1*: One function is faster because it skips initialization. The other is safer for counters.
  - *Hint 2*: `malloc` leaves garbage values. `calloc` zeroes them out.
  - *Hint 3*: Scenario A: `malloc` (speed). Scenario B: `calloc` (zero initialization).

---

### Question 19: Redundant Code Check

- **Difficulty**: Medium
- **Concepts Used**: `sizeof()` with characters
- **Problem Statement**:
  A developer writes `char *str = (char *) malloc(50 * sizeof(char));`. Since a `char` is universally defined as exactly 1 byte in C, how can this `malloc` statement be simplified while still requesting 50 bytes?
- **Sample Input**: *(No input)*
- **Sample Output**: *(Simplified `malloc` statement)*
- **Constraints**: Maintain the typecast.
- **Hints**:
  - *Hint 1*: `sizeof(char)` always evaluates to 1.
  - *Hint 2*: `50 * 1` is just 50.
  - *Hint 3*: `ptr = (char *) malloc(50);`

---

### Question 20: The Workflow Sequence

- **Difficulty**: Medium
- **Concepts Used**: Allocate ──► Use ──► Resize ──► Free
- **Problem Statement**:
  List the exact 5 conceptual steps required to responsibly manage dynamic memory that needs to grow during execution.
- **Sample Input**: *(No input)*
- **Sample Output**: *(5-step workflow)*
- **Constraints**: Use the standard workflow taught in the chapter.
- **Hints**:
  - *Hint 1*: It starts with Declare & Allocate.
  - *Hint 2*: Don't forget the safety check!
  - *Hint 3*: Allocate ──► Check for `NULL` ──► Use ──► Resize (`realloc`) ──► Free.

---

## 🔗 Navigation Links

- 📋 **[View Complete Practice Workbook (`PRACTICE.md`)](./PRACTICE.md)**
- 🟢 **[Return to Easy Practice (`../easy/`)](../easy/)**
- 🔴 **[Proceed to Hard Practice (`../hard/`)](../hard/)**
- 🏠 **[Return to Chapter 11 Overview (`../README.md`)](../README.md)**
