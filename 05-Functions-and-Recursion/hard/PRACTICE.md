# 🔴 Chapter 5 Hard Practice Workbook

> Practice workbook containing 10 advanced problems focusing on multi-return exit paths, LIFO stack frame call order tracing, double-call Fibonacci recursion, digit sum decomposition, recursive exponentiation, post-call stack unwinding (Head Recursion), mutual recursion, variable shadowing scope boundaries, decimal-to-binary stack unwinding, and Collatz hailstone sequences.

---

## 🎯 Learning Objectives

- Structure multi-path conditional `return` statements safely.
- Trace deep nested function call execution frames using LIFO stack order.
- Implement dual recursive calls for tree-like branching algorithms (Fibonacci `fib(n-1) + fib(n-2)`).
- Deconstruct integer digits recursively (`n % 10` + `sumDigits(n / 10)`).
- Utilize post-call stack unwinding to print reversed output sequences without extra counter variables.
- Design mutually recursive function pairs (`isEven` ↔ `isOdd`).
- Analyze parameter scope shadowing and pass-by-value boundary isolation.
- Construct multi-branch conditional recursive algorithms (Collatz Conjecture).

---

## 📊 Section Metadata

- **Estimated Difficulty**: 🔴 Hard
- **Total Problems**: 10 Questions
- **Topic Focus**: Multi-Return Traps, LIFO Stack Tracing, Dual Recursion (Fibonacci), Head Recursion Unwinding, Mutual Recursion, Scope Shadowing & Collatz Sequence

---

## 📈 Progress Checklist

- [ ] 21 Multi-Return Path Trap
- [ ] 22 Deep Execution Tracer
- [ ] 23 N-th Fibonacci Number
- [ ] 24 Sum of Digits Recursively
- [ ] 25 Power Function via Recursion
- [ ] 26 Pre-Call vs Post-Call Recursion
- [ ] 27 Recursive Even/Odd Check
- [ ] 28 Shadowing and Pass-by-Value
- [ ] 29 Decimal to Binary recursively
- [ ] 30 The Collatz Conjecture (Hailstone Sequence)

---

## 📝 Practice Questions

### Question 21: Multi-Return Path Trap

- **Difficulty**: Hard
- **Concepts Used**: Return Values, Conditional Execution
- **Problem Statement**:
  Write a function `checkNumber(int n)` that returns 1 if positive, -1 if negative, and 0 if exactly zero. Call this function in `main()` and capture the result.
- **Sample Input**:
  ```text
  -15
  ```
- **Sample Output**:
  ```text
  Result: -1
  ```
- **Constraints**: You must use multiple return statements in the function.
- **Hints**:
  - *Hint 1*: When a function hits a return statement, it immediately exits.
  - *Hint 2*: You can write `if (n > 0) return 1;`
  - *Hint 3*: Followed by `if (n < 0) return -1;` and finally `return 0;`.

---

### Question 22: Deep Execution Tracer

- **Difficulty**: Hard
- **Concepts Used**: Nested Calling, Execution Flow
- **Problem Statement**:
  Write functions `A()`, `B()`, and `C()`.
  `main()` calls `A()`. `A()` prints "A enters", calls `B()`, then prints "A exits".
  `B()` prints "B enters", calls `C()`, then prints "B exits".
  `C()` prints "C executes".
  Trace and map the exact output.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  A enters
  B enters
  C executes
  B exits
  A exits
  ```
- **Constraints**: Strictly follow the calling order.
- **Hints**:
  - *Hint 1*: Function execution uses a Stack (LIFO: Last In, First Out).
  - *Hint 2*: `A` pauses for `B`. `B` pauses for `C`.
  - *Hint 3*: `C` finishes first, returning control to `B`, which finishes and returns control to `A`.

---

### Question 23: N-th Fibonacci Number

- **Difficulty**: Hard
- **Concepts Used**: Multiple Recursive Calls
- **Problem Statement**:
  Write a recursive function `fib(int n)` to find the N-th Fibonacci number. The sequence starts 0, 1, 1, 2, 3, 5, 8...
- **Sample Input**:
  ```text
  6
  ```
- **Sample Output**:
  ```text
  Fibonacci number: 8
  ```
- **Constraints**: Assume `fib(0) = 0` and `fib(1) = 1`.
- **Hints**:
  - *Hint 1*: The base cases are `if (n == 0) return 0;` and `if (n == 1) return 1;`.
  - *Hint 2*: The recursive step involves calling the function twice!
  - *Hint 3*: `return fib(n - 1) + fib(n - 2);`

---

### Question 24: Sum of Digits Recursively

- **Difficulty**: Hard
- **Concepts Used**: Recursive Mathematical Logic
- **Problem Statement**:
  Write a recursive function `sumDigits(int n)` that takes a number (e.g., 456) and returns the sum of its digits ($4+5+6 = 15$).
- **Sample Input**:
  ```text
  456
  ```
- **Sample Output**:
  ```text
  Digit Sum: 15
  ```
- **Constraints**: Must use recursion, no loops.
- **Hints**:
  - *Hint 1*: The last digit is `n % 10`. The remaining digits are `n / 10`.
  - *Hint 2*: The base case is when there are no digits left (`n == 0`), return 0.
  - *Hint 3*: Recursive step: `return (n % 10) + sumDigits(n / 10);`.

---

### Question 25: Power Function via Recursion

- **Difficulty**: Hard
- **Concepts Used**: Recursive Multiplication
- **Problem Statement**:
  Write a recursive function `power(int base, int exp)` that calculates $\text{base}^{\text{exp}}$.
- **Sample Input**:
  ```text
  2 4
  ```
- **Sample Output**:
  ```text
  Result: 16
  ```
- **Constraints**: Assume $\text{exp} \ge 0$. Do not use `<math.h>`.
- **Hints**:
  - *Hint 1*: Any number to the power of 0 is 1. This is your base case.
  - *Hint 2*: $2^4$ is $2 \times 2^3$.
  - *Hint 3*: Recursive step: `return base * power(base, exp - 1);`.

---

### Question 26: Pre-Call vs Post-Call Recursion

- **Difficulty**: Hard
- **Concepts Used**: Stack Winding and Unwinding
- **Problem Statement**:
  Write a recursive function `mystery(int n)`. First, call `mystery(n-1)`. THEN, print `n`. If `n==0`, return. Call `mystery(3)` from `main()`. Observe how it prints in reverse!
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  1
  2
  3
  ```
- **Constraints**: The `printf` MUST be after the recursive call.
- **Hints**:
  - *Hint 1*: This is called "Head Recursion" or stack unwinding.
  - *Hint 2*: The print statements are deferred (paused) until the base case is reached.
  - *Hint 3*: As the functions return from the base case, they resume and print from the bottom up (1, then 2, then 3).

---

### Question 27: Recursive Even/Odd Check

- **Difficulty**: Hard
- **Concepts Used**: Mutual Recursion (Conceptual)
- **Problem Statement**:
  Write two functions: `isEven(int n)` and `isOdd(int n)`.
  If `n == 0`, `isEven` returns 1, `isOdd` returns 0.
  For other numbers, `isEven(n)` returns `isOdd(n-1)`, and `isOdd(n)` returns `isEven(n-1)`. Call `isEven(4)` from `main()`.
- **Sample Input**:
  ```text
  4
  ```
- **Sample Output**:
  ```text
  Is 4 Even? 1
  ```
- **Constraints**: Functions must call each other. Use prototypes.
- **Hints**:
  - *Hint 1*: You must prototype both functions at the top so they can "see" each other.
  - *Hint 2*: This is Mutual Recursion.
  - *Hint 3*: `isEven(4)` -> `isOdd(3)` -> `isEven(2)` -> `isOdd(1)` -> `isEven(0)` -> returns 1.

---

### Question 28: Shadowing and Pass-by-Value

- **Difficulty**: Hard
- **Concepts Used**: Parameter Scope
- **Problem Statement**:
  In `main()`, declare `int a = 5;`.
  Pass it to a function `void change(int a)`.
  Inside `change`, declare ANOTHER block `{ int a = 10; }`. Print `a` inside the block, outside the block but inside the function, and finally back in `main()`.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Inner block: 10
  Function scope: 5
  Main scope: 5
  ```
- **Constraints**: Understand variable scope boundaries.
- **Hints**:
  - *Hint 1*: The `a` inside `{ int a = 10; }` shadows the parameter `a`.
  - *Hint 2*: Once that block ends, the parameter `a` (which is 5) is visible again.
  - *Hint 3*: Finally, `main()`'s `a` was never touched because of pass-by-value.

---

### Question 29: Decimal to Binary recursively

- **Difficulty**: Hard
- **Concepts Used**: Recursive Modulo
- **Problem Statement**:
  Write a recursive function `printBinary(int n)` that converts a decimal integer to binary and prints it.
- **Sample Input**:
  ```text
  10
  ```
- **Sample Output**:
  ```text
  1010
  ```
- **Constraints**: Print during stack unwinding.
- **Hints**:
  - *Hint 1*: The base case is `if (n == 0) return;`.
  - *Hint 2*: Recursively call `printBinary(n / 2);`.
  - *Hint 3*: AFTER the recursive call, print `n % 2`. This ensures bits are printed in the correct left-to-right order!

---

### Question 30: The Collatz Conjecture (Hailstone Sequence)

- **Difficulty**: Hard
- **Concepts Used**: Conditional Recursive Steps
- **Problem Statement**:
  Write a recursive function `collatz(int n)`.
  If `n == 1`, print "1" and return.
  If `n` is even, print `n` and call `collatz(n / 2)`.
  If `n` is odd, print `n` and call `collatz(3 * n + 1)`.
- **Sample Input**:
  ```text
  6
  ```
- **Sample Output**:
  ```text
  6 3 10 5 16 8 4 2 1
  ```
- **Constraints**: Use recursion with multiple conditional paths.
- **Hints**:
  - *Hint 1*: Check the base case `n == 1` first.
  - *Hint 2*: Use `n % 2 == 0` to decide which recursive call to make.
  - *Hint 3*: Print `n` before making the recursive call.
