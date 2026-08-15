# 🟡 Chapter 7: Medium Practice Problems

> Intermediate C programming challenges focusing on in-place array reversing, linear searching with flags, pointer arithmetic traversal (`*(arr + i)`), array decay `sizeof` traps in functions, array parameter mutations, pointer distance subtraction (`ptr2 - ptr1`), 2D matrix printing in grid format, 2D matrix function parameter column size rules, frequency counting, and out-of-bounds safety tests.

---

## 📌 Short Description

This directory contains 10 intermediate practice problems designed to master in-place array reversing, linear searching algorithms, pointer arithmetic traversal (`*(arr + i)`), array decay function parameter traps, pointer subtraction for element distance, 2D matrix grid printing, 2D column dimension requirements, and out-of-bounds safety risk analysis.

---

## 📚 Topics Covered

- [x] In-Place Array Reversing without Secondary Arrays
- [x] Linear Search with Index Flags & Early Loop Breaks
- [x] Pointer Arithmetic Traversal (`*(arr + i)` without `[]`)
- [x] Array Decay Function Parameter Traps & `sizeof(arr)` Behavior
- [x] Implicit Call-by-Reference Array Mutation inside Functions
- [x] Pointer Distance Calculation via Pointer Subtraction (`ptr2 - ptr1`)
- [x] 2D Matrix Grid Input & Formatted Console Output
- [x] 2D Array Function Parameters (`void f(int mat[][3], int rows)`)
- [x] Single-Pass Element Frequency Counting
- [x] Out-of-Bounds Memory Reading & Undefined Behavior Analysis

---

## 🎯 Learning Objectives

- Reverse 1D arrays in-place using temporary variable swapping without secondary arrays.
- Implement Linear Search using loop breaks and state flags.
- Traverse array elements using pointer arithmetic (`*(arr + i)`).
- Understand why array parameters decay to pointers inside functions (`int arr[]` ➜ `int *arr`).
- Modify caller arrays directly via function parameters.
- Calculate pointer distance between array elements (`ptr2 - ptr1`).
- Read and format 2D matrices using nested `for` loops.
- Pass 2D arrays to functions using explicit column dimensions (`int mat[][3]`).
- Analyze out-of-bounds memory reading behavior and undefined behavior safety risks.

---

## 📈 Progress Checklist

- [ ] 11 Reversing the Sequence
- [ ] 12 Linear Search for Target
- [ ] 13 Traversing via Pointer Syntax
- [ ] 14 Array Size Parameter Trap
- [ ] 15 The Mutator Function
- [ ] 16 Pointer Distance
- [ ] 17 Printing a Matrix
- [ ] 18 Matrix Summation Function
- [ ] 19 Frequency Counter
- [ ] 20 Out-of-Bounds Execution (Safety Test)

---

## 📁 Folder Contents

| File | Title | Concepts Used |
| :--- | :--- | :--- |
| [`11_reversing_the_sequence.c`](./11_reversing_the_sequence.c) | Reversing the Sequence | Array Traversal, Swapping |
| [`12_linear_search_for_target.c`](./12_linear_search_for_target.c) | Linear Search for Target | Searching, Traversal, State Flags |
| [`13_traversing_via_pointer_syntax.c`](./13_traversing_via_pointer_syntax.c) | Traversing via Pointer Syntax | `*(arr + i)`, Pointer Arithmetic |
| [`14_array_size_parameter_trap.c`](./14_array_size_parameter_trap.c) | Array Size Parameter Trap | Passing Arrays, Array Decay |
| [`15_the_mutator_function.c`](./15_the_mutator_function.c) | The Mutator Function | Array Mutation Inside Functions |
| [`16_pointer_distance.c`](./16_pointer_distance.c) | Pointer Distance | Pointer Subtraction |
| [`17_printing_a_matrix.c`](./17_printing_a_matrix.c) | Printing a Matrix | 2D Arrays, Nested Loops |
| [`18_matrix_summation_function.c`](./18_matrix_summation_function.c) | Matrix Summation Function | Passing 2D Arrays, Mandatory Column Dimension |
| [`19_frequency_counter.c`](./19_frequency_counter.c) | Frequency Counter | Array Traversal, Conditionals |
| [`20_out_of_bounds_execution.c`](./20_out_of_bounds_execution.c) | Out-of-Bounds Execution (Safety Test) | Array Bounds, Undefined Behavior |

---

## 📝 Practice Questions

### Question 11: Reversing the Sequence

- **Difficulty**: Medium
- **Concepts Used**: Array Traversal, Swapping
- **Problem Statement**:
  Write a program that reads 6 integers into an array, reverses the elements in-place (modifying the original array), and prints the reversed array.
- **Sample Input**:
  ```text
  1 2 3 4 5 6
  ```
- **Sample Output**:
  ```text
  Reversed: 6 5 4 3 2 1
  ```
- **Constraints**: Do not create a second array. You must swap elements within the existing array.
- **Hints**:
  - *Hint 1*: You need a loop that runs up to `n / 2`.
  - *Hint 2*: Swap `arr[i]` with `arr[n - i - 1]`.
  - *Hint 3*: Use a temporary variable to hold `arr[i]` during the swap.

---

### Question 12: Linear Search for Target

- **Difficulty**: Medium
- **Concepts Used**: Searching, Traversal, State Flags
- **Problem Statement**:
  Read an array of 5 integers. Then, ask the user for a "target" integer. Search the array. If the target exists, print its index. If not, print "Element not found".
- **Sample Input**:
  ```text
  10 20 30 40 50
  30
  ```
- **Sample Output**:
  ```text
  Target found at index 2
  ```
- **Constraints**: If the element appears multiple times, print the index of the first occurrence and stop searching.
- **Hints**:
  - *Hint 1*: Use an integer flag initialized to `-1` (meaning not found).
  - *Hint 2*: Loop through the array. If `arr[i] == target`, update the flag to `i` and break.
  - *Hint 3*: After the loop, if the flag is still `-1`, print "not found".

---

### Question 13: Traversing via Pointer Syntax

- **Difficulty**: Medium
- **Concepts Used**: `*(arr + i)`, Pointer Arithmetic
- **Problem Statement**:
  Create an array of 5 integers. Write a `for` loop to print all elements, but you are strictly forbidden from using the square bracket `[]` notation.
- **Sample Input**: *(Array: 5, 10, 15, 20, 25)*
- **Sample Output**:
  ```text
  5 10 15 20 25
  ```
- **Constraints**: Use pointer arithmetic on the array name.
- **Hints**:
  - *Hint 1*: The array name `arr` gives the base address.
  - *Hint 2*: Adding `i` to `arr` shifts the address by `i` elements.
  - *Hint 3*: `*(arr + i)` is mathematically identical to `arr[i]`.

---

### Question 14: Array Size Parameter Trap

- **Difficulty**: Medium
- **Concepts Used**: Passing Arrays, Array Decay
- **Problem Statement**:
  Write a function `void printArray(int arr[])`. Inside this function, attempt to calculate the number of elements using `sizeof(arr) / sizeof(arr[0])` and print it. Call this function from `main()` where the array is actually size 10. Observe why it fails to print 10.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Calculated size inside function: 2 (or 1, depending on 64-bit/32-bit pointers)
  ```
- **Constraints**: Understand why array size must be passed manually.
- **Hints**:
  - *Hint 1*: When an array is passed to a function, it "decays" into a pointer.
  - *Hint 2*: The function parameter `int arr[]` is secretly converted to `int *arr` by the compiler.
  - *Hint 3*: `sizeof(arr)` inside the function yields the size of a pointer (usually 8 bytes), not the original array. This is why you MUST pass `int n` separately.

---

### Question 15: The Mutator Function

- **Difficulty**: Medium
- **Concepts Used**: Array Mutation Inside Functions
- **Problem Statement**:
  Write a function `void doubleElements(int arr[], int n)`. Inside, multiply every element by 2. Call this from `main()`, then print the array in `main()` to prove that the original array was modified.
- **Sample Input**:
  ```text
  1 2 3 4
  ```
- **Sample Output**:
  ```text
  Main Array: 2 4 6 8
  ```
- **Constraints**: Arrays are implicitly passed by reference.
- **Hints**:
  - *Hint 1*: Loop from 0 to `n-1` inside the function.
  - *Hint 2*: `arr[i] = arr[i] * 2;`
  - *Hint 3*: Because `arr` is a pointer to the original memory, changing it in the function changes it everywhere.

---

### Question 16: Pointer Distance

- **Difficulty**: Medium
- **Concepts Used**: Pointer Subtraction
- **Problem Statement**:
  Given `int arr[10];`, point `ptr1` to `arr[2]` and `ptr2` to `arr[8]`. Subtract `ptr1` from `ptr2` and print the result. What does this number represent?
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Pointer difference: 6
  ```
- **Constraints**: Use `ptr2 - ptr1`.
- **Hints**:
  - *Hint 1*: `int *ptr1 = &arr[2]; int *ptr2 = &arr[8];`
  - *Hint 2*: Subtracting pointers in the same array does NOT yield bytes.
  - *Hint 3*: It yields the exact number of elements between the two addresses.

---

### Question 17: Printing a Matrix

- **Difficulty**: Medium
- **Concepts Used**: 2D Arrays, Nested Loops
- **Problem Statement**:
  Write a program that takes a 2x3 matrix as input from the user (row by row). Print the matrix back to the console in a clean grid format.
- **Sample Input**:
  ```text
  1 2 3
  4 5 6
  ```
- **Sample Output**:
  ```text
  1  2  3
  4  5  6
  ```
- **Constraints**: Use nested for loops.
- **Hints**:
  - *Hint 1*: The outer loop controls rows (`i = 0` to `1`).
  - *Hint 2*: The inner loop controls columns (`j = 0` to `2`).
  - *Hint 3*: Use `printf("%d ", mat[i][j]);` in the inner loop, and `printf("\n");` in the outer loop.

---

### Question 18: Matrix Summation Function

- **Difficulty**: Medium
- **Concepts Used**: Passing 2D Arrays, Mandatory Column Dimension
- **Problem Statement**:
  Write a function `int sumMatrix(int mat[][3], int rows)` that calculates and returns the total sum of all elements in a matrix. Call it from `main()` and print the sum.
- **Sample Input**:
  ```text
  1 1 1
  1 1 1
  ```
- **Sample Output**:
  ```text
  Matrix Sum: 6
  ```
- **Constraints**: You must explicitly declare the column size in the function parameter.
- **Hints**:
  - *Hint 1*: The parameter must look exactly like `int mat[][3]`.
  - *Hint 2*: Iterate through rows and columns to accumulate the sum.
  - *Hint 3*: The compiler requires the column size to calculate memory offsets properly.

---

### Question 19: Frequency Counter

- **Difficulty**: Medium
- **Concepts Used**: Array Traversal, Conditionals
- **Problem Statement**:
  Read an array of 10 integers. Count and print how many times the number 5 appears in the array.
- **Sample Input**:
  ```text
  1 5 2 5 5 8 9 5 1 0
  ```
- **Sample Output**:
  ```text
  Frequency of 5: 4
  ```
- **Constraints**: Use a single traversal.
- **Hints**:
  - *Hint 1*: Declare `int count = 0;`.
  - *Hint 2*: Loop through the array.
  - *Hint 3*: `if (arr[i] == 5) count++;`

---

### Question 20: Out-of-Bounds Execution (Safety Test)

- **Difficulty**: Medium
- **Concepts Used**: Array Bounds, Undefined Behavior
- **Problem Statement**:
  Declare `int arr[3] = {10, 20, 30};`. Deliberately write a loop that prints elements from `i = 0` to `i = 5`. Run the program and observe the garbage values printed for indices 3, 4, and 5.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  10
  20
  30
  -8495034 (Garbage)
  32767 (Garbage)
  0 (Garbage)
  ```
- **Constraints**: Observe why C is a "trust the programmer" language.
- **Hints**:
  - *Hint 1*: C does no automatic bounds checking.
  - *Hint 2*: Accessing memory outside the array reads whatever random binary data was left there by other programs.
  - *Hint 3*: If you attempt to write out of bounds (`arr[5] = 99;`), you might corrupt another variable or cause a Segmentation Fault.

---

## 🔗 Navigation Links

- 📋 **[View Complete Practice Workbook (`PRACTICE.md`)](./PRACTICE.md)**
- 🟢 **[Return to Easy Practice (`../easy/`)](../easy/)**
- 🔴 **[Proceed to Hard Practice (`../hard/`)](../hard/)**
- 🏠 **[Return to Chapter 7 Overview (`../README.md`)](../README.md)**
