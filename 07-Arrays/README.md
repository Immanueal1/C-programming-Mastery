# 📘 Chapter 7: Arrays

> Master contiguous memory allocation, 1D and 2D array declarations, zero-based indexing (`0` to `n-1`), array memory calculations, out-of-bounds safety traps, pointer arithmetic (`ptr++`), pointer differences (`ptr2 - ptr1`), array decay (`arr == &arr[0]`), pointer-based array traversal (`*(arr + i)`), implicit call-by-reference function passing, and 2D row-major linear memory layouts in C.

---

## 📌 Chapter Overview

An **array** is a fundamental data structure in C that stores a fixed-size sequence of elements of the **same data type** in **contiguous (adjacent) memory locations**. Instead of declaring dozens of individual variables, an array allows you to group related data under a single identifier and access elements efficiently using numerical indexes.

This chapter covers the complete mechanics of 1D and 2D arrays in C: array declaration and initialization, zero-based indexing, contiguous memory layout calculations, out-of-bounds memory safety traps, pointer arithmetic scaling based on data types (`int` vs. `char`), pointer subtraction for element distance, array-to-pointer decay, array traversal using both indexes and pointers, passing arrays to functions (and why size must always be passed), implicit call-by-reference array mutation inside functions, and 2D grid representation stored as row-major linear memory.

---

## ℹ️ Chapter Information

| Metadata | Details |
| :--- | :--- |
| **Difficulty** | 🟡 Intermediate |
| **Prerequisite** | [Chapter 6 – Pointers](../06-Pointers/README.md) |
| **Estimated Time** | ~5–6 Hours |
| **Practice Directories** | [`easy/`](./easy/), [`medium/`](./medium/), [`hard/`](./hard/) |
| **Visual Cheat Sheet** | Included ([View Image](./images/C%20programming%20Visual%20Notes_watermark_page-0007.jpg)) |

---

## 📚 Topics Covered

- [x] What Is an Array? Collection Concept & Contiguous Memory
- [x] Array Declaration Syntax (`data_type array_name[size];`)
- [x] Contiguous Memory Layout & Address Progression
- [x] Array Memory Calculation Formula ($\text{Elements} \times \text{Size of Data Type}$)
- [x] Array Initialization Forms (Explicit size vs. Automatic size deduction)
- [x] Zero-Based Indexing Mechanics (`0` to `n - 1`)
- [x] Accessing & Modifying Array Elements (`arr[index] = value;`)
- [x] Out-of-Bounds Memory Traps & Undefined Behavior 🚨
- [x] Pointer Arithmetic Scaling (`ptr++`, `ptr + i`)
- [x] Pointer Arithmetic Dependence on Data Types (`int` +4 bytes vs. `char` +1 byte)
- [x] Pointer Difference (`ptr2 - ptr1` Element Distance)
- [x] Array-to-Pointer Decay (`arr == &arr[0]`)
- [x] Accessing Array Elements Through Pointers (`*(ptr + i)`)
- [x] Array Traversal (Loop Indexing vs. Pointer Arithmetic)
- [x] Arrays as Function Arguments (`void f(int arr[], int n)` vs `void f(int *arr, int n)`)
- [x] The Array Size Passing Rule (`array + size` pattern)
- [x] Implicit Call-by-Reference Array Mutation inside Functions
- [x] One-Dimensional Array Syntax Summary Matrix
- [x] Two-Dimensional Arrays (2D Matrices & Grid Representation)
- [x] 2D Array Declaration & Initialization (`int marks[rows][cols]`)
- [x] Accessing 2D Array Elements (`arr[row][col]`)
- [x] 2D Array Memory Layout (Row-Major Order Linear Storage)
- [x] Passing 2D Arrays to Functions (Mandatory Column Dimension Rule `arr[][cols]`)
- [x] Array Memory Model ASCII Diagrams
- [x] 10 Most Important Array Rules & Golden Traps 🚨

---

## 🎨 Visual Cheat Sheet

![Chapter 7 Cheat Sheet](./images/C%20programming%20Visual%20Notes_watermark_page-0007.jpg)

> 💡 **Note**: The complete master visual notes PDF is available in the repository root: [`C-Programming-Visual-Notes.pdf`](../C-Programming-Visual-Notes.pdf).

---

## 📖 Complete Chapter Theory

### 1. What Is an Array?

An **array** is a collection of elements of the **same data type** stored in **contiguous (adjacent) memory locations**.

Instead of creating multiple separate variables for related data:
```c
int marks1, marks2, marks3, marks4, marks5;
```

We can create a single array variable:
```c
int marks[5];
```

This allocates a single contiguous memory block capable of holding 5 integers.

#### 💡 Why Use Arrays?
Arrays enable software engineers to:
1. Store multiple values of the same type under a single descriptive name.
2. Organize related data logically in sequential order.
3. Access any element in constant time $O(1)$ using numerical indexes.
4. Traverse, search, and manipulate datasets efficiently using loops.

---

### 2. Array Declaration

#### Syntax:
```c
data_type array_name[size];
```

#### Code Example:
```c
int marks[5];
```

| Part | Meaning / Description |
| :--- | :--- |
| **`int`** | Data type of **every** element inside the array |
| **`marks`** | Unique variable name of the array |
| **`[5]`** | Total number of elements allocated in memory (Array Size) |

This declaration creates 5 distinct element slots:
```text
marks[0], marks[1], marks[2], marks[3], marks[4]
```

> ⚠️ **Key Rule**: There are 5 elements, but because indexing starts at 0, the last valid index is **4** (`size - 1`).

---

### 3. Contiguous Memory

Array elements are stored **immediately next to each other** in physical RAM.

```c
int arr[3] = {5, 10, 15};
```

#### Memory Layout Diagram (assuming `int` = 4 bytes):

| Physical Address | Stored Value | Array Index |
| :--- | :--- | :--- |
| **`1000`** | `5` | `arr[0]` |
| **`1004`** | `10` | `arr[1]` |
| **`1008`** | `15` | `arr[2]` |

Because an `int` occupies 4 bytes of memory, each consecutive element begins exactly 4 bytes higher than the previous one:
- `&arr[0]` ➜ Address `1000`
- `&arr[1]` ➜ Address `1004`
- `&arr[2]` ➜ Address `1008`

This contiguous alignment is what makes pointer arithmetic and loop traversal fast and predictable.

---

### 4. Array Memory Calculation

The total memory consumed by an array is calculated using the formula:

$$\text{Total Memory (Bytes)} = \text{Number of Elements} \times \text{Size of Data Type}$$

#### Calculation Example:
For an array declared as `int arr[3];` where `sizeof(int) = 4` bytes:

$$\text{Total Memory} = 3 \times 4 = 12 \text{ Bytes}$$

| Data Type | Array Declaration | Elements | Bytes per Element | Total Size |
| :--- | :--- | :--- | :--- | :--- |
| `int` | `int arr[10]` | 10 | 4 bytes | 40 bytes |
| `char` | `char str[20]` | 20 | 1 byte | 20 bytes |
| `float` | `float val[5]` | 5 | 4 bytes | 20 bytes |
| `double` | `double dbl[4]` | 4 | 8 bytes | 32 bytes |

---

### 5. Array Initialization

C provides multiple syntaxes for declaring and initializing arrays:

#### Method 1: Specify Size Explicitly
```c
int marks[3] = {97, 98, 89};
```
Creates an array of size 3 and populates all 3 positions:
- `marks[0] = 97`
- `marks[1] = 98`
- `marks[2] = 89`

#### Method 2: Compiler Size Deduction
```c
int marks[] = {97, 98, 89};
```
When the size inside `[]` is omitted, the C compiler automatically counts the initializer elements and sets the array size to **3**.

#### Method 3: Partial Initialization
```c
int marks[5] = {97, 98};
```
If fewer values are provided than the specified size, C initializes the remaining elements to **0**:
- `marks[0] = 97`, `marks[1] = 98`, `marks[2] = 0`, `marks[3] = 0`, `marks[4] = 0`

---

### 6. Zero-Based Indexing

C arrays use **Zero-Based Indexing**. The first element of an array is always located at index `0`.

```c
int marks[3] = {97, 98, 89};
```

| Index | Element | Access Syntax |
| :--- | :--- | :--- |
| **`0`** | First Element | `marks[0]` ➜ `97` |
| **`1`** | Second Element | `marks[1]` ➜ `98` |
| **`2`** | Third Element | `marks[2]` ➜ `89` |

#### 🌟 Index Range Formula:
For an array containing $n$ elements:
- **First Index** $= 0$
- **Last Index** $= n - 1$

---

### 7. Accessing Array Elements

Use the array name followed by the desired element index enclosed in square brackets `[index]`:

```c
int marks[3] = {97, 98, 89};

printf("%d\n", marks[0]); // Prints 97 (1st element)
printf("%d\n", marks[2]); // Prints 89 (3rd element)
```

---

### 8. Modifying Array Elements

Array elements are standard variables and can be assigned new values at any time using their index:

```c
int marks[3] = {97, 98, 89};

marks[1] = 100; // Overwrites the 2nd element (98 ➜ 100)
```

After modification, the array contents become:
```text
Index:   0     1    2
Value:  97   100   89
```

---

### 9. Out-of-Bounds Access 🚨

> 🚨 **Critical C Memory Safety Warning**: **C does NOT perform array bound checking!**

If an array has $n$ elements, valid indexes are strictly from `0` to `n - 1`.

```c
int marks[3] = {97, 98, 89}; // Valid indexes: 0, 1, 2
```

Attempting to access out-of-bounds indexes:
```c
printf("%d", marks[3]); // INVALID! Out of bounds
printf("%d", marks[5]); // INVALID! Out of bounds
marks[-1] = 50;         // INVALID! Corrupts memory
```

#### What Happens During Out-of-Bounds Access?
- The compiler will usually compile this without throwing an error!
- At runtime, the computer reads or overwrites arbitrary adjacent memory.
- This leads to unpredictable **garbage values**, **silent data corruption**, or instant **Segmentation Fault** crashes.

> 🌟 **Golden Rule**: For `int arr[n];`, NEVER access index `n` or beyond!

---

### 10. Pointer Arithmetic

Because array elements occupy contiguous memory, pointers can navigate through arrays using arithmetic operators (`+`, `-`, `++`, `--`).

When you perform arithmetic on a pointer, C does **NOT** simply add bytes. Instead, it scales the addition based on the **size of the pointed-to data type**.

```c
int *ptr; // Assuming int = 4 bytes
```

```text
ptr       ➜ Address 2000
ptr + 1   ➜ Address 2004  (2000 + 1 * 4)
ptr + 2   ➜ Address 2008  (2000 + 2 * 4)
```

Executing `ptr++` moves the pointer to the **next element of its type**, jumping 4 bytes ahead in RAM.

---

### 11. Pointer Arithmetic Depends on Data Type

The byte movement of `ptr + 1` is strictly governed by `sizeof(*ptr)`:

```c
int  *iptr = (int *)2000;
char *cptr = (char *)2000;
```

| Data Type | Initial Address | Pointer Expression | Resulting Address | Memory Jump |
| :--- | :--- | :--- | :--- | :--- |
| **`int`** | `2000` | `iptr + 1` | `2004` | $+4$ bytes |
| **`char`** | `2000` | `cptr + 1` | `2001` | $+1$ byte |
| **`double`** | `2000` | `dptr + 1` | `2008` | $+8$ bytes |

> 💡 **Core Lesson**: `ptr + 1` means *"Move to the memory address of the NEXT element"*, not *"add 1 byte"*.

---

### 12. Pointer Difference

Subtracting two pointers pointing to elements of the **same array** yields the **number of elements** separating them:

```c
int arr[] = {10, 20, 30, 40, 50};

int *ptr1 = &arr[1]; // Points to 20 (Address 1004)
int *ptr2 = &arr[3]; // Points to 40 (Address 1012)

int diff = ptr2 - ptr1; // Returns 2 (elements)
```

#### Rules for Pointer Subtraction:
1. `ptr2 - ptr1` calculates $(\text{Address}_2 - \text{Address}_1) / \text{sizeof(Type)}$.
2. Both pointers must point to elements inside the **same array**.
3. Subtracting pointers of different data types is invalid and produces a compilation error.

---

### 13. Arrays and Pointers (Array Decay)

In C expressions, the name of an array automatically **decays into a pointer to its first element**.

```c
arr == &arr[0]
```

#### Code Proof:
```c
int arr[5] = {10, 20, 30, 40, 50};

printf("Address via &arr[0]: %p\n", (void *)&arr[0]); // e.g., 0x7ffd81a0
printf("Address via arr:     %p\n", (void *)arr);     // Identical: 0x7ffd81a0
```

```text
Array: arr
 ┌──────┬──────┬──────┬──────┐
 │  10  │  20  │  30  │  40  │
 └──────┴──────┴──────┴──────┘
    ▲
    │
 arr / &arr[0] (Points to first element)
```

> 📌 **Technical Distinction**: While `arr` evaluates to the address of `&arr[0]`, an array is an allocated block of memory, not an lvalue pointer variable (you cannot write `arr++`).

---

### 14. Accessing Array Elements Through a Pointer

Since `arr` points to the first element, we can assign it to a pointer and use pointer arithmetic to access any element:

```c
int arr[] = {10, 20, 30, 40};
int *ptr = arr; // ptr points to arr[0]
```

- `*ptr` ➜ Accesses `arr[0]` (`10`)
- `*(ptr + 1)` ➜ Accesses `arr[1]` (`20`)
- `*(ptr + 2)` ➜ Accesses `arr[2]` (`30`)
- `*(ptr + i)` ➜ Accesses `arr[i]`

---

### 15. Array Traversal

You can traverse an array using either standard array indexing or pointer arithmetic. Both approaches are functionally identical:

#### Style 1: Array Indexing
```c
for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
}
```

#### Style 2: Pointer Arithmetic
```c
for (int i = 0; i < n; i++) {
    printf("%d ", *(arr + i));
}
```

#### 🌟 Fundamental Equivalence Rule:

$$\text{arr}[i] \iff *(\text{arr} + i)$$

---

### 16. Arrays as Function Arguments

When an array is passed to a function, C does **NOT** copy the entire array. Instead, it passes the memory address of the first element (Implicit Call by Reference).

The receiving function parameter can be written in either of two equivalent syntaxes:

#### Syntax A: Array Notation
```c
void printNumbers(int arr[], int n) {
    // Uses arr
}
```

#### Syntax B: Pointer Notation
```c
void printNumbers(int *arr, int n) {
    // Uses arr
}
```

Both signatures are completely identical to the compiler.

---

### 17. Always Pass the Array Size

> 🚨 **Golden Rule**: **A function receiving an array pointer does NOT automatically know how many elements the array contains!**

Inside a function, `sizeof(arr)` evaluates to the size of a pointer (4 or 8 bytes), NOT the total size of the array!

Therefore, you must **always pass the array size as a separate parameter**:

```c
void printNumbers(int arr[], int n); // Pass array + size n
```

#### Function Invocation Pattern:
```c
int marks[5] = {90, 85, 88, 92, 79};
printNumbers(marks, 5); // Pass array name & size
```

---

### 18. Arrays and Modification Inside Functions

Because passing an array sends its actual memory address to the function, modifying array elements inside a function **permanently updates the original array in `main()`**.

```c
#include <stdio.h>

void doubleElements(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = arr[i] * 2; // Mutates original array in caller memory!
    }
}

int main() {
    int numbers[3] = {5, 10, 15};
    doubleElements(numbers, 3);
    
    // Original array in main is now {10, 20, 30}!
    printf("%d %d %d\n", numbers[0], numbers[1], numbers[2]);
    return 0;
}
```

This behavior differs from passing scalar primitive variables (which pass copies by value).

---

### 19. One-Dimensional Array Syntax Summary Matrix

| Operation | C Syntax Example | Notes / Meaning |
| :--- | :--- | :--- |
| **Declaration** | `int arr[5];` | Allocates 5 uninitialized `int` slots |
| **Initialization** | `int arr[3] = {10, 20, 30};` | Explicit size initialization |
| **Auto-Sizing** | `int arr[] = {10, 20, 30};` | Compiler deduces size $= 3$ |
| **Element Access** | `int val = arr[i];` | Accesses element at index `i` |
| **Element Mutation**| `arr[i] = 100;` | Overwrites element at index `i` |
| **First Address** | `&arr[0]` or `arr` | Starting address of the array |
| **Pointer Binding** | `int *ptr = arr;` | Binds pointer `ptr` to array start |
| **Pointer Access** | `*(ptr + i)` | Equivalent to `arr[i]` |
| **Pointer Step** | `ptr++;` | Advances pointer to next element |
| **Pointer Delta** | `ptr2 - ptr1` | Distance in number of elements |

---

### 20. Two-Dimensional Arrays (2D Matrices)

A **Two-Dimensional (2D) Array** represents data arranged in a table or grid with **rows** and **columns**.

#### Real-World Example (Student Marks Grid):

| Student | Maths (Col 0) | Physics (Col 1) | Chemistry (Col 2) |
| :--- | :--- | :--- | :--- |
| **Student 1 (Row 0)** | 90 | 85 | 88 |
| **Student 2 (Row 1)** | 78 | 82 | 91 |

Represented in C as an array with **2 Rows** and **3 Columns**:
```c
int marks[2][3];
```

---

### 21. 2D Array Syntax

#### Declaration Syntax:
```c
data_type array_name[rows][columns];
```

#### Code Example:
```c
int matrix[3][4]; // 3 Rows, 4 Columns
```

$$\text{Total Elements} = \text{Rows} \times \text{Columns} = 3 \times 4 = 12 \text{ Elements}$$

---

### 22. 2D Array Initialization

```c
int marks[2][3] = {
    {90, 85, 88}, // Row 0
    {78, 82, 91}  // Row 1
};
```

#### Visual Grid Representation:

$$\begin{matrix} & \text{Col 0} & \text{Col 1} & \text{Col 2} \\ \text{Row 0} & 90 & 85 & 88 \\ \text{Row 1} & 78 & 82 & 91 \end{matrix}$$

---

### 23. Accessing 2D Array Elements

Access elements using `array[row_index][column_index]`:

```c
printf("%d", marks[0][0]); // Row 0, Col 0 ➜ Prints 90
printf("%d", marks[1][2]); // Row 1, Col 2 ➜ Prints 91
```

---

### 24. 2D Array Memory Layout (Row-Major Order)

> 💡 **Core Memory Reality**: While a 2D array is conceptualized as a grid, **computer RAM is 1D linear!**

C stores 2D arrays contiguously in **Row-Major Order**: Row 0 is stored completely, followed immediately by Row 1, Row 2, etc.

#### Linear Memory Alignment for `int marks[2][3]`:

$$\begin{array}{|c|c|c|c|c|c|} \hline \text{marks}[0][0] & \text{marks}[0][1] & \text{marks}[0][2] & \text{marks}[1][0] & \text{marks}[1][1] & \text{marks}[1][2] \\ \hline 90 & 85 & 88 & 78 & 82 & 91 \\ \hline \end{array}$$

All 6 elements reside in a single contiguous 24-byte block in RAM.

---

### 25. Passing 2D Arrays to Functions

When passing a 2D array to a function, **you may omit the row size, but you MUST specify the column size!**

```c
void printTable(int arr[][3], int rows); // Column size [3] is mandatory!
```

#### Why is the Column Size Mandatory?
To calculate the memory address of `arr[row][col]`, the compiler uses the formula:

$$\text{Address} = \text{BaseAddress} + (\text{row} \times \text{Columns} + \text{col}) \times \text{sizeof(Type)}$$

Without knowing the number of columns, the compiler cannot determine where one row ends and the next row begins in linear RAM.

---

### 26. 2D Array Function Parameter Rules

```c
void function(int arr[][COLUMNS], int rows) {
    // Process 2D array
}
```

| Parameter Element | Requirement | Rule |
| :--- | :--- | :--- |
| **First Dimension (`rows`)** | Optional inside `[]` | May be left empty `[][cols]` or passed as parameter `int rows` |
| **Second Dimension (`cols`)**| **Mandatory** inside `[]` | Must specify exact column count e.g., `[][10]` |

---

### 27. Array Memory Model ASCII Diagrams

#### 1D Array Contiguous Memory Model:
```text
Array: int arr[4] = {10, 20, 30, 40};

  Index:       0         1         2         3
           ┌─────────┬─────────┬─────────┬─────────┐
  Value:   │   10    │   20    │   30    │   40    │
           └─────────┴─────────┴─────────┴─────────┘
  Address:   1000      1004      1008      1012
               ▲
               │
          arr / &arr[0]
```

#### 2D Array Row-Major Linear Storage Model:
```text
Matrix View [2][3]:                Linear RAM View:
┌──────────┬──────────┬──────────┐  ┌──────────┬──────────┬──────────┬──────────┬──────────┬──────────┐
│ [0][0]=90│ [0][1]=85│ [0][2]=88│  │ [0][0]=90│ [0][1]=85│ [0][2]=88│ [1][0]=78│ [1][1]=82│ [1][2]=91│
├──────────┼──────────┼──────────┤  └──────────┴──────────┴──────────┴──────────┴──────────┴──────────┘
│ [1][0]=78│ [1][1]=82│ [1][2]=91│  ◄──────────── Row 0 ────────────►◄──────────── Row 1 ────────────►
└──────────┴──────────┴──────────┘
```

---

### 28. Most Important Rules to Remember 🚨

- 🚨 **Rule 1 (Zero-Based Indexing)**: Indexes range strictly from `0` to `n - 1`.
- 🚨 **Rule 2 (Contiguous Allocation)**: All elements are stored side-by-side in RAM.
- 🚨 **Rule 3 (Memory Formula)**: $\text{Total Bytes} = \text{Elements} \times \text{sizeof(Type)}$.
- 🚨 **Rule 4 (Data-Type Pointer Scaling)**: `ptr + 1` advances by `sizeof(Type)` bytes, not 1 byte.
- 🚨 **Rule 5 (Pointer Subtraction)**: `ptr2 - ptr1` returns distance in elements for the same array.
- 🚨 **Rule 6 (No Bounds Checking)**: Accessing `arr[n]` causes silent memory corruption or crashes.
- 🚨 **Rule 7 (Always Pass Array Size)**: Functions cannot compute array length; pass `n` separately.
- 🚨 **Rule 8 (Array Mutation in Functions)**: Functions modify the original array in `main()`.
- 🚨 **Rule 9 (2D Memory Is Linear)**: Matrices are stored sequentially in Row-Major order.
- 🚨 **Rule 10 (2D Column Size Required)**: Function parameters for 2D arrays must specify `[][cols]`.

---

### 29. Quick Syntax Reference

| Operation | Syntax |
| :--- | :--- |
| **Declare 1D Array** | `int arr[5];` |
| **Initialize 1D Array** | `int arr[3] = {1, 2, 3};` |
| **Automatic Size Deduction**| `int arr[] = {1, 2, 3};` |
| **Access 1D Element** | `arr[i]` |
| **Modify 1D Element** | `arr[i] = value;` |
| **Address of First Element**| `&arr[0]` or `arr` |
| **Pointer Binding** | `int *ptr = arr;` |
| **Pointer Element Access** | `*(ptr + i)` |
| **Pointer Increment** | `ptr++;` |
| **Pointer Difference** | `ptr2 - ptr1` |
| **Declare 2D Array** | `int arr[2][3];` |
| **Access 2D Element** | `arr[row][col]` |
| **1D Array Function Parameter**| `void f(int arr[], int n)` or `void f(int *arr, int n)` |
| **2D Array Function Parameter**| `void f(int arr[][cols], int rows)` |

---

## 📂 Practice Programs

Access the practice problem folders directly by clicking on the links below:

| Difficulty Level | Folder Link | Description |
| :--- | :--- | :--- |
| 🟢 **Easy** | 📂 **[Browse Easy Programs](./easy/)** | Array declarations, zero-based indexing, element access/modification, 1D array printing, sum/average calculations, and basic max/min element searches. |
| 🟡 **Medium** | 📂 **[Browse Medium Programs](./medium/)** | Array reversing, element searching (linear search), counting even/odd elements, pointer arithmetic traversal (`*(ptr+i)`), passing arrays to functions, and basic 2D matrix operations. |
| 🔴 **Hard** | 📂 **[Browse Hard Programs](./hard/)** | Advanced 2D matrix multiplication, transpose operations, array sorting algorithms, pointer subtraction element distance calculations, out-of-bounds safety debugging, and multi-dimensional function parameters. |

---

## 💡 Key Takeaways

- An array is a collection of same-type elements stored in contiguous memory.
- Indexing starts at `0` and ends at `n - 1` for an array of size `n`.
- Total memory size equals $\text{elements} \times \text{sizeof(Type)}$.
- Pointer arithmetic scales automatically based on data type size (`ptr + 1` advances by element size).
- The array name `arr` decays into a pointer to its first element (`&arr[0]`).
- `arr[i]` and `*(arr + i)` are completely equivalent in C.
- C does not perform bound checking — accessing `arr[n]` leads to undefined behavior.
- Functions receiving arrays must be passed the array size explicitly (`void f(arr, n)`).
- Modifying array elements inside a function alters the original array in caller memory.
- 2D arrays are stored linearly in RAM in Row-Major order; 2D function parameters require fixed column dimensions (`arr[][cols]`).

---

## ✅ Chapter Summary

After completing this chapter, you should be able to:

- [x] Declare and initialize 1D and 2D arrays in C
- [x] Calculate total array memory consumption using data type sizes
- [x] Access and modify elements using zero-based indexing (`0` to `n - 1`)
- [x] Prevent out-of-bounds memory safety bugs (`arr[n]`)
- [x] Perform pointer arithmetic (`ptr++`, `ptr + i`) and pointer subtraction (`ptr2 - ptr1`)
- [x] Traverse arrays using both indexing (`arr[i]`) and pointer dereferencing (`*(arr + i)`)
- [x] Pass arrays and their size parameters to functions safely
- [x] Explain why array modifications inside functions affect the original caller array
- [x] Represent grid data using 2D arrays and understand row-major linear RAM storage
- [x] Declare 2D array function parameters with mandatory column dimensions (`arr[][cols]`)

---

## Next Chapter

➡️ **[Continue to Chapter 8: Strings](../08-Strings/README.md)**
