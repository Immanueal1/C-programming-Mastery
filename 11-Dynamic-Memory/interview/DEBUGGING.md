# 🐞 Top 10 Debugging Challenges

> Identify the syntax errors, logical bugs, parameter mismatches, type mismatch casts, missing `NULL` safety checks, double `free()` errors, or unhandled memory leaks in the following C DMA code snippets.

---

### Challenge 1
```c
int *p = malloc(10); // Developer intends to allocate space for 10 integers
```
*(Problem: Hardcoded byte count — `malloc(10)` only allocates 10 bytes total, not 10 integers! Use `malloc(10 * sizeof(int))` for 40 bytes).*

---

### Challenge 2
```c
float *p = calloc(sizeof(float), 5); 
```
*(Problem: Inverted argument order — `calloc` signature is `calloc(num_elements, element_size)`. Write `calloc(5, sizeof(float))` for clarity and standard parameter alignment).*

---

### Challenge 3
```c
char *p = (char *) malloc(5 * sizeof(char));
*p = 'A'; // Missing NULL check!
```
*(Problem: Missing `NULL` pointer check — if `malloc` fails and returns `NULL`, dereferencing `*p` causes a crash).*

---

### Challenge 4
```c
int *p = (float *) malloc(5 * sizeof(int));
```
*(Problem: Mismatched pointer cast — casting `malloc()` to `(float *)` when assigning to an `int *p` pointer variable).*

---

### Challenge 5
```c
int *p = (int *) malloc(5 * sizeof(int));
p = realloc(p, 3); // Developer intends to shrink to 3 integers
```
*(Problem: Hardcoded `realloc` byte count — `realloc(p, 3)` shrinks memory to 3 bytes total, not 3 integers! Write `realloc(p, 3 * sizeof(int))`)*.

---

### Challenge 6
```c
int *p = (int *) calloc(2, sizeof(int));
free(p);
free(p); // Duplicate free call!
```
*(Problem: Double `free()` error — calling `free()` twice on the same allocated pointer causes undefined behavior and heap corruption crashes).*

---

### Challenge 7
```c
int *p = (int *) malloc(5 * sizeof(int));
p = NULL;
free(p);
```
*(Problem: Memory leak trigger — assigning `p = NULL` before calling `free(p)` orphans the allocated heap memory. Swap order: `free(p); p = NULL;`)*.

---

### Challenge 8
```c
#include <stdio.h>

int main() {
    int *p = malloc(sizeof(int)); // Missing header!
    return 0;
}
```
*(Problem: Missing header — DMA functions `malloc` and `free` require `#include <stdlib.h>`).*

---

### Challenge 9
```c
void *p = malloc(sizeof(int));
*p = 10; // Attempting to dereference void *
```
*(Problem: Dereferencing `void *` directly — `void *` pointers cannot be dereferenced without explicit typecasting to typed pointers like `int *`).*

---

### Challenge 10
```c
int p = (int *) malloc(sizeof(int)); // Incorrect variable declaration!
```
*(Problem: Invalid destination variable type — `p` is declared as an integer variable `int p` instead of an integer pointer `int *p`).*
