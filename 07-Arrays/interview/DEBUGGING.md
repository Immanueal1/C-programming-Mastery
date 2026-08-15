# 🐞 Top 10 Debugging Challenges

> Identify the syntax errors, logical bugs, type mismatches, or undefined behaviors in the following C code snippets.

---

### Challenge 1
```c
int n = 5; 
int arr[n] = {1, 2, 3, 4, 5};
```
*(Problem: Variable Length Array (VLA) initialization error — C does not permit explicit initializer lists `{...}` for VLAs).*

---

### Challenge 2
```c
int arr[3]; 
arr = {1, 2, 3};
```
*(Problem: Bulk assignment syntax error — array initializer lists `{...}` can only be used during declaration, not in subsequent assignment statements).*

---

### Challenge 3
```c
int arr[3] = {10, 20, 30}; 
for (int i = 1; i <= 3; i++) {
    printf("%d ", arr[i]);
}
```
*(Problem: Off-by-one out-of-bounds error — valid indexes are `0`, `1`, `2`. `i = 1` skips `arr[0]`, and `i = 3` accesses out-of-bounds memory).*

---

### Challenge 4
```c
void printArr(int arr[]) { 
    int n = sizeof(arr) / sizeof(int); 
    // ...
}
```
*(Problem: Array decay parameter trap — `sizeof(arr)` inside a function evaluates to the size of a pointer (`sizeof(int *)`), NOT the original array).*

---

### Challenge 5
```c
int mat[][]; 
mat[0][0] = 1;
```
*(Problem: Missing array dimensions — 2D array declarations require at least the column dimension e.g., `int mat[2][3]` or `int mat[][3] = {...}`).*

---

### Challenge 6
```c
void processMat(int mat[][], int rows) { 
    // ...
}
```
*(Problem: Missing 2D function parameter column dimension — function parameters receiving 2D arrays must specify column size e.g., `int mat[][3]`).*

---

### Challenge 7
```c
int arr[3] = {1, 2, 3}; 
int *p = &arr;
```
*(Problem: Pointer type mismatch — `&arr` has type `int (*)[3]` (pointer to array of 3 ints), which cannot be assigned to `int *p` without explicit casting).*

---

### Challenge 8
```c
int arr[5]; 
arr++;
```
*(Problem: Invalid array lvalue mutation — an array name `arr` is an unmodifiable non-lvalue expression decay; you cannot increment `arr++`).*

---

### Challenge 9
```c
int a[3] = {1, 2}; 
int b[3]; 
b = a;
```
*(Problem: Array copy assignment error — arrays cannot be copied directly using the `=` assignment operator in C; use element loops or `memcpy()`).*

---

### Challenge 10
```c
int *p1, *p2; 
int sum = p1 + p2;
```
*(Problem: Illegal pointer addition — adding two pointer addresses `p1 + p2` is forbidden in C (only pointer subtraction `p2 - p1` is valid)).*
