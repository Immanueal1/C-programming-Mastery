# 🟢 Chapter 7: Easy Practice Problems

> Beginner-friendly C programming challenges focusing on 1D array declarations, explicit and partial initializations, zero-based indexing, element access and modification, sum and average accumulators, max element searches, memory calculations via `sizeof()`, array-to-pointer decay, pointer scaling (`ptr++`), and 2D grid index access.

---

## 📌 Short Description

This directory contains 10 fundamental practice problems designed to build core confidence with contiguous memory storage, 0-based index calculation (`0` to `n - 1`), array initialization zero-fill behavior, element mutation, mathematical array processing (Sum, Average, Max), `sizeof()` memory footprint analysis, array decay pointer assignment, pointer scaling based on data types, and 2D matrix element extraction.

---

## 📚 Topics Covered

- [x] Array Declaration, Explicit Initialization, and 0-Based Index Traversal
- [x] Partial Array Initialization & Automatic Zero-Fill Behavior
- [x] Accessing & Modifying Array Elements (`arr[index] = value;`)
- [x] Array Summation using Loop Accumulator Variables
- [x] Finding Array Average & Type Casting (`(float)sum / n`)
- [x] Discovering Maximum Element in an Array
- [x] Dynamic Array Size & Memory Calculation using `sizeof()`
- [x] Basic Array-to-Pointer Decay (`int *ptr = arr`)
- [x] Pointer Arithmetic Scaling Demonstration (`ptr++`)
- [x] 2D Array Grid Access (`mat[row][col]`)

---

## 🎯 Learning Objectives

- Construct and traverse 1D arrays using 0-based indexing (`0` to `n - 1`).
- Understand zero-fill behavior in partially initialized arrays.
- Access and modify elements directly via their index (`arr[index] = value`).
- Compute sums, averages, and maximum values across array elements.
- Determine array memory consumption using the `sizeof()` operator.
- Bind array names to pointers via decay (`int *ptr = arr`).
- Demonstrate pointer scaling mechanics (`ptr++` advancing by element data type size).
- Access 2D array matrix elements using `[row][col]` indexes.

---

## 📈 Progress Checklist

- [ ] 01 The Contiguous Collection
- [ ] 02 Partial Initialization Observer
- [ ] 03 The Modifier
- [ ] 04 Array Summation
- [ ] 05 Finding the Average
- [ ] 06 Discovering the Maximum
- [ ] 07 Memory Footprint Calculation
- [ ] 08 Basic Array-to-Pointer Binding
- [ ] 09 Pointer Scaling Demonstration
- [ ] 10 The 2D Grid Entry

---

## 📁 Folder Contents

| File | Title | Concepts Used |
| :--- | :--- | :--- |
| [`01_the_contiguous_collection.c`](./01_the_contiguous_collection.c) | The Contiguous Collection | Array Declaration, Initialization, Traversal |
| [`02_partial_initialization_observer.c`](./02_partial_initialization_observer.c) | Partial Initialization Observer | Partial Initialization, Zero-Fill Behavior |
| [`03_the_modifier.c`](./03_the_modifier.c) | The Modifier | Accessing and Modifying Elements |
| [`04_array_summation.c`](./04_array_summation.c) | Array Summation | Array Traversal, Accumulator Variable |
| [`05_finding_the_average.c`](./05_finding_the_average.c) | Finding the Average | Array Traversal, Type Casting |
| [`06_discovering_the_maximum.c`](./06_discovering_the_maximum.c) | Discovering the Maximum | Min/Max Algorithms, Traversal |
| [`07_memory_footprint_calculation.c`](./07_memory_footprint_calculation.c) | Memory Footprint Calculation | `sizeof()`, Array Memory |
| [`08_basic_array_to_pointer_binding.c`](./08_basic_array_to_pointer_binding.c) | Basic Array-to-Pointer Binding | `arr == &arr[0]`, Pointer Initialization |
| [`09_pointer_scaling_demonstration.c`](./09_pointer_scaling_demonstration.c) | Pointer Scaling Demonstration | Pointer Arithmetic, `ptr + 1` |
| [`10_the_2d_grid_entry.c`](./10_the_2d_grid_entry.c) | The 2D Grid Entry | 2D Array Declaration, Access `arr[row][col]` |

---

## 📝 Practice Questions

### Question 01: The Contiguous Collection

- **Difficulty**: Easy
- **Concepts Used**: Array Declaration, Initialization, Traversal
- **Problem Statement**:
  Declare an integer array of size 5 and initialize it explicitly with the values 10, 20, 30, 40, 50. Write a program to traverse the array using a `for` loop and print each element on a new line.
- **Sample Input**: *(No user input required)*
- **Sample Output**:
  ```text
  Element at index 0: 10
  Element at index 1: 20
  Element at index 2: 30
  Element at index 3: 40
  Element at index 4: 50
  ```
- **Constraints**: Use a 0-based index in your loop.
- **Hints**:
  - *Hint 1*: Declare the array as `int arr[5] = {10, 20, 30, 40, 50};`.
  - *Hint 2*: A for loop should run from `i = 0` to `i < 5`.
  - *Hint 3*: Print the value using `arr[i]`.

---

### Question 02: Partial Initialization Observer

- **Difficulty**: Easy
- **Concepts Used**: Partial Initialization, Zero-Fill Behavior
- **Problem Statement**:
  Declare an integer array of size 5 but only initialize the first two elements: `{15, 25}`. Traverse and print all 5 elements to observe how C handles the uninitialized positions.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  15 25 0 0 0
  ```
- **Constraints**: Do not explicitly write 0 in your initialization list.
- **Hints**:
  - *Hint 1*: Write `int arr[5] = {15, 25};`.
  - *Hint 2*: Loop from index 0 to 4.
  - *Hint 3*: C automatically initializes the remaining elements to zero in a partially initialized array.

---

### Question 03: The Modifier

- **Difficulty**: Easy
- **Concepts Used**: Accessing and Modifying Elements
- **Problem Statement**:
  Create an array of 4 integers: `int arr[] = {5, 10, 15, 20};`. Write a program that accesses the 3rd element, multiplies it by 10, and updates the array. Print the modified array.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  5 10 150 20
  ```
- **Constraints**: Remember that the "3rd element" is mathematically not index 3.
- **Hints**:
  - *Hint 1*: C uses zero-based indexing. The 1st element is `arr[0]`.
  - *Hint 2*: The 3rd element is located at index 2.
  - *Hint 3*: `arr[2] = arr[2] * 10;`

---

### Question 04: Array Summation

- **Difficulty**: Easy
- **Concepts Used**: Array Traversal, Accumulator Variable
- **Problem Statement**:
  Write a program that takes 5 integers as input from the user, stores them in an array, and calculates the total sum of all elements.
- **Sample Input**:
  ```text
  2 4 6 8 10
  ```
- **Sample Output**:
  ```text
  Total Sum: 30
  ```
- **Constraints**: Use a for loop for scanning and another for loop for summing.
- **Hints**:
  - *Hint 1*: Declare an `int sum = 0;` before the loop.
  - *Hint 2*: In the scan loop, use `&arr[i]`.
  - *Hint 3*: In the sum loop, use `sum += arr[i];`.

---

### Question 05: Finding the Average

- **Difficulty**: Easy
- **Concepts Used**: Array Traversal, Type Casting
- **Problem Statement**:
  Read 4 integers from the user into an array. Calculate and print the exact average of these numbers.
- **Sample Input**:
  ```text
  10 15 20 22
  ```
- **Sample Output**:
  ```text
  Average: 16.75
  ```
- **Constraints**: The output must be a floating-point number formatted to 2 decimal places.
- **Hints**:
  - *Hint 1*: Calculate the total sum of the array elements first.
  - *Hint 2*: Integer division truncates the decimal. You must cast the sum.
  - *Hint 3*: `float avg = (float)sum / 4;`

---

### Question 06: Discovering the Maximum

- **Difficulty**: Easy
- **Concepts Used**: Min/Max Algorithms, Traversal
- **Problem Statement**:
  Given an array of 5 integers entered by the user, find and print the largest element in the array.
- **Sample Input**:
  ```text
  12 45 7 89 23
  ```
- **Sample Output**:
  ```text
  Maximum Element: 89
  ```
- **Constraints**: Do not assume all numbers are positive.
- **Hints**:
  - *Hint 1*: Create a variable `int max`. What should its initial value be?
  - *Hint 2*: Initialize `max` to the first element of the array (`arr[0]`).
  - *Hint 3*: Loop through the array. If `arr[i] > max`, update `max = arr[i]`.

---

### Question 07: Memory Footprint Calculation

- **Difficulty**: Easy
- **Concepts Used**: `sizeof()`, Array Memory
- **Problem Statement**:
  Write a program that declares a double array of size 10. Use the `sizeof()` operator to calculate and print the total memory occupied by the array, and the memory occupied by a single element.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Total Array Size: 80 bytes
  Single Element Size: 8 bytes
  Number of Elements: 10
  ```
- **Constraints**: Assume a `double` is 8 bytes. Calculate the number of elements dynamically using `sizeof()`.
- **Hints**:
  - *Hint 1*: `sizeof(arr)` gives the total bytes of the entire array.
  - *Hint 2*: `sizeof(arr[0])` gives the bytes of a single element.
  - *Hint 3*: `Total Elements = sizeof(arr) / sizeof(arr[0])`.

---

### Question 08: Basic Array-to-Pointer Binding

- **Difficulty**: Easy
- **Concepts Used**: `arr == &arr[0]`, Pointer Initialization
- **Problem Statement**:
  Declare an integer array `int arr[3] = {5, 10, 15};`. Create an integer pointer `ptr` and assign the array to it. Print the value of the first element using the pointer.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Value using pointer: 5
  ```
- **Constraints**: Do not write `ptr = &arr[0];`. Use the array decay property.
- **Hints**:
  - *Hint 1*: The name of an array acts as a pointer to its first element.
  - *Hint 2*: `int *ptr = arr;` is perfectly valid.
  - *Hint 3*: Print the value using `*ptr`.

---

### Question 09: Pointer Scaling Demonstration

- **Difficulty**: Easy
- **Concepts Used**: Pointer Arithmetic, `ptr + 1`
- **Problem Statement**:
  Declare an array of integers. Create a pointer to the array. Print the address stored in the pointer, then increment the pointer (`ptr++`) and print the new address. Observe the difference.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Address 1: 0x7ffeeb44b100
  Address 2: 0x7ffeeb44b104
  ```
- **Constraints**: Use `%p` to print addresses. (Exact hex addresses will vary).
- **Hints**:
  - *Hint 1*: `int *ptr = arr; printf("%p\n", (void *)ptr);`
  - *Hint 2*: Do `ptr++;`
  - *Hint 3*: When a pointer is incremented, it moves forward by the `sizeof` its data type (4 bytes for an `int`).

---

### Question 10: The 2D Grid Entry

- **Difficulty**: Easy
- **Concepts Used**: 2D Array Declaration, Access `arr[row][col]`
- **Problem Statement**:
  Declare a 2D integer array (matrix) with 2 rows and 3 columns. Initialize it with values 1 to 6. Print the element located in the 2nd row, 3rd column.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Element at row 2, col 3: 6
  ```
- **Constraints**: Remember zero-based indexing applies to both rows and columns.
- **Hints**:
  - *Hint 1*: `int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};`
  - *Hint 2*: The 2nd row is index 1.
  - *Hint 3*: The 3rd column is index 2. Print `mat[1][2]`.

---

## 🔗 Navigation Links

- 📋 **[View Complete Practice Workbook (`PRACTICE.md`)](./PRACTICE.md)**
- 🟡 **[Proceed to Medium Practice (`../medium/`)](../medium/)**
- 🔴 **[Proceed to Hard Practice (`../hard/`)](../hard/)**
- 🏠 **[Return to Chapter 7 Overview (`../README.md`)](../README.md)**
