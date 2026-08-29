# 🧪 `malloc()` & `calloc()` Category Challenges

> Solve the following 5 focused challenges covering `malloc()`, `calloc()`, zero initialization, and `sizeof()` byte calculations.

---

### Challenge 1: Basic `malloc()`
- **Problem**: Write the single C statement to allocate memory for 15 characters using `malloc` and cast it to `char *`.
- **Hints**:
  - *Hint 1*: Cast type is `(char *)`.
  - *Hint 2*: Single argument expression is `15 * sizeof(char)`.

---

### Challenge 2: Basic `calloc()`
- **Problem**: Write the single C statement to allocate memory for 100 `double` values using `calloc`, fully zero-initialized.
- **Hints**:
  - *Hint 1*: Cast type is `(double *)`.
  - *Hint 2*: Arguments are `100, sizeof(double)`.

---

### Challenge 3: `malloc()` vs `calloc()` Choice
- **Problem**: You are building a system that tracks player scores. It is critical that all player scores start at strictly `0`. Write the allocation statement.
- **Hints**:
  - *Hint 1*: `calloc` guarantees zero-initialization.
  - *Hint 2*: `ptr = (int *) calloc(players, sizeof(int));`

---

### Challenge 4: The `sizeof()` Fix
- **Problem**: Fix this statement: `int *p = (int *) malloc(5);`. Make it dynamically calculate the correct bytes for 5 integers.
- **Hints**:
  - *Hint 1*: `5` only requests 5 bytes total.
  - *Hint 2*: You need `5 * sizeof(int)`.

---

### Challenge 5: Allocation + `NULL` Checking
- **Problem**: Combine `malloc` for 10 floats with an immediate `NULL` safety check that prints an error message if allocation fails.
- **Hints**:
  - *Hint 1*: `float *f = (float *) malloc(10 * sizeof(float));`
  - *Hint 2*: `if (f == NULL) { printf("Error..."); exit(1); }`
