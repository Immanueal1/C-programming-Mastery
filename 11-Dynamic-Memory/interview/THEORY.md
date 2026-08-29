# 📖 Top 10 Technical Interview Theory Questions

> Core theoretical revision questions on Static vs. Dynamic Memory, Why DMA, `<stdlib.h>` Header, `sizeof()` Operator Portability, Void Pointers (`void *`), Typecasting Rules, `malloc()` vs `calloc()`, `NULL` Allocation Failures, `realloc()` Data Preservation, and Memory Leak Prevention.

---

### Question 1
**Static vs Dynamic: Explain the fundamental difference between memory allocated at compile-time and memory allocated at run-time.**

---

### Question 2
**Why DMA? Give a real-world software scenario where relying purely on fixed-size arrays would cause severe problems.**

---

### Question 3
**The `<stdlib.h>` Header: Name the four core DMA functions provided by this header and briefly state their purposes.**

---

### Question 4
**The `sizeof` Operator: Why is it considered a fatal practice to write `malloc(20)` when requesting space for 5 integers, instead of `malloc(5 * sizeof(int))`?**

---

### Question 5
**Void Pointers: What is a generic pointer (`void *`)? Why do `malloc` and `calloc` return it instead of a specific type like `int *`?**

---

### Question 6
**Typecasting: Explain the purpose of `(float *)` in the statement `ptr = (float *) malloc(...);`.**

---

### Question 7
**`malloc` vs `calloc`: Both allocate memory. Explain the two major differences in their syntax and internal behavior.**

---

### Question 8
**Allocation Failure: Why can memory allocation fail, and what specific value is returned when it does? Why must programmers check for this?**

---

### Question 9
**Data Preservation: When `realloc()` shrinks a memory block from 10 elements down to 4 elements, what happens to the data in all 10 elements?**

---

### Question 10
**Memory Leaks: Define a memory leak. Who is responsible for preventing it in C, and what function is used to do so?**
