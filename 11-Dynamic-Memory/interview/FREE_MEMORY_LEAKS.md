# 🧹 Top 10 `free()` & Memory Leak Questions

> Master deallocation mechanisms, memory leak causes and consequences, dangling pointer risks, pointer neutralization (`ptr = NULL`), and garbage collection philosophy.

---

### Scenario 1
Which standard C library function is used to return dynamically allocated heap memory back to the operating system?

---

### Scenario 2
If a server application runs continuously in a loop for months and forgets to call `free()` on allocated memory inside the loop, what happens to the host operating system?

---

### Scenario 3
Define a **Memory Leak** in your own words.

---

### Scenario 4
If you declare `int *p1` and `int *p2` pointing to two separate `malloc()` heap allocations, how many total calls to `free()` are required to prevent memory leaks?

---

### Scenario 5
```c
p = (int *) malloc(10 * sizeof(int));
p = (int *) malloc(20 * sizeof(int));
free(p);
```
*Is there a memory leak in this code sequence? Explain which allocation was leaked.*

---

### Scenario 6
Why doesn't C automatically reclaim un-freed dynamic heap memory during runtime execution like Python, Java, or C#?

---

### Scenario 7
When a C process terminates execution, what happens to any memory leaked by the program during runtime?

---

### Scenario 8
What is a **Dangling Pointer** in C programming?

---

### Scenario 9
How do you safely neutralize a dangling pointer immediately after executing `free(ptr);`?

---

### Scenario 10
Does executing `free(ptr);` delete or destroy the pointer variable `ptr` itself from stack memory?
