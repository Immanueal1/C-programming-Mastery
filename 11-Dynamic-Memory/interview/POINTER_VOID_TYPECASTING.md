# 📌 Top 10 Pointer, `void *` & Typecasting Questions

> Understand generic heap pointers, typecasting syntax, dereferencing restrictions, and type safety principles.

---

### Scenario 1
You are allocating dynamic memory to store floating-point student grades (`float`). Write the exact pointer variable declaration.

---

### Scenario 2
For the `float` grades pointer above, write the exact typecast operator used in front of `malloc()`.

---

### Scenario 3
You are allocating dynamic memory for a sequence of characters (`char`). Write the exact pointer variable declaration.

---

### Scenario 4
Write the exact typecast operator used in front of `malloc()` for the character sequence allocation.

---

### Scenario 5
What does `void *` signify in C programming?

---

### Scenario 6
If `malloc()` returns a `void *` pointer, why doesn't standard C define separate allocation functions returning `int *`, `float *`, and `char *`?

---

### Scenario 7
Can a `void *` pointer variable be directly dereference-accessed (e.g., `*vptr = 10;`) without typecasting? Why or why not?

---

### Scenario 8
In `ptr = (float *) calloc(5, sizeof(float));`, identify the exact typecast expression.

---

### Scenario 9
If you write `int *p = malloc(10 * sizeof(int));` without explicit `(int *)` typecasting in standard C (C11), will it compile? How does this differ from strict C++ compilers?

---

### Scenario 10
Why must the pointer declaration type (e.g., `double *ptr`) match the typecast type (e.g., `(double *)`) when allocating dynamic memory?
