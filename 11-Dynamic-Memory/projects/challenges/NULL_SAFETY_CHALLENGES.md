# 🛡️ `NULL` & Memory Safety Category Challenges

> Solve the following 5 focused challenges covering safe initialization, `NULL` check blocks, `realloc` failure behavior, `free(NULL)` safety standards, and pointer neutralization.

---

### Challenge 1: Safe Start
- **Problem**: Declare an integer pointer and safely initialize it to `NULL` before performing any DMA operations.
- **Hints**:
  - *Hint 1*: `int *ptr = NULL;`

---

### Challenge 2: The Safety Block
- **Problem**: Write the standard `if` block used directly after calling `malloc()` to catch allocation failures.
- **Hints**:
  - *Hint 1*: `if (ptr == NULL)`
  - *Hint 2*: Print error message and handle exit (`exit(1);`).

---

### Challenge 3: Realloc Failure (Conceptual)
- **Problem**: If `realloc()` fails and returns `NULL`, does it automatically free the original memory block?
- **Hints**:
  - *Hint 1*: No, `realloc` leaves the original memory block intact.
  - *Hint 2*: Overwriting your original pointer directly with `NULL` causes a memory leak.

---

### Challenge 4: Safe Freeing
- **Problem**: Is it safe to call `free(NULL)`? Write a small code block demonstrating passing a `NULL` pointer to `free()`.
- **Hints**:
  - *Hint 1*: Yes, C standard explicitly states `free(NULL)` does nothing safely.
  - *Hint 2*: `int *p = NULL; free(p);`

---

### Challenge 5: Neutralizing Dangling Pointers
- **Problem**: Write the two lines of C code required to free `ptr` and neutralize it immediately.
- **Hints**:
  - *Hint 1*: `free(ptr);`
  - *Hint 2*: `ptr = NULL;`
