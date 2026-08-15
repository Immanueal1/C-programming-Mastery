# 🧠 Top 10 Memory & Address Prediction Questions

> Calculate and predict physical memory addresses, pointer offsets, pointer differences, and 2D row-major memory mappings based on base addresses and data type sizes.

---

### Problem 1
Base address of `int arr[5]` is `2000`. `sizeof(int)` is 4 bytes. What is the memory address of `arr[3]`?

---

### Problem 2
Base address of `char arr[10]` is `5000`. What is the memory address of `arr[8]`?

---

### Problem 3
Base address of `double arr[4]` is `1000`. `sizeof(double)` is 8 bytes. `ptr = arr;`. What is the address of `ptr + 2`?

---

### Problem 4
Given `int arr[5];`, if `&arr[1]` is `4004`, what is the memory address of `&arr[4]`?

---

### Problem 5
Given `int arr[10];` with base address `3000`. `ptr1 = &arr[2]` and `ptr2 = &arr[7]`. What is the value of `ptr2 - ptr1`?

---

### Problem 6
Base address of `int mat[3][4]` is `1000`. `sizeof(int)` is 4 bytes. What is the exact memory address of `mat[0][2]`?

---

### Problem 7
Using `int mat[3][4]` with base address `1000`, what is the exact memory address of `mat[1][0]`?

---

### Problem 8
Using `int mat[3][4]` with base address `1000`, what is the exact memory address of `mat[2][3]`?

---

### Problem 9
Given `int arr[5];` with base address `2000`. What address does `(&arr + 1)` point to?

---

### Problem 10
Given `int mat[2][2];` with base address `8000` and `sizeof(int)` $= 4$. If `ptr = &mat[0][0];`, what address does `ptr + 3` point to, and which matrix element is located there?
