# 🛡️ Top 10 `NULL` & Allocation Failure Questions

> Evaluate pointer safety checks, allocation failure return macros, execution flow ordering, `free(NULL)` safety standards, and OS memory limits.

---

### Scenario 1
What specific numerical/pointer value is assigned to a destination pointer if `malloc()` fails to reserve requested heap memory?

---

### Scenario 2
Write the standard C `if` statement to verify whether `float *fptr` failed to allocate heap memory after calling `malloc()`.

---

### Scenario 3
Why might an operating system refuse a program's dynamic memory allocation request and return `NULL`?

---

### Scenario 4
If `ptr` equals `NULL`, what happens if a C program attempts to store a value into `*ptr` (e.g., `*ptr = 100;`)?

---

### Scenario 5
Must `NULL` pointer checking happen **before** or **after** writing data into dynamically allocated memory? Why?

---

### Scenario 6
If a memory allocation request returns `NULL`, what action should a robust C application take?

---

### Scenario 7
Can `realloc()` fail and return `NULL`? What happens to the original memory block when `realloc()` returns `NULL`?

---

### Scenario 8
Is passing a `NULL` pointer to `free()` safe according to C standard specifications (e.g., `free(NULL)`)?

---

### Scenario 9
Which standard C header libraries define the `NULL` macro?

---

### Scenario 10
**True or False**: If a computer has 16 GB of physical RAM installed, `malloc()` can never fail. Explain your answer.
