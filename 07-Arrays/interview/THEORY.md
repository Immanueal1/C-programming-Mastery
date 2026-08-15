# 📖 Top 10 Technical Interview Theory Questions

> Core theoretical revision questions on Array Mechanics, Contiguous Memory, Array Decay, Pointer Scaling, Row-Major Layout, and C Memory Safety.

---

### Question 1
**What is an array in C? Explain the concept of contiguous memory allocation.**

---

### Question 2
**Why does array indexing start at 0 instead of 1? Explain using base addresses and pointer offset mathematics.**

---

### Question 3
**What is "Array Decay"? Why does `sizeof(arr)` work perfectly in `main()`, but return 8 (or 4) bytes when passed into a function?**

---

### Question 4
**Explain Pointer Scaling. If an `int` pointer is at address 1000, why does `ptr + 2` result in 1008 and not 1002?**

---

### Question 5
**Why does C refuse to perform bounds checking on arrays? What is the danger of writing to `arr[10]` in an array of size 5?**

---

### Question 6
**Are arrays passed by Value or passed by Reference in C? Technically speaking, how does passing an array name pass a pointer?**

---

### Question 7
**What is Row-Major Order? Explain how a 2D matrix like `mat[3][3]` physically sits inside the 1D RAM hardware.**

---

### Question 8
**Why must you specify the column dimension when passing a 2D array to a function (e.g., `void f(int mat[][3], int rows)`)?**

---

### Question 9
**Explain the difference between `arr` and `&arr`. Both point to the exact same memory address, so how do they behave differently when incremented by 1?**

---

### Question 10
**Explain the mathematical equivalence of `arr[i]` and `*(arr + i)`. How does the compiler resolve brackets?**
