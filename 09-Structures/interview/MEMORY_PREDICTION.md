# 🧠 Top 10 Memory & Structure-Layout Prediction Questions

> Predict the memory state, byte sizes, member offsets, array footprints, pointer arithmetic scaling, and RAM assignment operations. Assume `int` = 4 bytes, `float` = 4 bytes, and `char` = 1 byte. Ignore compiler padding unless specified.

---

### Problem 1
Given `struct S1 { int a; char b[10]; };`. What is the conceptual raw memory size of `struct S1` in bytes?

---

### Problem 2
Given `struct S2 { float f1; float f2; float f3; };`. What is the conceptual raw memory size of `struct S2` in bytes?

---

### Problem 3
Given `struct S3 { char name[50]; int roll; };`. If the base memory address (`&s`) of a variable of this type is `1000`, what is the conceptual starting memory address of member `s.roll`?

---

### Problem 4
Given `struct S4 { int x; int y; };`. If you declare `struct S4 arr[5];`, what is the total memory footprint of array `arr` in bytes?

---

### Problem 5
Given `struct S5 { char c; };`. If a variable of this type is initialized with `{0}`, what exact numerical byte value occupies its 1 byte of memory?

---

### Problem 6
Given `struct S6 { int a; int b; };`. If you initialize `struct S6 s = {10};`, what value occupies the memory reserved for member `s.b`?

---

### Problem 7
Using `struct S3` (from Problem 3, size 54 bytes), if you declare `struct S3 arr[2];` at base address `1000`, what is the starting base address of element `arr[1]`?

---

### Problem 8
If a structure pointer `struct S4 *ptr` points to RAM address `2000` (where `sizeof(struct S4)` is 8 bytes), and you execute `ptr++`, what is the new RAM address stored inside `ptr`?

---

### Problem 9
Does a structure blueprint definition (e.g., `struct blueprint { int x; };`) consume any physical RAM memory before a structure variable is declared?

---

### Problem 10
If `s1` and `s2` are two variables of the exact same structure type, what operation takes place in physical RAM when executing `s1 = s2;`?
