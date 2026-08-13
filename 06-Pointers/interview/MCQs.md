# 📝 Top 10 Multiple Choice Questions (MCQs)

> Test your understanding of Chapter 6 concepts with these technical multiple-choice questions.

---

### Question 1
What does the `&` operator do?
- A) Dereferences a pointer
- B) Gets the memory address of a variable
- C) Declares a pointer
- D) Multiplies values

---

### Question 2
What is the correct way to declare a pointer to an integer?
- A) `int &p;`
- B) `pointer p;`
- C) `int *p;`
- D) `*int p;`

---

### Question 3
If `int *p = &x;`, how do you change the value of `x` to 20 using `p`?
- A) `p = 20;`
- B) `*p = 20;`
- C) `&p = 20;`
- D) `p* = 20;`

---

### Question 4
Why does passing by value fail to swap two variables across functions?
- A) Pointers are too slow in C.
- B) The function modifies local copies on its stack frame, not the original variables.
- C) It triggers a compilation syntax error.
- D) Variables in `main()` are read-only locked.

---

### Question 5
What is `**` used for in pointer declarations?
- A) Squaring an integer number
- B) Declaring a pointer to a pointer (double pointer)
- C) Multiplying two pointer addresses
- D) Dereferencing a standard single pointer

---

### Question 6
Which format specifier is standard in C for printing memory pointer addresses?
- A) `%d`
- B) `%f`
- C) `%x`
- D) `%p`

---

### Question 7
If `int x = 5;`, what does `*(&x)` evaluate to?
- A) The physical memory address of `x`
- B) `5`
- C) Compilation error
- D) `0`

---

### Question 8
How can a C function effectively output multiple calculated values to the caller?
- A) By specifying multiple `return` keywords in a single statement
- B) By using dynamic global labels
- C) By using pointer parameters (Call by Reference)
- D) It is impossible in C

---

### Question 9
What happens if you dereference an uninitialized (wild) pointer variable?
- A) It automatically returns `0`.
- B) It automatically redirects the pointer to point to `main()`.
- C) It causes undefined behavior or a fatal Segmentation Fault crash.
- D) The compiler automatically fixes the pointer target.

---

### Question 10
If `p` points to `a`, and `pp` points to `p`, how do you access the original value of `a` using `pp`?
- A) `p`
- B) `*p`
- C) `*pp`
- D) `**pp`
