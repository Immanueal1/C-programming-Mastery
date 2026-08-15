# 📝 Top 10 Multiple Choice Questions (MCQs)

> Test your technical understanding of Chapter 7 array mechanics, pointer arithmetic, memory layouts, and function parameters.

---

### Question 1
What is the total memory occupied by `int arr[5]` assuming `sizeof(int)` is 4 bytes?
- A) 5 bytes
- B) 10 bytes
- C) 20 bytes
- D) 24 bytes

---

### Question 2
Which of the following correctly accesses the **4th element** of an array?
- A) `arr[4]`
- B) `arr[3]`
- C) `arr + 4`
- D) `*(arr + 4)`

---

### Question 3
If `int *ptr = arr;`, what does `ptr++` do?
- A) Increases the integer value stored in the first element by 1.
- B) Moves the pointer forward by exactly 1 byte in physical RAM.
- C) Moves the pointer to the next array element (4 bytes forward for `int`).
- D) Triggers a compilation syntax error.

---

### Question 4
Why is passing the column dimension mandatory in 2D array function parameters (`void f(int mat[][3], int rows)`)?
- A) To inform the function how many total rows exist.
- B) So the compiler can compute the row-major linear memory offset: $\text{row} \times \text{cols} + \text{col}$.
- C) To allocate dynamic stack memory inside the function body.
- D) Column dimensions are not mandatory in C.

---

### Question 5
What is the output of `int arr[5] = {1, 2}; printf("%d", arr[4]);`?
- A) Garbage value
- B) `0`
- C) `2`
- D) Compilation error

---

### Question 6
Which pointer expression is mathematically equivalent to 2D array indexing `arr[i][j]`?
- A) `*(*(arr + i) + j)`
- B) `*(arr + i + j)`
- C) `**(arr + i + j)`
- D) `*(&arr[0] + i + j)`

---

### Question 7
If `ptr1` points to `arr[1]` and `ptr2` points to `arr[4]` within the same integer array, what is `ptr2 - ptr1`?
- A) `3`
- B) `12`
- C) `4`
- D) `16`

---

### Question 8
What happens if you attempt to access `arr[-1]` in C?
- A) Compilation error
- B) Automatically wraps around to the last element of the array
- C) Undefined behavior (reads memory immediately preceding the array base address)
- D) Always returns `0`

---

### Question 9
In C, multidimensional arrays are physically stored in RAM using:
- A) Column-major order
- B) Random memory allocation
- C) Row-major order
- D) Linked list pointer node allocation

---

### Question 10
When an array is passed to a function in C (`printArray(arr)`), what is actually passed?
- A) A complete deep copy of the array elements
- B) The memory address of the first element (`&arr[0]`)
- C) The total byte size of the array
- D) A reference pointer to the last element
