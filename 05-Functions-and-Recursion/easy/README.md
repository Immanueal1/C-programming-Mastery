# 🟢 Chapter 5: Easy Practice Problems

> Beginner-friendly C programming challenges focusing on custom function creation, arguments vs. parameters, function prototypes, pass-by-value immutability, math library calls, return values, and fundamental recursion base cases.

---

## 📌 Short Description

This directory contains 10 fundamental practice problems designed to build core confidence with the 3-step function lifecycle (Prototype ➜ Definition ➜ Call), parameter passing, single value returns, pass-by-value proof exercises, and basic recursive stopping mechanics.

---

## 📚 Topics Covered

- [x] User-Defined Functions with `void` Return Type
- [x] Formal Parameters vs. Actual Arguments
- [x] Code Reusability via Multiple Function Invocation
- [x] Functions Returning Values (`float getPi()`)
- [x] Library Functions (`sqrt()`) vs. Custom Wrapper Functions
- [x] The Function Prototype Rule (`void displayMessage();`)
- [x] Pass-by-Value Immutability Proofs
- [x] Multi-Parameter Addition Functions (`addNumbers(int a, int b)`)
- [x] Formulating Recursive Base Cases (`if (N == 0) return;`)
- [x] Elementary Recursive Steps (`printHello(n - 1)`)

---

## 🎯 Learning Objectives

- Construct basic user-defined functions with `void` and primitive return types (`int`, `float`).
- Declare function prototypes at the top of the file to inform the compiler.
- Distinguish between actual arguments sent in a call and formal parameters received by a definition.
- Verify C's pass-by-value immutability rule.
- Formulate basic recursive base cases (`if (n == 0) return;`) and recursive steps (`f(n - 1)`).

---

## 📈 Progress Checklist

- [ ] 01 The Welcome Module
- [ ] 02 Argument vs Parameter
- [ ] 03 The Reusability Test
- [ ] 04 Returning a Value
- [ ] 05 Library vs Custom
- [ ] 06 The Prototype Rule
- [ ] 07 Pass-by-Value Basics
- [ ] 08 Basic Addition Function
- [ ] 09 Defining the Base Case
- [ ] 10 Simple Recursive Step

---

## 📁 Folder Contents

| File | Title | Concepts Used |
| :--- | :--- | :--- |
| [`01_the_welcome_module.c`](./01_the_welcome_module.c) | The Welcome Module | User-Defined Functions, Function Call, `void` Return Type |
| [`02_argument_vs_parameter.c`](./02_argument_vs_parameter.c) | Argument vs Parameter | Arguments, Parameters, Pass-by-value |
| [`03_the_reusability_test.c`](./03_the_reusability_test.c) | The Reusability Test | Code Reusability, Multiple Function Calls |
| [`04_returning_a_value.c`](./04_returning_a_value.c) | Returning a Value | Return Values, Single Return Value Rule |
| [`05_library_vs_custom.c`](./05_library_vs_custom.c) | Library vs Custom | Library Functions, User-Defined Functions |
| [`06_the_prototype_rule.c`](./06_the_prototype_rule.c) | The Prototype Rule | Function Prototype / Declaration |
| [`07_pass_by_value_basics.c`](./07_pass_by_value_basics.c) | Pass-by-Value Basics | Pass by Value, Copy of an Argument |
| [`08_basic_addition_function.c`](./08_basic_addition_function.c) | Basic Addition Function | Multiple Parameters, Return Values |
| [`09_defining_the_base_case.c`](./09_defining_the_base_case.c) | Defining the Base Case | Recursion, Base Case |
| [`10_simple_recursive_step.c`](./10_simple_recursive_step.c) | Simple Recursive Step | Recursion, Recursive Step |

---

## 📝 Practice Questions

### Question 01: The Welcome Module

- **Difficulty**: Easy
- **Concepts Used**: User-Defined Functions, Function Call, `void` Return Type
- **Problem Statement**:
  Write a program that uses a custom function named `printGreeting()`. This function should print "Welcome to C Programming!". The `main()` function should call this custom function exactly once.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Welcome to C Programming!
  ```
- **Constraints**: The greeting must be printed from the user-defined function, not from `main()`.
- **Hints**:
  - *Hint 1*: Define a function `void printGreeting() { ... }`.
  - *Hint 2*: Place the `printf` inside this function.
  - *Hint 3*: Inside `int main()`, simply write `printGreeting();`.

---

### Question 02: Argument vs Parameter

- **Difficulty**: Easy
- **Concepts Used**: Arguments, Parameters, Pass-by-value
- **Problem Statement**:
  Create a function `printSquare(int n)` that accepts an integer and prints its square. In `main()`, declare an integer `x = 5`, and pass it to `printSquare`.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  The square is 25
  ```
- **Constraints**: Identify conceptually which is the argument and which is the parameter.
- **Hints**:
  - *Hint 1*: The variable in the function definition (`int n`) is the formal parameter.
  - *Hint 2*: The variable passed in the call (`x`) is the actual argument.
  - *Hint 3*: Inside `printSquare`, calculate `n * n`.

---

### Question 03: The Reusability Test

- **Difficulty**: Easy
- **Concepts Used**: Code Reusability, Multiple Function Calls
- **Problem Statement**:
  Write a function `printStars()` that prints `***` on a new line. In `main()`, call this function three times in a row.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  ***
  ***
  ***
  ```
- **Constraints**: You cannot use a loop. You must use three separate function calls.
- **Hints**:
  - *Hint 1*: The function should contain `printf("***\n");`.
  - *Hint 2*: In `main()`, write the function call three times.
  - *Hint 3*: `printStars(); printStars(); printStars();`

---

### Question 04: Returning a Value

- **Difficulty**: Easy
- **Concepts Used**: Return Values, Single Return Value Rule
- **Problem Statement**:
  Write a function `getPi()` that takes no parameters and returns the float value `3.14159`. Call this function in `main()` and print the returned value.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Value of Pi: 3.141590
  ```
- **Constraints**: The function must have a `float` return type.
- **Hints**:
  - *Hint 1*: Define the function as `float getPi()`.
  - *Hint 2*: Use the `return` keyword.
  - *Hint 3*: In `main()`, use `printf("%f", getPi());`.

---

### Question 05: Library vs Custom

- **Difficulty**: Easy
- **Concepts Used**: Library Functions, User-Defined Functions
- **Problem Statement**:
  Calculate the square root of a user-provided number using the library function `sqrt()` from `<math.h>`. Then, write a user-defined function `customPrint(float val)` to print the result.
- **Sample Input**:
  ```text
  16.0
  ```
- **Sample Output**:
  ```text
  The calculated result is: 4.000000
  ```
- **Constraints**: Do not use `printf` directly in `main()`.
- **Hints**:
  - *Hint 1*: Include `<math.h>`.
  - *Hint 2*: Use `float result = sqrt(n);` in `main()`.
  - *Hint 3*: Pass `result` to `customPrint(result)`.

---

### Question 06: The Prototype Rule

- **Difficulty**: Easy
- **Concepts Used**: Function Prototype / Declaration
- **Problem Statement**:
  Write a program where `main()` calls a function `displayMessage()` BEFORE the function is actually defined. To prevent compilation errors, you must use a function prototype at the top of the file.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Prototype successful!
  ```
- **Constraints**: The function definition must strictly be below `main()`.
- **Hints**:
  - *Hint 1*: A prototype tells the compiler "this function exists, I will define it later."
  - *Hint 2*: Place `void displayMessage();` above `int main()`.
  - *Hint 3*: Define `void displayMessage() { ... }` below `main()`.

---

### Question 07: Pass-by-Value Basics

- **Difficulty**: Easy
- **Concepts Used**: Pass by Value, Copy of an Argument
- **Problem Statement**:
  Write a function `modifyValue(int a)` that changes `a` to 100. In `main()`, set `int x = 10`, call `modifyValue(x)`, and then print `x`. Observe if `x` changes.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Value in main is: 10
  ```
- **Constraints**: Do not return any value from `modifyValue`.
- **Hints**:
  - *Hint 1*: C passes arguments by value, meaning it only sends a copy.
  - *Hint 2*: Changing `a` inside the function does not affect `x` in `main()`.
  - *Hint 3*: Print `x` in `main()` after the function call to prove it remains 10.

---

### Question 08: Basic Addition Function

- **Difficulty**: Easy
- **Concepts Used**: Multiple Parameters, Return Values
- **Problem Statement**:
  Write a function `addNumbers(int a, int b)` that returns the sum of `a` and `b`. Read two integers in `main()`, pass them to the function, and print the result.
- **Sample Input**:
  ```text
  12 8
  ```
- **Sample Output**:
  ```text
  Sum: 20
  ```
- **Constraints**: The function must return an `int`.
- **Hints**:
  - *Hint 1*: The function should take two arguments separated by a comma.
  - *Hint 2*: Use `return a + b;`.
  - *Hint 3*: In `main()`, capture the return value: `int total = addNumbers(x, y);`.

---

### Question 09: Defining the Base Case

- **Difficulty**: Easy
- **Concepts Used**: Recursion, Base Case
- **Problem Statement**:
  You are writing a recursive function to print numbers from N down to 1. Write ONLY the base case logic. If N becomes 0, the function should return and stop executing.
- **Sample Input**: *(No input)*
- **Sample Output**: *(No output required, conceptual implementation)*
- **Constraints**: Focus purely on the stopping condition.
- **Hints**:
  - *Hint 1*: The base case prevents infinite recursion.
  - *Hint 2*: It is usually an `if` statement at the very top of the recursive function.
  - *Hint 3*: `if (N == 0) { return; }`

---

### Question 10: Simple Recursive Step

- **Difficulty**: Easy
- **Concepts Used**: Recursion, Recursive Step
- **Problem Statement**:
  Write a recursive function `printHello(int n)` that prints "Hello" n times. Use `n == 0` as the base case. For the recursive step, call `printHello(n - 1)`.
- **Sample Input**:
  ```text
  3
  ```
- **Sample Output**:
  ```text
  Hello
  Hello
  Hello
  ```
- **Constraints**: Do not use loops.
- **Hints**:
  - *Hint 1*: Check the base case first: `if (n == 0) return;`.
  - *Hint 2*: Print "Hello".
  - *Hint 3*: Make the recursive call: `printHello(n - 1);`.

---

## 🔗 Navigation Links

- 📋 **[View Complete Practice Workbook (`PRACTICE.md`)](./PRACTICE.md)**
- 🟡 **[Proceed to Medium Practice (`../medium/`)](../medium/)**
- 🔴 **[Proceed to Hard Practice (`../hard/`)](../hard/)**
- 🏠 **[Return to Chapter 5 Overview (`../README.md`)](../README.md)**
