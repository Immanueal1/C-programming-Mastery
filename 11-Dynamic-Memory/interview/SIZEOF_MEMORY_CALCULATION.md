# 📐 Top 10 `sizeof()` & Memory Calculation Questions

> Evaluate portable byte expressions, system-independent type sizes, compile-time evaluation, and `realloc` arguments.

---

### Scenario 1
How many bytes does `sizeof(char)` return in standard C?

---

### Scenario 2
Write the exact calculation expression to compute the total bytes needed for 100 `double`-precision floating-point numbers.

---

### Scenario 3
In `malloc(X)`, if you need memory for 7 `int` values, what exact expression should replace `X`?

---

### Scenario 4
In `calloc(X, Y)`, if you need memory for 12 `char` values, what exact expressions should replace `X` and `Y`?

---

### Scenario 5
In `realloc(ptr, X)`, if expanding an integer block from 5 integers to 10 integers, what exact expression should replace `X`?

---

### Scenario 6
If `sizeof(int)` evaluates to 4 bytes on a 32-bit architecture, what is the numeric byte result of `10 * sizeof(int)`?

---

### Scenario 7
Why is `malloc(5 * 4)` considered bad practice compared to `malloc(5 * sizeof(int))`?

---

### Scenario 8
If `x` is an integer variable (`int x = 10;`), is `sizeof(x)` valid C syntax? What does it return?

---

### Scenario 9
Write the exact `malloc` single argument expression required to allocate memory for a single `float` variable.

---

### Scenario 10
In standard C, is `sizeof()` evaluated at compile-time or run-time? (Hint: Except for Variable Length Arrays (VLAs), it is evaluated during compilation).
