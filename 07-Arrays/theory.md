# 📖 Chapter 7: Arrays — Theoretical Reference

> Concise theoretical reference manual on 1D and 2D arrays, contiguous memory allocation, zero-based indexing, out-of-bounds safety rules, pointer arithmetic and array decay, passing arrays to functions, and row-major 2D memory mapping in C.

---

## 1. Array Fundamentals & Core Concepts

- **What Is an Array?**: A fixed-size collection of elements of the **same data type** stored in **contiguous (adjacent) memory locations**.
- **Why Arrays Are Needed**: Replaces multiple individual variables (`m1, m2, m3`) with a single sequential variable (`m[3]`), allowing efficient traversal and constant-time $O(1)$ element access via numerical indexes.

---

## 2. 1D Array Declaration, Initialization & Indexing

- **Declaration Syntax**: `data_type array_name[size];` (e.g., `int arr[5];`).
- **Initialization Forms**:
  - *Explicit-Size*: `int arr[3] = {10, 20, 30};`
  - *Automatic Size Deduction*: `int arr[] = {10, 20, 30};` (Compiler infers size $= 3$).
  - *Partial Initialization*: `int arr[5] = {10, 20};` (Remaining uninitialized elements automatically set to `0`).
- **Zero-Based Indexing**: Indexes run strictly from `0` to `n - 1` for an array of $n$ elements.
- **Element Access & Mutation**: Read via `arr[i]`; modify via `arr[i] = value;`.
- **Traversal**: Executed using `for` loops running from index `0` up to `n - 1`.

---

## 3. Array Bounds & Memory Safety 🚨

- **Valid Index Range**: `0` to `n - 1`.
- **Out-of-Bounds Access**: C does **NOT** perform automatic bounds checking. Accessing `arr[n]` or `arr[-1]` reads/writes adjacent unallocated memory.
- **Consequences**: Triggers **undefined behavior**, silent data corruption, garbage values, off-by-one errors, or instant **Segmentation Fault** crashes.

---

## 4. Contiguous Memory & `sizeof()` Calculations

- **Contiguous Allocation**: Array elements sit side-by-side in physical RAM without gaps.
- **Array Memory Formula**:
  $$\text{Total Memory (Bytes)} = \text{Number of Elements} \times \text{Size of Data Type}$$
- **Dynamic Element Count**:
  $$\text{Number of Elements} = \frac{\text{sizeof(arr)}}{\text{sizeof(arr[0])}}$$

---

## 5. Array & Pointer Relationship (Array Decay & Arithmetic)

- **Array-to-Pointer Decay**: In expressions, the array name `arr` decays into a pointer to its first element (`arr == &arr[0]`).
- **Pointer Binding**: `int *ptr = arr;` binds `ptr` to `&arr[0]`.
- **Pointer Arithmetic & Scaling**: `ptr + 1` moves forward by `sizeof(*ptr)` bytes (e.g., $+4$ bytes for `int`, $+1$ byte for `char`), not 1 raw byte.
- **Pointer Subtraction (Distance)**: `ptr2 - ptr1` returns the number of array elements separating the two addresses.
- **Indexing Equivalence**:
  $$\text{arr}[i] \iff *(\text{arr} + i)$$

---

## 6. Arrays and Functions

- **Parameter Syntax**: `void f(int arr[], int n)` is equivalent to `void f(int *arr, int n)`.
- **Array Decay in Functions**: Arrays decay to pointers when passed to functions. Inside a function, `sizeof(arr)` yields pointer size (4 or 8 bytes), NOT array size.
- **Mandatory Size Passing**: Always pass the array size `n` as a separate parameter (`array + size` pattern).
- **Implicit Call-by-Reference**: Modifying array elements inside a function alters the original caller array in `main()`.

---

## 7. Two-Dimensional Arrays (2D Matrices)

- **Grid Concept**: Tabular representation consisting of `rows` and `columns`.
- **2D Declaration**: `data_type array_name[rows][columns];` (e.g., `int mat[3][4];`). Total elements $= \text{rows} \times \text{columns}$.
- **2D Initialization**: `int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};`.
- **2D Access & Mutation**: `mat[row][col] = value;`.
- **2D Traversal**: Utilizes nested `for` loops (outer loop for `rows`, inner loop for `columns`).

---

## 8. 2D Memory Layout & Row-Major Order

- **Row-Major Storage**: 2D matrices are physically stored linearly in RAM row-by-row.
- **Address Calculation Formula**:
  $$\text{Address}(\text{mat}[\text{row}][\text{col}]) = \text{BaseAddress} + (\text{row} \times \text{Columns} + \text{col}) \times \text{sizeof(Type)}$$
- **Column Requirement**: The column dimension is necessary for computing linear row offsets.

---

## 9. 2D Arrays and Functions

- **2D Parameter Rule**: Functions receiving 2D arrays **must specify the column size**:
  `void f(int mat[][3], int rows)`
- **Reasoning**: The compiler requires the column count to compute linear row offsets. The first dimension (`rows`) is optional inside `[]`.

---

## 10. Important Rules & Common Traps 🚨

- 🚨 **Trap 1**: Forgetting zero-based indexing (`arr[n]` is out of bounds).
- 🚨 **Trap 2**: Expecting `sizeof(arr)` to work inside a function parameter.
- 🚨 **Trap 3**: Attempting bulk array assignment after declaration (`arr = {1, 2, 3};` is invalid).
- 🚨 **Trap 4**: Omitting column dimensions in 2D array function parameters (`mat[][]` is invalid).
- 🚨 **Trap 5**: Confusing `arr + 1` (+4 bytes for `int`) with `&arr + 1` (+20 bytes for `int[5]`).
