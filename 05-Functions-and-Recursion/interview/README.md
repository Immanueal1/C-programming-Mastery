# 💡 Chapter 5: Interview Preparation

> Technical interview questions, conceptual theory, debugging challenges, output prediction exercises, and multiple-choice questions focusing on Chapter 5: Functions & Recursion.

---

## 📌 Short Description

This module provides targeted placement and technical interview preparation materials covering code reusability, function prototypes, library vs. user-defined functions, arguments vs. parameters, pass-by-value immutability, the single return rule, recursion mechanics, base cases vs. recursive steps, stack overflow crashes, and iterative-recursive equivalency.

---

## 📚 Topics Covered

- [x] Code Reusability Principles & Modularity
- [x] Function Prototypes / Declarations & Compiler Awareness
- [x] Standard Library Functions (`<stdio.h>`, `<math.h>`) vs. User-Defined Functions
- [x] Arguments (Actual Parameters) vs. Parameters (Formal Parameters)
- [x] Pass-by-Value Mechanics & Memory Copying
- [x] Single Return Value Rule & Multi-Return Traps
- [x] Mathematical Principles of Recursion ($f(f(f(x)))$)
- [x] The 2 Mandatory Properties: Base Case & Recursive Step
- [x] Call Stack Frame Exhaustion & Stack Overflow Crashes
- [x] Iterative vs. Recursive Algorithm Trade-offs

---

## 🎯 Learning Objectives

- Articulate function execution flow starting from `main()`.
- Explain pass-by-value memory mechanics to technical interviewers.
- Identify missing return statements, prototype mismatches, and unreachable code.
- Trace recursive stack frame winding and unwinding order (LIFO).
- Solve technical MCQs testing function syntax, parameter scope, and call stack rules.

---

## 📁 Folder Contents

| File | Description | Target Skills |
| :--- | :--- | :--- |
| [`THEORY.md`](./THEORY.md) | Top 10 Technical Interview Questions | Code reusability, function prototypes, library vs custom, arguments vs parameters, pass-by-value, single return rule, recursion properties, base cases, stack overflow, iteration vs recursion. |
| [`OUTPUT_PREDICTION.md`](./OUTPUT_PREDICTION.md) | Top 10 Code Snippet Output Challenges | Dual call execution, pass-by-value scope, binary power recursion `2*fun(n-1)`, stack unwinding outputs `test(n-1); printf()`, nested return calls `f(2, f(3, 4))`, indirect calls `b() -> a()`, multiple return statements, early void returns, recursive sum tracing. |
| [`DEBUGGING.md`](./DEBUGGING.md) | Top 10 Syntax & Logical Bug Fix Exercises | Missing return expression in int function, void function returning value, missing prototype before call, parameter missing data type `multiply(x, y)`, pass-by-value expectation bug, missing recursive base case, returning two comma values `return a, b;`, void function returning 0, infinite non-approaching recursive step, invalid function call syntax `void f(x)`. |
| [`MCQs.md`](./MCQs.md) | Top 10 Multiple Choice Questions | Entry point `main()`, default pass-by-value mechanism, void return type, stack overflow causes, formal parameters definition, recursive `main()` legality, actual arguments identification, modularity advantages, library functions, maximum return count. |

---

## 🔗 Navigation Links

- 🟢 **[Easy Practice (`../easy/`)](../easy/)**
- 🟡 **[Medium Practice (`../medium/`)](../medium/)**
- 🔴 **[Hard Practice (`../hard/`)](../hard/)**
- 🏠 **[Return to Chapter 5 Overview (`../README.md`)](../README.md)**
