# 🔄 `realloc()` Category Challenges

> Solve the following 5 focused challenges covering `realloc()` expansion, shrinking, data preservation, uninitialized additions, and multi-step resizing.

---

### Challenge 1: Basic Resizing
- **Problem**: `ptr` holds 5 integers. Expand it to hold 8 integers using `realloc()`.
- **Hints**:
  - *Hint 1*: First argument is `ptr`.
  - *Hint 2*: Second argument is `8 * sizeof(int)`.

---

### Challenge 2: Shrinking Memory
- **Problem**: `ptr` holds 20 floats. Shrink it to hold only 10 floats using `realloc()`.
- **Hints**:
  - *Hint 1*: The syntax is identical to expanding.
  - *Hint 2*: `ptr = (float *) realloc(ptr, 10 * sizeof(float));`

---

### Challenge 3: Preserving Existing Data
- **Problem**: `ptr` holds values `1, 2, 3`. You execute `ptr = realloc(ptr, 2 * sizeof(int));`. Conceptually state what values remain in memory.
- **Hints**:
  - *Hint 1*: The block shrinks from 3 to 2 integers.
  - *Hint 2*: Data is preserved up to `min(old_size, new_size)`.
  - *Hint 3*: Values `1, 2` remain.

---

### Challenge 4: Expanding Uninitialized
- **Problem**: `ptr` holds `9, 9`. You execute `ptr = realloc(ptr, 4 * sizeof(int));`. State the conceptual contents of all 4 slots.
- **Hints**:
  - *Hint 1*: `9, 9` are preserved.
  - *Hint 2*: Newly added slots are uninitialized garbage.
  - *Hint 3*: `9, 9, Garbage, Garbage`.

---

### Challenge 5: Multi-Step Resizing
- **Problem**: Write a code sequence: allocate 2 ints via `malloc`, expand to 4 via `realloc`, shrink to 1 via `realloc`.
- **Hints**:
  - *Hint 1*: `ptr = (int *) malloc(2 * sizeof(int));`
  - *Hint 2*: `ptr = realloc(ptr, 4 * sizeof(int));`
  - *Hint 3*: `ptr = realloc(ptr, 1 * sizeof(int));`
