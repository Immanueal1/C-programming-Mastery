# 📖 Chapter 5: Functions & Recursion — Theoretical Reference

> Concise theoretical reference on function lifecycle, execution flow, pass-by-value mechanics, single return rule, recursion properties, and call stack management in C.

---

## 1. Function Core Concept & Classification

A **function** is a block of code that performs a specific task. Writing modular functions promotes code reusability, organization, readability, and maintainability.

> 💡 **3+ Rule of Thumb**: If you write the exact same code block 3 or more times, turn it into a function.

C functions are divided into two main categories:
1. **Library Functions**: Built-in functions provided by standard headers (e.g., `printf()`, `scanf()` from `<stdio.h>`, `pow()` from `<math.h>`).
2. **User-Defined Functions**: Custom functions created by the programmer (e.g., `printHello()`, `calculateTax()`).

---

## 2. The 3-Step Function Lifecycle

To use a user-defined function in C, follow three steps:

1. **Function Prototype (Declaration)**: Informs the compiler about the function signature before execution (`void printHello();`).
2. **Function Definition**: Contains the actual logic and body inside curly braces (`void printHello() { printf("Hello"); }`).
3. **Function Call**: Invokes the function to execute its code (`printHello();`).

---

## 3. Function Execution Flow & `main()` Entry Point

- **Program execution ALWAYS starts at `main()`**, regardless of where custom functions are placed in the file.
- **Direct Function Calls**: `main()` ➜ `functionA()`.
- **Indirect Function Calls**: `main()` ➜ `functionB()` ➜ `functionC()`.

---

## 4. Arguments vs. Parameters & Pass-by-Value

| Concept | Arguments (Actual Parameters) | Parameters (Formal Parameters) |
| :--- | :--- | :--- |
| **Definition** | Values passed in the function call (`sum(a, b);`) | Variables receiving values in definition (`int sum(int x, int y)`) |
| **Role** | **Sends** data | **Receives** data |

### Pass-by-Value Mechanics:
- C passes a **copy** of the argument to the function parameter.
- Modifying a formal parameter inside a function does **NOT** alter the original variable in the caller.

---

## 5. Single Return Value Rule

- A function can receive multiple parameters, but can return **only one** value per call using the `return` statement.
- Executing a `return` statement immediately exits the function.

---

## 6. Recursion Mechanics & Mandatory Properties

**Recursion** occurs when a function calls itself directly or indirectly ($f(f(f(x)))$).

Every recursive function requires two mandatory components:
1. **Recursive Step**: Breaks down the problem into a smaller sub-problem (`return n * fact(n - 1);`).
2. **Base Case**: The stopping condition that halts recursive calls (`if (n <= 1) return 1;`).

---

## 7. Recursion vs. Iteration & Stack Overflow

- **Equivalency**: Anything solved with loops can be solved with recursion, and vice-versa.
- **Stack Overflow Trap**: Omitting or misconfiguring a base case causes infinite recursion. Each call allocates a stack frame in memory; unbounded calls exhaust memory, triggering a **Stack Overflow** crash and Segmentation Fault.

---

## 8. Important Rules & Common Traps 🚨

- 🚨 **Trap 1**: Assuming code starts executing from the top function instead of `main()`.
- 🚨 **Trap 2**: Confusing arguments (sent) with parameters (received).
- 🚨 **Trap 3**: Expecting pass-by-value modifications to alter caller variables.
- 🚨 **Trap 4**: Forgetting the base case, causing infinite recursion stack overflow crashes.
