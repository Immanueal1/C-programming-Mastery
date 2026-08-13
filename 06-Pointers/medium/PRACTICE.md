# 🟡 Chapter 6 Medium Practice Workbook

> Practice workbook containing 10 intermediate problems focusing on variable swapping via Call by Reference, Call by Value limitations, returning multiple values using output pointers, pointer-to-pointer (`int **pptr`) chains, midpoint calculations, safe division status returns, cascading pointer reassignments, pointer aliasing, and multi-result geometry functions.

---

## 🎯 Learning Objectives

- Implement variable swapping algorithms using Call by Reference (`swap(&a, &b)`).
- Demonstrate why Call by Value fails for variable swapping.
- Design functions that return multiple values using output pointer parameters (`void calc(..., int *sum, int *diff)`).
- Construct and dereference double pointers (`int **pptr`).
- Combine function return values (status codes) with pointer parameters (calculated output).
- Trace pointer aliasing when multiple pointer variables hold the exact same memory address.

---

## 📊 Section Metadata

- **Estimated Difficulty**: 🟡 Medium
- **Total Problems**: 10 Questions
- **Topic Focus**: Call by Reference Swapping, Multi-Value Output Pointers, Pointer-to-Pointer (**pptr), Safe Division Status, Pointer Aliasing

---

## 📈 Progress Checklist

- [ ] 11 Swapping Two Variables Using Pointers
- [ ] 12 The Failed Swap Illusion
- [ ] 13 Returning Multiple Values
- [ ] 14 Pointer to Pointer (**)
- [ ] 15 The Midpoint Finder
- [ ] 16 Mutating the Base via **
- [ ] 17 Safe Division with Status
- [ ] 18 Cascading Updates
- [ ] 19 Pointer to Same Type Alias
- [ ] 20 Area and Perimeter Calculator

---

## 📝 Practice Questions

### Question 11: Swapping Two Variables Using Pointers

- **Difficulty**: Medium
- **Concepts Used**: Call by Reference, Swapping, Temporary Variable
- **Problem Statement**:
  Write a function `swap(int *a, int *b)` that exchanges the values of two integers in `main()`. Print the values in `main()` before and after calling the function.
- **Sample Input**:
  ```text
  x = 10, y = 50
  ```
- **Sample Output**:
  ```text
  Before: x = 10, y = 50
  After: x = 50, y = 10
  ```
- **Constraints**: You must use a temporary variable inside the swap function.
- **Hints**:
  - *Hint 1*: Pass `&x` and `&y` to the function.
  - *Hint 2*: Inside the function, store the value of `*a` in an `int temp`.
  - *Hint 3*: Assign `*b` to `*a`, then assign `temp` to `*b`.

---

### Question 12: The Failed Swap Illusion

- **Difficulty**: Medium
- **Concepts Used**: Call by Value Limitation
- **Problem Statement**:
  Write a function `fakeSwap(int a, int b)` that attempts to swap two numbers using pass-by-value. Print the variables inside the function after swapping, and then print them in `main()`.
- **Sample Input**:
  ```text
  x = 5, y = 9
  ```
- **Sample Output**:
  ```text
  Inside function: a = 9, b = 5
  Inside main: x = 5, y = 9
  ```
- **Constraints**: Demonstrate why this logic fails.
- **Hints**:
  - *Hint 1*: In `fakeSwap`, standard swap logic (`temp = a; a = b; b = temp;`) will work for the local copies.
  - *Hint 2*: The original `x` and `y` in `main()` are never touched because no addresses were passed.
  - *Hint 3*: This proves why pointers are mandatory for swapping variables across functions.

---

### Question 13: Returning Multiple Values

- **Difficulty**: Medium
- **Concepts Used**: Pointer Parameters, Multiple Outputs
- **Problem Statement**:
  In C, a function can only use one return statement to return a single value. Write a function `calculate(int a, int b, int *sum, int *diff)` that calculates both the sum and difference of `a` and `b`, and "returns" them via the pointer parameters.
- **Sample Input**:
  ```text
  20, 5
  ```
- **Sample Output**:
  ```text
  Sum: 25
  Difference: 15
  ```
- **Constraints**: The function return type must be `void`.
- **Hints**:
  - *Hint 1*: Declare `sumResult` and `diffResult` in `main()`.
  - *Hint 2*: Pass their addresses to the function: `calculate(20, 5, &sumResult, &diffResult);`.
  - *Hint 3*: Inside the function, assign `a + b` to `*sum` and `a - b` to `*diff`.

---

### Question 14: Pointer to Pointer (**)

- **Difficulty**: Medium
- **Concepts Used**: Pointer-to-Pointer Declaration, Double Dereferencing
- **Problem Statement**:
  Declare an integer `x = 100`. Create a pointer `p` that points to `x`. Then, create a pointer-to-pointer `pp` that points to `p`. Print the value 100 using `x`, using `p`, and using `pp`.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Value using x: 100
  Value using p: 100
  Value using pp: 100
  ```
- **Constraints**: Use exact dereferencing syntax.
- **Hints**:
  - *Hint 1*: A pointer-to-pointer is declared with two asterisks: `int **pp = &p;`.
  - *Hint 2*: Dereferencing `p` requires one asterisk: `*p`.
  - *Hint 3*: Dereferencing `pp` requires two asterisks: `**pp`.

---

### Question 15: The Midpoint Finder

- **Difficulty**: Medium
- **Concepts Used**: Multi-Value Output via Pointers
- **Problem Statement**:
  Write a function `getMidpoint(float x1, float x2, float *mid)` that calculates the midpoint between two coordinates and stores it in the `mid` pointer.
- **Sample Input**:
  ```text
  2.0, 10.0
  ```
- **Sample Output**:
  ```text
  Midpoint is: 6.000000
  ```
- **Constraints**: `mid` must be updated via call by reference.
- **Hints**:
  - *Hint 1*: The midpoint formula is `(x1 + x2) / 2.0`.
  - *Hint 2*: Assign this result to `*mid`.
  - *Hint 3*: Pass the address of your result variable from `main()`.

---

### Question 16: Mutating the Base via **

- **Difficulty**: Medium
- **Concepts Used**: Double Dereferencing Mutation
- **Problem Statement**:
  Set up a variable `a = 5`, a pointer `p = &a`, and a pointer-to-pointer `pp = &p`. Without using `a` or `p`, change the value of the original integer to 50 using only `pp`. Print `a`.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Mutated a: 50
  ```
- **Constraints**: Only `pp` can be used on the left-hand side of the assignment.
- **Hints**:
  - *Hint 1*: `pp` points to `p`, and `p` points to `a`.
  - *Hint 2*: `*pp` gives you access to `p`.
  - *Hint 3*: `**pp` gives you access to `a`. Set `**pp = 50;`.

---

### Question 17: Safe Division with Status

- **Difficulty**: Medium
- **Concepts Used**: Returning Status and Value via Pointers
- **Problem Statement**:
  Write a function `int safeDivide(int num, int den, int *result)` that returns 1 if division is possible (denominator is not 0), and 0 if it is impossible. If possible, it should store the division result inside the `result` pointer.
- **Sample Input**:
  ```text
  10, 2
  ```
- **Sample Output**:
  ```text
  Status: 1 (Success), Result: 5
  ```
- **Constraints**: Use the function's integer return type for the status, and the pointer parameter for the mathematical result.
- **Hints**:
  - *Hint 1*: Check `if (den == 0) return 0;`.
  - *Hint 2*: Otherwise, `*result = num / den; return 1;`.
  - *Hint 3*: In `main`, check the returned status before printing the result.

---

### Question 18: Cascading Updates

- **Difficulty**: Medium
- **Concepts Used**: Pointer Chains
- **Problem Statement**:
  Declare three variables: `a = 10, b = 20, c = 30`. Declare a pointer `ptr`.
  Make `ptr` point to `a`, double its value.
  Make `ptr` point to `b`, double its value.
  Make `ptr` point to `c`, double its value.
  Print `a`, `b`, and `c`.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  a = 20, b = 40, c = 60
  ```
- **Constraints**: You are only allowed one pointer variable.
- **Hints**:
  - *Hint 1*: Reassign the pointer: `ptr = &a;`, then mutate `*ptr *= 2;`.
  - *Hint 2*: Reassign to `b`: `ptr = &b;`, then mutate.
  - *Hint 3*: Reassign to `c`: `ptr = &c;`, then mutate.

---

### Question 19: Pointer to Same Type Alias

- **Difficulty**: Medium
- **Concepts Used**: Value Tracing
- **Problem Statement**:
  Declare `int val = 42`. Create a pointer `p1` pointing to `val`. Create another pointer `p2` and assign `p1` to it (i.e., `p2 = p1`). Modify the value to 99 using `p2`. Print the value using `*p1`.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  *p1 shows: 99
  ```
- **Constraints**: Understand pointer aliasing (multiple pointers looking at the same address).
- **Hints**:
  - *Hint 1*: `p1` holds the address of `val`.
  - *Hint 2*: Setting `p2 = p1` copies the address, so `p2` also looks at `val`.
  - *Hint 3*: Changing `*p2` changes `val`, so `*p1` will reflect that change.

---

### Question 20: Area and Perimeter Calculator

- **Difficulty**: Medium
- **Concepts Used**: Multiple Output Pointer Function
- **Problem Statement**:
  Write a function `calcRectangle(int length, int width, int *area, int *perimeter)` that calculates both metrics and sends them back to `main()` via pointers.
- **Sample Input**:
  ```text
  5, 4
  ```
- **Sample Output**:
  ```text
  Area: 20
  Perimeter: 18
  ```
- **Constraints**: Return type must be `void`.
- **Hints**:
  - *Hint 1*: `Area = length * width`.
  - *Hint 2*: `Perimeter = 2 * (length + width)`.
  - *Hint 3*: Assign these values to `*area` and `*perimeter` respectively.
