# 🧹 Memory Leaks & `free()` Category Challenges

> Solve the following 5 focused challenges covering missing `free()`, loop memory leaks, double `free()` traps, reference loss, and reassignment leaks.

---

### Challenge 1: Missing Free
- **Buggy Code**: `int *p = (int *) malloc(100 * sizeof(int)); /* Program ends without free */`
- **Expected Behavior**: Fix the code by releasing dynamic memory explicitly.
- **Hints**:
  - *Hint 1*: Add `free(p);` before return 0.

---

### Challenge 2: Loop Leak
- **Buggy Code**: `for(int i = 0; i < 5; i++) { int *p = (int *) malloc(10 * sizeof(int)); }`
- **Expected Behavior**: Prevent memory leak inside repetitive loop logic.
- **Hints**:
  - *Hint 1*: A new block is allocated 5 times; previous address is lost each iteration.
  - *Hint 2*: Call `free(p);` inside the loop body after using `p`.

---

### Challenge 3: The Double Free Trap
- **Buggy Code**: `free(p); free(p);`
- **Expected Behavior**: Prevent crashing from freeing unowned memory twice.
- **Hints**:
  - *Hint 1*: Memory can only be freed once.
  - *Hint 2*: Remove the duplicate `free(p)` call or set `p = NULL;` after first `free()`.

---

### Challenge 4: Losing the Reference
- **Buggy Code**: `int *p = (int *) malloc(10 * sizeof(int)); p = NULL; free(p);`
- **Expected Behavior**: Free the memory before clearing the reference address.
- **Hints**:
  - *Hint 1*: Setting `p = NULL` loses the address of the allocated block.
  - *Hint 2*: Swap execution order: `free(p); p = NULL;`

---

### Challenge 5: Reassignment Leak
- **Buggy Code**: `p = calloc(5, sizeof(int)); p = calloc(10, sizeof(int)); free(p);`
- **Expected Behavior**: Prevent orphaning the first memory allocation block.
- **Hints**:
  - *Hint 1*: Call `free(p);` before assigning the second `calloc()` return to `p`.
