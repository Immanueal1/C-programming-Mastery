# 🐞 DMA Debugging Category Challenges

> Solve the following 5 focused challenges covering typecast crashes, `calloc` argument order mismatches, size calculation deficits, wrong pointer resizings, and missing headers.

---

### Challenge 1: The Cast Crash
- **Buggy Code**: `float *f = (int *) malloc(5 * sizeof(float));`
- **Expected Behavior**: Typecast must match the target pointer variable type.
- **Hints**:
  - *Hint 1*: `f` is declared as `float *`.
  - *Hint 2*: Change `(int *)` cast to `(float *)`.

---

### Challenge 2: Argument Mismatch
- **Buggy Code**: `int *p = calloc(5 * sizeof(int));`
- **Expected Behavior**: `calloc()` requires two distinct parameters.
- **Hints**:
  - *Hint 1*: Replace `*` operator with `,` comma separator.
  - *Hint 2*: `calloc(5, sizeof(int));`

---

### Challenge 3: The Size Deficit
- **Buggy Code**: `double *d = (double *) malloc(10);` (Developer wants 10 doubles).
- **Expected Behavior**: Calculate total byte requirements correctly.
- **Hints**:
  - *Hint 1*: `malloc(10)` only allocates 10 bytes total.
  - *Hint 2*: Use `malloc(10 * sizeof(double))`.

---

### Challenge 4: Resizing Wrong Pointer
- **Buggy Code**: `int *p = malloc(10 * sizeof(int)); int *q; q = realloc(p, 20 * sizeof(int));` (Developer expects `p` to be updated).
- **Expected Behavior**: Overwrite original pointer variable.
- **Hints**:
  - *Hint 1*: `realloc` returns the new address.
  - *Hint 2*: `p = (int *) realloc(p, 20 * sizeof(int));`

---

### Challenge 5: The Header Omission
- **Buggy Code**:
  ```c
  #include <stdio.h>

  int main() {
      int *p = malloc(sizeof(int));
      free(p);
      return 0;
  }
  ```
- **Expected Behavior**: Include the required standard library header.
- **Hints**:
  - *Hint 1*: `malloc` and `free` are undeclared functions.
  - *Hint 2*: Add `#include <stdlib.h>`.
