# 📖 Top 10 Technical Interview Theory Questions

> Core theoretical revision questions on C String Mechanics, Null Termination `'\0'`, Character vs. String Syntax, Input Buffer Traps, Pointer vs. Array Reassignability, `<string.h>` Library Internals, and Password Salting.

---

### Question 1
**What is a C String? Define it in terms of memory and character arrays.**

---

### Question 2
**Why is the Null Character (`'\0'`) absolutely necessary in C strings? What would happen if it were omitted?**

---

### Question 3
**Character vs. String: What is the fundamental difference in syntax and memory between `'A'` and `"A"`?**

---

### Question 4
**String Initialization: Explain the difference between `char str[] = {'a', 'b', '\0'};` and `char str[] = "ab";`.**

---

### Question 5
**The Space Trap: Explain exactly why `scanf("%s", str)` fails to read `"New York"`.**

---

### Question 6
**Input Functions: Why is the `gets()` function considered unsafe and dangerous? What is the modern safe alternative?**

---

### Question 7
**Pointers vs. Arrays: Why can you reassign a string pointer (`char *str = "New";`) but you cannot reassign an array (`char str[] = "New";`)?**

---

### Question 8
**`strlen` vs. `sizeof`: Explain the exact difference between `strlen(str)` and `sizeof(str)` for `char str[50] = "Code";`.**

---

### Question 9
**String Library: What are the arguments required for `strcpy()` and what does it do?**

---

### Question 10
**Password Salting: Conceptually explain what password salting is and how `strcpy` and `strcat` can be used to implement it.**
