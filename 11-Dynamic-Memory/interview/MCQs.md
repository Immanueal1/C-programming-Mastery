# 📝 Top 10 Multiple Choice Questions (MCQs)

> Test your technical understanding of C Dynamic Memory Allocation functions, header libraries, parameter counts, return types, memory leaks, and reallocation behavior.

---

### Question 1
Which header file is strictly required for Dynamic Memory Allocation in C?
- A) `<stdio.h>`
- B) `<stdlib.h>`
- C) `<memory.h>`
- D) `<alloc.h>`

---

### Question 2
What does `malloc` stand for in C programming?
- A) Memory Allocate
- B) Multiple Allocate
- C) Main Allocate
- D) Manual Allocate

---

### Question 3
Which dynamic memory allocation function initializes all allocated memory blocks to zero?
- A) `malloc()`
- B) `realloc()`
- C) `calloc()`
- D) `free()`

---

### Question 4
How many total arguments does `calloc()` accept?
- A) 1
- B) 2
- C) 3
- D) 0

---

### Question 5
What is the return type of `malloc()` and `calloc()` before explicit typecasting?
- A) `int *`
- B) `char *`
- C) `void *`
- D) `NULL`

---

### Question 6
If heap memory allocation fails, what value does `malloc()` or `calloc()` return?
- A) `0`
- B) `-1`
- C) `void`
- D) `NULL`

---

### Question 7
What is the primary purpose of `realloc()`?
- A) To free allocated heap memory.
- B) To resize previously allocated dynamic memory.
- C) To allocate memory and initialize all bytes to zero.
- D) To detect memory leaks at compile time.

---

### Question 8
What happens if dynamically allocated heap memory is never released using `free()`?
- A) The compiler generates a build error.
- B) It causes a Memory Leak.
- C) The memory automatically frees itself at function exit.
- D) The program executes faster.

---

### Question 9
What does `sizeof(double)` return?
- A) The total number of `double` variables in the program.
- B) The value of the `double` variable.
- C) The memory size in bytes required for one `double`.
- D) The memory address of the `double` variable.

---

### Question 10
When shrinking a dynamic memory block using `realloc()`, what happens to existing data?
- A) All data is immediately lost and cleared.
- B) Data is preserved up to the new size limit (`min(old_size, new_size)`).
- C) The data is automatically compressed.
- D) The compiler throws a warning and prevents shrinking.
