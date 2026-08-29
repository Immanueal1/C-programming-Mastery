# 🔴 Chapter 11 Hard Practice Workbook

> Practice workbook containing 10 advanced problems focusing on multi-step `realloc()` state tracing, lost pointer memory leaks during double allocation, calculating combined `(N + M) * sizeof(int)` reallocation sizes, uninitialized memory expansion behavior in `realloc()`, mathematical byte allocation flaws with `sizeof(double)`, dangling pointer dangers, safe pointer neutralization (`ptr = NULL`), `NULL` check execution ordering, temporary pointer safeguards during `realloc()` failures, and multi-stage dynamic memory lifecycle byte tracking.

---

## 🎯 Learning Objectives

- Trace data preservation and uninitialized expansion through multi-step `realloc()` calls.
- Identify lost pointer memory leaks caused by double `malloc()` assignments without intermediate `free()`.
- Calculate compound `realloc()` byte arguments `(N + M) * sizeof(int)`.
- Recognize that `realloc()` does not zero-initialize newly expanded memory slots.
- Analyze byte allocation flaws where `malloc(10)` fails to hold 10 `double` elements (80 bytes needed).
- Understand dangling pointers and neutralize them with `ptr = NULL` post-`free()`.
- Correct execution flow ordering so `NULL` checks execute immediately after allocation.
- Prevent memory loss during `realloc()` failure using temporary pointer assignments.
- Trace heap memory byte ownership through full multi-phase allocation lifecycles to 0 bytes.

---

## 📊 Section Metadata

- **Estimated Difficulty**: 🔴 Hard
- **Total Problems**: 10 Questions
- **Topic Focus**: Multi-Step Resizing Trace, Lost Pointer Leaks, Compound Realloc Arguments, Uninitialized Expansion, Size Flaw Analysis, Dangling Pointers, Pointer Neutralization, Null Check Positioning, Temporary Pointer Safeguards, Complete Lifecycle Byte Tracing

---

## 📈 Progress Checklist

- [ ] 21 Multi-Step Resizing Trace
- [ ] 22 The Lost Pointer Leak
- [ ] 23 Calculating the Realloc Argument
- [ ] 24 Uninitialized Expansion Trap
- [ ] 25 The Wrong Size Trap
- [ ] 26 Dangling Pointer Danger
- [ ] 27 Correcting the Dangling Pointer
- [ ] 28 Null Check Positioning
- [ ] 29 Realloc Failure Safety
- [ ] 30 Complete DMA Trace

---

## 📝 Practice Questions

### Question 21: Multi-Step Resizing Trace

- **Difficulty**: Hard
- **Concepts Used**: `realloc()`, Memory State
- **Problem Statement**:
  ```c
  int *p = (int*) calloc(3, sizeof(int)); // Values: 0, 0, 0
  // Assign 10, 20, 30 to locations
  p = realloc(p, 5 * sizeof(int));
  // Assign 40, 50 to new locations
  p = realloc(p, 2 * sizeof(int));
  ```
  What exact values currently reside in the valid allocated memory block?
- **Sample Input**: *(No input)*
- **Sample Output**: *(Remaining values)*
- **Constraints**: Trace data preservation through both expansion and shrinking.
- **Hints**:
  - *Hint 1*: Expansion preserves all 3 old values and adds 2 uninitialized slots (which you then filled with 40, 50).
  - *Hint 2*: The block holds 10, 20, 30, 40, 50.
  - *Hint 3*: Shrinking to 2 means only the first two values survive. Result: 10, 20.

---

### Question 22: The Lost Pointer Leak

- **Difficulty**: Hard
- **Concepts Used**: Memory Leaks, Pointer Reassignment
- **Problem Statement**:
  ```c
  int *p = (int *) malloc(10 * sizeof(int));
  p = (int *) malloc(20 * sizeof(int));
  free(p);
  ```
  Identify the severe memory management flaw in this sequence and explain conceptually what happened to the RAM.
- **Sample Input**: *(No input)*
- **Sample Output**: *(Explanation of the memory leak)*
- **Constraints**: Focus on the first allocation.
- **Hints**:
  - *Hint 1*: You allocated memory twice but only called `free()` once.
  - *Hint 2*: When `p` is reassigned to the second block, the address of the first block is lost forever.
  - *Hint 3*: The first 10 integers are leaked. `free(p)` only releases the 20-integer block.

---

### Question 23: Calculating the Realloc Argument

- **Difficulty**: Hard
- **Concepts Used**: `realloc()` size logic
- **Problem Statement**:
  You allocated an array of N integers. You want to add M more integers to the end of it. Write the `realloc` statement. (Assume N and M are existing integer variables).
- **Sample Input**: *(No input)*
- **Sample Output**: *(realloc statement)*
- **Constraints**: Remember that `realloc` requires the new total size, not just the added size.
- **Hints**:
  - *Hint 1*: The new total number of elements is N + M.
  - *Hint 2*: You must multiply the total number of elements by `sizeof(int)`.
  - *Hint 3*: `ptr = realloc(ptr, (N + M) * sizeof(int));`

---

### Question 24: Uninitialized Expansion Trap

- **Difficulty**: Hard
- **Concepts Used**: `realloc()` initialization behavior
- **Problem Statement**:
  ```c
  ptr = (int *) calloc(3, sizeof(int)); // Values: 0, 0, 0
  ptr = realloc(ptr, 5 * sizeof(int));
  ```
  Are the 4th and 5th integers guaranteed to be 0? Explain why or why not.
- **Sample Input**: *(No input)*
- **Sample Output**: *(Explanation of realloc initialization)*
- **Constraints**: Contrast `realloc` behavior with `calloc`.
- **Hints**:
  - *Hint 1*: `realloc` expands the memory block, but does it clean the new memory?
  - *Hint 2*: No, `realloc` behaves like `malloc` for the newly added space.
  - *Hint 3*: The 4th and 5th integers will contain uninitialized garbage values, not zeros.

---

### Question 25: The Wrong Size Trap

- **Difficulty**: Hard
- **Concepts Used**: `sizeof()` logic errors
- **Problem Statement**:
  A programmer wants memory for 10 double-precision floats (`double`). They write:
  `double *d = (double *) malloc(10);`
  Conceptually, if `sizeof(double)` is 8 bytes, how many complete doubles can actually fit in this allocated memory?
- **Sample Input**: *(No input)*
- **Sample Output**: *(Number of doubles)*
- **Constraints**: Show the mathematical flaw.
- **Hints**:
  - *Hint 1*: The programmer requested exactly 10 bytes total.
  - *Hint 2*: One `double` requires 8 bytes.
  - *Hint 3*: Only 1 complete `double` fits (using 8 bytes), leaving 2 wasted bytes. It crashes if they try to access the 2nd double.

---

### Question 26: Dangling Pointer Danger

- **Difficulty**: Hard
- **Concepts Used**: `free()` consequences
- **Problem Statement**:
  ```c
  int *ptr = (int *) malloc(sizeof(int));
  /* Value 100 stored here */
  free(ptr);
  /* Later in code */
  /* ptr used again */
  ```
  Conceptually, what is `ptr` pointing to after `free(ptr)` is executed? Why is using it dangerous?
- **Sample Input**: *(No input)*
- **Sample Output**: *(Explanation of dangling pointer)*
- **Constraints**: Explain memory ownership.
- **Hints**:
  - *Hint 1*: `free()` tells the operating system "I am done with this memory".
  - *Hint 2*: However, `free()` does not automatically change the address stored inside `ptr`.
  - *Hint 3*: `ptr` becomes a "Dangling Pointer", pointing to memory your program no longer owns. Accessing it causes Undefined Behavior.

---

### Question 27: Correcting the Dangling Pointer

- **Difficulty**: Hard
- **Concepts Used**: Safe memory management
- **Problem Statement**:
  How should you manually modify the variable `ptr` immediately after calling `free(ptr);` to ensure you accidentally do not access released memory later?
- **Sample Input**: *(No input)*
- **Sample Output**: *(Safe pointer assignment)*
- **Constraints**: Use the standard safety macro.
- **Hints**:
  - *Hint 1*: You need to overwrite the old address with a safe, invalid address.
  - *Hint 2*: Assign the standard null pointer value.
  - *Hint 3*: `ptr = NULL;`

---

### Question 28: Null Check Positioning

- **Difficulty**: Hard
- **Concepts Used**: `NULL` checking workflow
- **Problem Statement**:
  A programmer writes:
  ```c
  int *p = (int *) malloc(500000000000 * sizeof(int));
  /* Assume allocation fails */
  free(p);
  if (p == NULL) { exit(1); }
  ```
  Identify the catastrophic workflow error in this sequence.
- **Sample Input**: *(No input)*
- **Sample Output**: *(Explanation of workflow failure)*
- **Constraints**: Understand execution order.
- **Hints**:
  - *Hint 1*: Look at where the `NULL` check is located.
  - *Hint 2*: They attempt to `free(p)` before checking if the allocation succeeded.
  - *Hint 3*: Passing a `NULL` pointer to `free()` or attempting to use it before checking it will cause the program to behave unpredictably or crash. The check must happen immediately after allocation.

---

### Question 29: Realloc Failure Safety (Conceptual)

- **Difficulty**: Hard
- **Concepts Used**: `realloc` and `NULL`
- **Problem Statement**:
  If `realloc()` fails to find enough contiguous memory to expand your block, it returns `NULL`. If you write `ptr = realloc(ptr, HUGE_SIZE);`, and it fails, what happens to your original pointer and the data it held?
- **Sample Input**: *(No input)*
- **Sample Output**: *(Explanation of the realloc overwrite trap)*
- **Constraints**: Understand why overwriting the original pointer immediately is dangerous.
- **Hints**:
  - *Hint 1*: `realloc` returns `NULL` on failure, but the original memory block is not destroyed.
  - *Hint 2*: By writing `ptr = realloc(ptr, ...)`, you overwrite `ptr` with `NULL`.
  - *Hint 3*: You lose the address to your original data, causing a memory leak! (Safe practice uses a temporary pointer first).

---

### Question 30: Complete DMA Trace

- **Difficulty**: Hard
- **Concepts Used**: Allocate ──► Use ──► Resize ──► Free
- **Problem Statement**:
  Determine the final active memory state:
  ```c
  p = calloc(2, sizeof(int));
  p[0] = 5; p[1] = 10;
  p = realloc(p, 4 * sizeof(int));
  p = realloc(p, 1 * sizeof(int));
  free(p);
  ```
  How many bytes of dynamically allocated memory does the program own at the very end of step 5?
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  0 bytes
  ```
- **Constraints**: Trace to the absolute end.
- **Hints**:
  - *Hint 1*: Step 1: Owns 8 bytes.
  - *Hint 2*: Step 3: Owns 16 bytes. Step 4: Owns 4 bytes.
  - *Hint 3*: Step 5 releases everything. The program owns 0 bytes.
