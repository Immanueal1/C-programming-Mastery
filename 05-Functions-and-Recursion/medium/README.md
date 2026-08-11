# 🟡 Chapter 5: Medium Practice Problems

> Intermediate C programming challenges focusing on modular multi-function architectures, indirect calls, void wrappers for multi-value output, pass-by-value variable immunity, boolean return logic, mathematical recursion ($N!$, $\sum N$), stack overflow traps, and pre-call execution flow.

---

## 📌 Short Description

This directory contains 10 intermediate practice problems designed to sharpen multi-function program organization, indirect execution tracing, variable scope isolation, boolean return evaluations, recursive mathematical solutions, and call stack overflow crash analysis.

---

## 📚 Topics Covered

- [x] Multi-Function Modular Architectures (`add`, `subtract`, `multiply`)
- [x] Indirect Function Calls (`main()` ➜ `funcA()` ➜ `funcB()`)
- [x] Multi-Value Output Wrappers using `void` Functions
- [x] Pass-by-Value Memory Independence Proofs
- [x] Boolean Return Functions (`isEven()`)
- [x] Execution Flow Tracing & Function Suspension
- [x] Mathematical Recursion: Factorial ($N!$)
- [x] Mathematical Recursion: Natural Sum ($\sum N$)
- [x] Stack Overflow Crash Simulation & Memory Exhaustion 🚨
- [x] Pre-Call Recursion Tracing (`countdown()`)

---

## 🎯 Learning Objectives

- Implement multi-function modular architectures (`add`, `subtract`, `multiply`).
- Trace indirect function calls (`main()` ➜ `funcA()` ➜ `funcB()`).
- Encapsulate multiple calculations inside `void` printing wrapper functions.
- Verify that identical parameter and argument variable names remain completely independent in memory due to pass-by-value.
- Construct recursive functions for mathematical algorithms (Factorial $N!$, Natural Sum $\sum N$).
- Understand call stack frame growth and infinite recursion traps leading to Stack Overflow crashes.

---

## 📈 Progress Checklist

- [ ] 11 Modular Calculator
- [ ] 12 Direct vs Indirect Function Calls
- [ ] 13 The Area and Perimeter Wrapper
- [ ] 14 Testing Pass-By-Value Immunity
- [ ] 15 Boolean Returning Function
- [ ] 16 Execution Flow Tracer
- [ ] 17 Recursive Factorial
- [ ] 18 Recursive Sum of N Numbers
- [ ] 19 Stack Overflow Simulator (Conceptual)
- [ ] 20 Tracing the Base Case

---

## 📁 Folder Contents

| File | Title | Concepts Used |
| :--- | :--- | :--- |
| [`11_modular_calculator.c`](./11_modular_calculator.c) | Modular Calculator | Multiple User-Defined Functions |
| [`12_direct_vs_indirect_function_calls.c`](./12_direct_vs_indirect_function_calls.c) | Direct vs Indirect Function Calls | Execution Flow, Indirect Calls |
| [`13_the_area_and_perimeter_wrapper.c`](./13_the_area_and_perimeter_wrapper.c) | The Area and Perimeter Wrapper | Void Functions, Multiple Function Calls |
| [`14_testing_pass_by_value_immunity.c`](./14_testing_pass_by_value_immunity.c) | Testing Pass-By-Value Immunity | Pass by Value, Variable Scope |
| [`15_boolean_returning_function.c`](./15_boolean_returning_function.c) | Boolean Returning Function | Return Values, Conditional Logic |
| [`16_execution_flow_tracer.c`](./16_execution_flow_tracer.c) | Execution Flow Tracer | Execution Flow |
| [`17_recursive_factorial.c`](./17_recursive_factorial.c) | Recursive Factorial | Recursion, Mathematical Calculation |
| [`18_recursive_sum_of_n_numbers.c`](./18_recursive_sum_of_n_numbers.c) | Recursive Sum of N Numbers | Recursion vs Iteration Equivalency |
| [`19_stack_overflow_simulator.c`](./19_stack_overflow_simulator.c) | Stack Overflow Simulator (Conceptual) | Infinite Recursion, Stack Overflow |
| [`20_tracing_the_base_case.c`](./20_tracing_the_base_case.c) | Tracing the Base Case | Recursion Execution Flow |

---

## 📝 Practice Questions

### Question 11: Modular Calculator

- **Difficulty**: Medium
- **Concepts Used**: Multiple User-Defined Functions
- **Problem Statement**:
  Create three separate functions: `add(a,b)`, `subtract(a,b)`, and `multiply(a,b)`. In `main()`, read two integers and call all three functions, printing their returned results.
- **Sample Input**:
  ```text
  10 5
  ```
- **Sample Output**:
  ```text
  Addition: 15
  Subtraction: 5
  Multiplication: 50
  ```
- **Constraints**: Each mathematical operation must have its own dedicated function returning an integer.
- **Hints**:
  - *Hint 1*: Declare prototypes for all three functions at the top.
  - *Hint 2*: Each function simply returns the respective arithmetic operation.
  - *Hint 3*: Print the returned values inside `main()`.

---

### Question 12: Direct vs Indirect Function Calls

- **Difficulty**: Medium
- **Concepts Used**: Execution Flow, Indirect Calls
- **Problem Statement**:
  Write three functions: `main()`, `funcA()`, and `funcB()`. `main()` should call `funcA()`. `funcA()` should print "Inside A" and then call `funcB()`. `funcB()` should print "Inside B".
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Inside A
  Inside B
  ```
- **Constraints**: `main()` must NOT call `funcB()` directly.
- **Hints**:
  - *Hint 1*: This demonstrates an indirect function call.
  - *Hint 2*: Ensure `funcB()` is declared before `funcA()` calls it, or use prototypes.
  - *Hint 3*: Execution goes: `main` -> `funcA` -> `funcB` -> back to `funcA` -> back to `main`.

---

### Question 13: The Area and Perimeter Wrapper

- **Difficulty**: Medium
- **Concepts Used**: Void Functions, Multiple Function Calls
- **Problem Statement**:
  Write a function `calculateRectangle(int l, int w)`. Inside this function, calculate both the area and perimeter. Print both results directly from inside this function. Call it from `main()`.
- **Sample Input**:
  ```text
  5 4
  ```
- **Sample Output**:
  ```text
  Area: 20
  Perimeter: 18
  ```
- **Constraints**: You cannot return two values in C. Handle the printing inside the function.
- **Hints**:
  - *Hint 1*: Since you need to output two distinct results, returning is impossible with basic C.
  - *Hint 2*: Set the return type to `void`.
  - *Hint 3*: Calculate `l * w` and `2 * (l + w)` and print them before the function ends.

---

### Question 14: Testing Pass-By-Value Immunity

- **Difficulty**: Medium
- **Concepts Used**: Pass by Value, Variable Scope
- **Problem Statement**:
  In `main()`, declare `int salary = 50000;`. Pass it to a function `applyBonus(int salary)`. Inside the function, add 10000 to `salary` and print "Salary with bonus: [value]". Back in `main()`, print "Original salary: [value]".
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Salary with bonus: 60000
  Original salary: 50000
  ```
- **Constraints**: Use the exact same variable name `salary` in both functions.
- **Hints**:
  - *Hint 1*: Even if the parameter has the same name as the argument, they are stored in entirely different memory locations.
  - *Hint 2*: Modifying the parameter `salary` only affects the copy inside `applyBonus`.
  - *Hint 3*: `main()`'s `salary` remains untouched.

---

### Question 15: Boolean Returning Function

- **Difficulty**: Medium
- **Concepts Used**: Return Values, Conditional Logic
- **Problem Statement**:
  Write a function `isEven(int n)` that returns 1 if `n` is even, and 0 if it is odd. In `main()`, read an integer and use this function inside an `if` statement to print "Even" or "Odd".
- **Sample Input**:
  ```text
  8
  ```
- **Sample Output**:
  ```text
  Even
  ```
- **Constraints**: The function must return an `int`. No printing inside `isEven`.
- **Hints**:
  - *Hint 1*: Use the modulo operator `%` inside the function.
  - *Hint 2*: `if (n % 2 == 0) return 1; else return 0;`
  - *Hint 3*: In `main()`, use `if (isEven(num) == 1)`.

---

### Question 16: Execution Flow Tracer

- **Difficulty**: Medium
- **Concepts Used**: Execution Flow
- **Problem Statement**:
  Write a program with `main()` and `myFunc()`. Print "Starting Main", call `myFunc()`, and print "Ending Main". Inside `myFunc()`, print "Inside Function".
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Starting Main
  Inside Function
  Ending Main
  ```
- **Constraints**: Match the exact output order.
- **Hints**:
  - *Hint 1*: C code executes sequentially.
  - *Hint 2*: `main()` suspends its execution when `myFunc()` is called.
  - *Hint 3*: `main()` resumes only after `myFunc()` finishes.

---

### Question 17: Recursive Factorial

- **Difficulty**: Medium
- **Concepts Used**: Recursion, Mathematical Calculation
- **Problem Statement**:
  Write a recursive function `factorial(int n)` that calculates the factorial of N ($N!$). Remember that $0!=1$ and $1!=1$.
- **Sample Input**:
  ```text
  5
  ```
- **Sample Output**:
  ```text
  Factorial is 120
  ```
- **Constraints**: Do NOT use loops (`for` or `while`). You must use recursion.
- **Hints**:
  - *Hint 1*: The base case is `if (n == 0 || n == 1) return 1;`.
  - *Hint 2*: The recursive step is `return n * factorial(n - 1);`.
  - *Hint 3*: Print the result returned to `main()`.

---

### Question 18: Recursive Sum of N Numbers

- **Difficulty**: Medium
- **Concepts Used**: Recursion vs Iteration Equivalency
- **Problem Statement**:
  Write a recursive function `sum(int n)` that calculates the sum of all natural numbers from 1 to n.
- **Sample Input**:
  ```text
  4
  ```
- **Sample Output**:
  ```text
  Sum is 10
  ```
- **Constraints**: Must use recursion.
- **Hints**:
  - *Hint 1*: The base case is when `n == 1`. Return 1.
  - *Hint 2*: The recursive step combines the current number with the sum of all previous numbers.
  - *Hint 3*: `return n + sum(n - 1);`

---

### Question 19: Stack Overflow Simulator (Conceptual)

- **Difficulty**: Medium
- **Concepts Used**: Infinite Recursion, Stack Overflow
- **Problem Statement**:
  Write a recursive function `infinite()` that calls itself without any base case. Print "Running" inside it. Call it from `main()`. Run it and observe what happens to your terminal.
- **Sample Input**: *(No input)*
- **Sample Output**: *(Program crashes after printing "Running" many times)*
- **Constraints**: Understand that this causes a Segmentation Fault.
- **Hints**:
  - *Hint 1*: `void infinite() { printf("Running\n"); infinite(); }`
  - *Hint 2*: Every function call takes up memory on the Call Stack.
  - *Hint 3*: Without a base case to stop the calls, the memory exhausts, crashing the program.

---

### Question 20: Tracing the Base Case

- **Difficulty**: Medium
- **Concepts Used**: Recursion Execution Flow
- **Problem Statement**:
  Write a recursive function `countdown(int n)`. Print `n`, then call `countdown(n-1)`. Add a base case to return when `n == 0`.
- **Sample Input**:
  ```text
  3
  ```
- **Sample Output**:
  ```text
  3
  2
  1
  ```
- **Constraints**: The print statement MUST be before the recursive call.
- **Hints**:
  - *Hint 1*: Check `if (n == 0) return;` at the very beginning.
  - *Hint 2*: `printf("%d\n", n);`
  - *Hint 3*: `countdown(n - 1);`

---

## 🔗 Navigation Links

- 📋 **[View Complete Practice Workbook (`PRACTICE.md`)](./PRACTICE.md)**
- 🟢 **[Return to Easy Practice (`../easy/`)](../easy/)**
- 🔴 **[Proceed to Hard Practice (`../hard/`)](../hard/)**
- 🏠 **[Return to Chapter 5 Overview (`../README.md`)](../README.md)**
