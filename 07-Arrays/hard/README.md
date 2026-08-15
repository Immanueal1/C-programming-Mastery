# 🔴 Chapter 7: Hard Practice Problems

> Advanced C programming challenges focusing on 2D row-major address calculation formulas, pointer decay vs `&arr` scaling differences (`arr + 1` vs `&arr + 1`), in-place circular array shifts (rotate left), in-place matrix transposition, flattening 2D matrices using 1D pointers, preprocessor `ARRAY_SIZE` macros, off-by-one array bound debug traces, row and column matrix accumulators, sub-array pointer extractions (`arr + offset`), and matrix symmetry verification (`mat[i][j] == mat[j][i]`).

---

## 📌 Short Description

This directory contains 10 advanced practice problems designed to master 2D row-major memory mapping calculations, pointer scaling differences between array decay pointers and whole array pointers (`arr + 1` vs `&arr + 1`), in-place array element rotation, upper-triangle in-place matrix transpose algorithms, 1D pointer matrix flattening, custom preprocessor macros, off-by-one memory corruption tracing, sub-array extraction, and matrix symmetry verification.

---

## 📚 Topics Covered

- [x] Mathematical 2D Row-Major Address Calculations ($\text{Base} + (\text{row} \cdot \text{cols} + \text{col}) \cdot \text{sizeof(Type)}$)
- [x] Array Name Decay (`arr`) vs. Whole Array Pointer (`&arr`) Scaling Differences
- [x] In-Place Circular Array Left-Shift Rotations
- [x] In-Place Matrix Transposition via Upper-Triangle Swapping (`j = i + 1`)
- [x] Flattening & Traversing 2D Matrices using Single 1D Pointers (`int *ptr = &mat[0][0]`)
- [x] Preprocessor `ARRAY_SIZE(arr)` Macro Implementation
- [x] Off-By-One Array Bound Debug Tracing (`arr[n]` Corruption)
- [x] Independent Row Sums and Column Sums in 2D Matrices
- [x] Sub-Array Pointer Extraction (`arr + offset`)
- [x] Matrix Symmetry Verification ($A = A^T$)

---

## 🎯 Learning Objectives

- Calculate physical memory addresses for 2D elements using the Row-Major formula: $\text{Base} + (\text{row} \times \text{cols} + \text{col}) \times \text{sizeof(Type)}$.
- Distinguish between pointer types for array names (`arr` of type `int *`) and array addresses (`&arr` of type `int (*)[n]`).
- Rotate 1D array elements circularly in-place using temporary variables.
- Transpose square 2D matrices in-place using upper-triangle upper-bound loops (`j = i + 1`).
- Flatten and traverse 2D matrices sequentially using single 1D pointers (`int *ptr = &mat[0][0]`).
- Implement preprocessor macros for calculating array size (`ARRAY_SIZE`).
- Debug off-by-one array index memory corruption errors (`arr[n]`).
- Compute individual row sums and column sums in 2D matrices using accumulators.
- Pass specific sub-array starting addresses (`arr + offset`) to functions.
- Verify matrix symmetry properties ($A = A^T$) using nested matrix comparisons.

---

## 📈 Progress Checklist

- [ ] 21 Row-Major Address Calculation
- [ ] 22 Array Pointer Decay vs &arr
- [ ] 23 Circular Array Shift (Rotate Left)
- [ ] 24 Matrix Transpose
- [ ] 25 Flattening a 2D Array with a 1D Pointer
- [ ] 26 Custom sizeof Array Macro
- [ ] 27 The Off-By-One Debug Trace
- [ ] 28 Row and Column Sums
- [ ] 29 Sub-Array Pointer Extraction
- [ ] 30 Checking Matrix Symmetry

---

## 📁 Folder Contents

| File | Title | Concepts Used |
| :--- | :--- | :--- |
| [`21_row_major_address_calculation.c`](./21_row_major_address_calculation.c) | Row-Major Address Calculation | 2D Array Memory Mapping |
| [`22_array_pointer_decay_vs_ampersand_arr.c`](./22_array_pointer_decay_vs_ampersand_arr.c) | Array Pointer Decay vs &arr | `arr` vs `&arr`, Pointer Types |
| [`23_circular_array_shift.c`](./23_circular_array_shift.c) | Circular Array Shift (Rotate Left) | Array Manipulation, Temporary Variables |
| [`24_matrix_transpose.c`](./24_matrix_transpose.c) | Matrix Transpose | 2D Array Swapping, Nested Loops |
| [`25_flattening_a_2d_array_with_a_1d_pointer.c`](./25_flattening_a_2d_array_with_a_1d_pointer.c) | Flattening a 2D Array with a 1D Pointer | Row-Major Memory, Pointers |
| [`26_custom_sizeof_array_macro.c`](./26_custom_sizeof_array_macro.c) | Custom sizeof Array Macro | Preprocessor, `sizeof()` logic |
| [`27_the_off_by_one_debug_trace.c`](./27_the_off_by_one_debug_trace.c) | The Off-By-One Debug Trace | Array Bounds, Undefined Behavior |
| [`28_row_and_column_sums.c`](./28_row_and_column_sums.c) | Row and Column Sums | 2D Arrays, Accumulators |
| [`29_sub_array_pointer_extraction.c`](./29_sub_array_pointer_extraction.c) | Sub-Array Pointer Extraction | Pointers as Array Bases |
| [`30_checking_matrix_symmetry.c`](./30_checking_matrix_symmetry.c) | Checking Matrix Symmetry | Matrix Traversal, State Flags |

---

## 📝 Practice Questions

### Question 21: Row-Major Address Calculation

- **Difficulty**: Hard
- **Concepts Used**: 2D Array Memory Mapping
- **Problem Statement**:
  You have a 2D array `int mat[3][4]`. The base address (`&mat[0][0]`) is 1000. Assuming `sizeof(int)` is 4 bytes, calculate purely via mathematics the memory address of `mat[2][1]`. Write a C program to simulate and verify this calculation.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Theoretical Address Offset: 36 bytes
  Verified via C pointers.
  ```
- **Constraints**: Understand row-major layout.
- **Hints**:
  - *Hint 1*: Formula: `Base + (row * total_cols + col) * sizeof(type)`.
  - *Hint 2*: For `mat[2][1]`, we skip 2 full rows (2 * 4 = 8 elements) and 1 column (1 element) = 9 elements total.
  - *Hint 3*: 9 elements * 4 bytes = 36 bytes offset from base address.

---

### Question 22: Array Pointer Decay vs &arr

- **Difficulty**: Hard
- **Concepts Used**: `arr` vs `&arr`, Pointer Types
- **Problem Statement**:
  Given `int arr[5];`, both `arr` and `&arr` will print the exact same hexadecimal memory address. However, they represent different types. Print the addresses of `arr + 1` and `&arr + 1`. Observe the massive difference in pointer scaling.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  arr + 1: 0x1004 (Base + 4 bytes)
  &arr + 1: 0x1014 (Base + 20 bytes)
  ```
- **Constraints**: Understand how pointer scaling maps to types.
- **Hints**:
  - *Hint 1*: `arr` is a pointer to the first integer. `arr + 1` skips 1 integer (4 bytes).
  - *Hint 2*: `&arr` is a pointer to the entire array of 5 integers.
  - *Hint 3*: `&arr + 1` skips the entire array (5 * 4 = 20 bytes).

---

### Question 23: Circular Array Shift (Rotate Left)

- **Difficulty**: Hard
- **Concepts Used**: Array Manipulation, Temporary Variables
- **Problem Statement**:
  Write a program to left-rotate an array of size 5 by one position. The first element moves to the end, and all other elements shift left by one.
- **Sample Input**:
  ```text
  10 20 30 40 50
  ```
- **Sample Output**:
  ```text
  20 30 40 50 10
  ```
- **Constraints**: Modify the array in-place.
- **Hints**:
  - *Hint 1*: Store `arr[0]` in a temporary variable.
  - *Hint 2*: Run a loop from `i = 0` to `n - 2`, setting `arr[i] = arr[i+1]`.
  - *Hint 3*: Place the temporary variable at `arr[n-1]`.

---

### Question 24: Matrix Transpose

- **Difficulty**: Hard
- **Concepts Used**: 2D Array Swapping, Nested Loops
- **Problem Statement**:
  Given a 3x3 square matrix, write a function to transpose it in-place. (Transpose means rows become columns and columns become rows).
- **Sample Input**:
  ```text
  1 2 3
  4 5 6
  7 8 9
  ```
- **Sample Output**:
  ```text
  1 4 7
  2 5 8
  3 6 9
  ```
- **Constraints**: Modify the existing matrix. Do not create a second matrix.
- **Hints**:
  - *Hint 1*: You only need to loop through the upper triangle of the matrix to avoid double-swapping.
  - *Hint 2*: Outer loop `i` from 0 to 2. Inner loop `j` from `i+1` to 2.
  - *Hint 3*: Swap `mat[i][j]` with `mat[j][i]`.

---

### Question 25: Flattening a 2D Array with a 1D Pointer

- **Difficulty**: Hard
- **Concepts Used**: Row-Major Memory, Pointers
- **Problem Statement**:
  Declare a 2D array `int mat[2][3] = {{1,2,3}, {4,5,6}};`. Create a standard 1D integer pointer `int *ptr = &mat[0][0];`. Traverse the entire 2D matrix using a single `for` loop from 0 to 5, printing the values via `ptr[i]`.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  1 2 3 4 5 6
  ```
- **Constraints**: Understand that 2D arrays are an illusion in C; memory is fundamentally 1D.
- **Hints**:
  - *Hint 1*: Memory is allocated contiguously for 2D arrays.
  - *Hint 2*: A 1D pointer pointing to the base address can walk linearly through all rows.
  - *Hint 3*: Just loop 6 times: `printf("%d ", *(ptr + i));`

---

### Question 26: Custom sizeof Array Macro

- **Difficulty**: Hard
- **Concepts Used**: Preprocessor, `sizeof()` logic
- **Problem Statement**:
  Instead of writing `sizeof(arr)/sizeof(arr[0])` every time, write a preprocessor macro `#define ARRAY_SIZE(arr) ...` that automatically calculates the length of a passed array. Use it in `main()` to print the length.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Array length is: 7
  ```
- **Constraints**: Understand macro substitution.
- **Hints**:
  - *Hint 1*: Macros literally replace text before compilation.
  - *Hint 2*: `#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))`
  - *Hint 3*: Warning: This still won't work inside functions where the array decays to a pointer!

---

### Question 27: The Off-By-One Debug Trace

- **Difficulty**: Hard
- **Concepts Used**: Array Bounds, Undefined Behavior
- **Problem Statement**:
  Consider: `int arr[5] = {1,2,3,4,5}; for(int i=1; i<=5; i++) { arr[i] = 0; }`. Without running it, trace exactly what happens to the array and system memory.
- **Sample Input**: *(No input)*
- **Sample Output**: *(Explanation)*
- **Constraints**: Focus on the logical failure.
- **Hints**:
  - *Hint 1*: `i` starts at 1, so `arr[0]` (the value 1) is never touched.
  - *Hint 2*: The loop goes up to `i=5`. `arr[5]` does not exist!
  - *Hint 3*: Writing 0 to `arr[5]` corrupts adjacent memory, potentially altering another variable or causing a segfault.

---

### Question 28: Row and Column Sums

- **Difficulty**: Hard
- **Concepts Used**: 2D Arrays, Accumulators
- **Problem Statement**:
  Given a 3x3 matrix, calculate and print the sum of each individual row and each individual column.
- **Sample Input**:
  ```text
  1 2 3
  1 2 3
  1 2 3
  ```
- **Sample Output**:
  ```text
  Row 0 Sum: 6
  Row 1 Sum: 6
  Row 2 Sum: 6
  Col 0 Sum: 3
  Col 1 Sum: 6
  Col 2 Sum: 9
  ```
- **Constraints**: Use nested loops correctly.
- **Hints**:
  - *Hint 1*: For Row Sum, keep `i` (row) constant, loop `j` (col), and accumulate.
  - *Hint 2*: For Col Sum, keep `j` (col) constant, loop `i` (row), and accumulate.
  - *Hint 3*: Reset the sum variable to 0 before starting the inner loop.

---

### Question 29: Sub-Array Pointer Extraction

- **Difficulty**: Hard
- **Concepts Used**: Pointers as Array Bases
- **Problem Statement**:
  Given `int arr[10] = {0,1,2,3,4,5,6,7,8,9};`. Write a function `printSubArray(int *sub_arr, int n)`. Call it from `main()` such that it only prints the elements 4, 5, 6, 7.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  4 5 6 7
  ```
- **Constraints**: Do not create a new array. Pass a specific address from the original array.
- **Hints**:
  - *Hint 1*: The function expects a pointer. You don't have to pass the start of the array.
  - *Hint 2*: You can pass the address of index 4: `&arr[4]` or `arr + 4`.
  - *Hint 3*: Length `n` will be 4.

---

### Question 30: Checking Matrix Symmetry

- **Difficulty**: Hard
- **Concepts Used**: Matrix Traversal, State Flags
- **Problem Statement**:
  A matrix is symmetric if it is identical to its transpose (`mat[i][j] == mat[j][i]` for all elements). Write a program that checks a 3x3 matrix and prints "Symmetric" or "Asymmetric".
- **Sample Input**:
  ```text
  1 2 3
  2 4 5
  3 5 6
  ```
- **Sample Output**:
  ```text
  Symmetric
  ```
- **Constraints**: Use an integer flag.
- **Hints**:
  - *Hint 1*: Assume `isSymmetric = 1`.
  - *Hint 2*: Loop through the matrix. If `mat[i][j] != mat[j][i]`, set flag to 0 and break.
  - *Hint 3*: Print based on the flag's final state.

---

## 🔗 Navigation Links

- 📋 **[View Complete Practice Workbook (`PRACTICE.md`)](./PRACTICE.md)**
- 🟢 **[Return to Easy Practice (`../easy/`)](../easy/)**
- 🟡 **[Return to Medium Practice (`../medium/`)](../medium/)**
- 🏠 **[Return to Chapter 7 Overview (`../README.md`)](../README.md)**
