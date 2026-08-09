# 📘 Chapter 4: Loop Control Instructions

> Master controlled repetition in C using `for`, `while`, and `do-while` loops, increment/decrement operators (`++`, `--`), and control statements (`break`, `continue`).

---

## 📌 Chapter Overview

Loops allow a program to execute a block of code repeatedly without writing the same statements over and over again. Instead of manually duplicating code, a loop automates repetitive tasks until a specified termination condition becomes false.

This chapter covers the three primary loop constructs (`for`, `while`, `do-while`), loop equivalency, pre-increment vs. post-increment evaluation mechanics, infinite loop hazards, nested loop execution, and loop control statements (`break` and `continue`).

---

## ℹ️ Chapter Information

| Metadata | Details |
| :--- | :--- |
| **Difficulty** | 🟢 Beginner to 🟡 Intermediate |
| **Prerequisite** | [Chapter 3 – Conditional Statements](../03-Conditional-Statements/README.md) |
| **Estimated Time** | ~3–4 Hours |
| **Practice Directories** | [`easy/`](./easy/), [`medium/`](./medium/), [`hard/`](./hard/) |
| **Visual Cheat Sheet** | Included ([View Image](./images/C%20programming%20Visual%20Notes_watermark_page-0004.jpg)) |

---

## 📚 Topics Covered

- [x] Need for Loops & Automation Flow
- [x] The Loop Equivalency Rule
- [x] The `for` Loop Syntax & Execution Cycle
- [x] Iterator Types (`int`, `float`, `char`)
- [x] The Infinite Loop Trap ⚠️
- [x] Pre-Increment vs. Post-Increment (`++i` vs `i++`)
- [x] Pre-Decrement vs. Post-Decrement (`--i` vs `i--`)
- [x] The `while` Loop Mechanics & Execution Flow
- [x] The `do-while` Loop Mechanics & Mandatory Semicolon `;`
- [x] `while` vs. `do-while` Structural Comparison
- [x] The `break` Statement & Innermost Loop Termination Trap
- [x] The `continue` Statement & Iteration Skipping
- [x] `break` vs. `continue` Comparison Matrix

---

## 📖 Complete Chapter Theory

### 1. Why Do We Need Loops?

Suppose you want to print `printf("Hello World\n");` 10,000 times. Writing the same statement 10,000 times manually is inefficient and unmaintainable. A loop automates repetitive tasks with just a few lines of code.

```text
Start
  ↓
Execute work
  ↓
Update iterator
  ↓
Repeat work until condition becomes False
  ↓
Stop
```

---

### 2. The Loop Equivalency Rule

> 🌟 **Golden Rule**: **Anything you can do with a `for` loop, you can do with a `while` loop, and you can do with a `do-while` loop.**

All three loops are structurally interchangeable — the key difference lies in syntax organization and when the condition is evaluated.

| Loop Construct | Main Characteristic | Condition Evaluation |
| :--- | :--- | :--- |
| **`for`** | Initialization, condition, and updation written in one compact header | Checked **before** each iteration |
| **`while`** | Initialization outside, condition in header, updation inside body | Checked **before** each iteration |
| **`do-while`** | Body executes **before** the condition is ever checked | Checked **after** each iteration |

---

### 3. The `for` Loop

Useful when the number of iterations or iterator boundary is clearly defined up front.

#### Syntax:
```c
for (initialization; condition; updation)
{
    // Body / Work
}
```

#### Code Example:
```c
for (int i = 1; i <= 5; i++)
{
    printf("%d\n", i);
}
```

#### Loop Header Components:

| Part | Execution Behavior |
| :--- | :--- |
| **Initialization** (`int i = 1;`) | Executed **only once** at the very start of the loop. |
| **Condition** (`i <= 5`) | Evaluated before every iteration. If `false` (`0`), loop exits immediately. |
| **Body / Work** | Code statements inside `{ }`, executed whenever the condition is `true`. |
| **Updation** (`i++`) | Executed **after** the body finishes, right before re-checking condition. |

#### Execution Cycle:
```text
Initialize (once)
      ↓
Check Condition ──False──▶ Exit Loop
      ↓ True
Execute Body
      ↓
Update Iterator
      ↓
      └────▶ Back to Check Condition
```

---

### 4. Iterator Types

Loop iterators in C are not restricted to integers! You can use floating-point numbers or characters as iterators based on problem requirements:

```c
// Integer Iterator
for (int i = 1; i <= 5; i++) { }

// Float Iterator
for (float i = 1.0; i <= 5.0; i += 0.5) { }

// Character Iterator (evaluates ASCII values 'A' -> 'Z')
for (char ch = 'A'; ch <= 'Z'; ch++) { }
```

---

### 5. The Infinite Loop Trap ⚠️

A loop becomes **infinite** (runs continuously without stopping) if its condition never evaluates to false (`0`).

#### Cause 1: Omitted Condition
```c
for (;;)
{
    // Runs forever until killed by system/process termination
}
```

#### Cause 2: Missing or Invalid Updation
```c
for (int i = 1; i <= 10; )
{
    // 'i' remains 1 forever — condition (1 <= 10) never becomes false!
}
```

> ⚠️ **Safety Tip**: Always verify that your loop iterator moves toward the termination condition with every iteration!

---

### 6. Increment & Decrement Operators

Shorthand operators used to modify variables by 1.

The following three statements perform identical work on a standalone line:
```c
i = i + 1;
i += 1;
i++;
```

Similarly, for decrement:
```c
i = i - 1;
i -= 1;
i--;
```

#### Post-Increment (`i++`) — Rule: Use First ➜ Increase Later
```c
int i = 5;
printf("%d", i++);  // Prints 5, then i becomes 6
```

#### Post-Decrement (`i--`) — Rule: Use First ➜ Decrease Later
```c
int i = 5;
printf("%d", i--);  // Prints 5, then i becomes 4
```

#### Pre-Increment (`++i`) — Rule: Increase First ➜ Use Later
```c
int i = 5;
printf("%d", ++i);  // i becomes 6 first, then prints 6
```

#### Pre-Decrement (`--i`) — Rule: Decrease First ➜ Use Later
```c
int i = 5;
printf("%d", --i);  // i becomes 4 first, then prints 4
```

#### Pre vs. Post Operator Summary Matrix

| Operator | Syntax | Rule | Expression Evaluation |
| :---: | :---: | :--- | :--- |
| **Post-Increment** | `i++` | Use ➜ Increase | Evaluates to **old** value, then increments `i` |
| **Pre-Increment** | `++i` | Increase ➜ Use | Increments `i` first, then evaluates to **new** value |
| **Post-Decrement** | `i--` | Use ➜ Decrease | Evaluates to **old** value, then decrements `i` |
| **Pre-Decrement** | `--i` | Decrease ➜ Use | Decrements `i` first, then evaluates to **new** value |

> 💡 **Memory Trick**:
> - **POST** ➜ **Use** value first, **Change** later.
> - **PRE** ➜ **Change** value first, **Use** later.

*(Note: Pre vs. Post difference matters **only** when used inside an expression, assignment, or `printf()`. On a standalone line like `i++;`, both produce the exact same outcome.)*

---

### 7. The `while` Loop

Checks its condition **before** executing the loop body.

#### Syntax:
```c
initialization;
while (condition)
{
    // Work / Body
    updation;
}
```

#### Code Example:
```c
int i = 1;
while (i <= 5)
{
    printf("%d\n", i);
    i++;
}
```

> 📌 **Key Property**: Since the condition is checked first, if the condition is false initially, the body executes **zero times**.

---

### 8. The `do-while` Loop

Executes its body **first**, and evaluates the condition **afterward**.

#### Syntax:
```c
initialization;
do
{
    // Work / Body
    updation;
} while (condition);   // ⚠️ Mandatory Semicolon!
```

#### Code Example:
```c
int i = 1;
do
{
    printf("%d\n", i);
    i++;
} while (i <= 5);
```

> ⚠️ **Syntax Danger**: The semicolon `;` after `while(condition);` is **mandatory** in `do-while`. Omitting it causes a syntax compilation error!

---

### 9. `while` vs. `do-while` Comparison

| Feature | `while` Loop | `do-while` Loop |
| :--- | :--- | :--- |
| **Condition Check** | Tested **before** body execution | Tested **after** body execution |
| **Minimum Executions** | **0** (May not run at all) | **1** (Always runs at least once) |
| **Initialization** | Before the loop | Before `do` |
| **Updation** | Inside body | Inside body |
| **Trailing Semicolon** | No semicolon after condition | **Mandatory semicolon `;`** after condition |
| **Ideal Use Case** | When execution depends on pre-validation | Menu loops, user input prompts |

#### Classic `do-while` Use Case:
Prompting for user input until a valid value is given (e.g., *"Keep reading numbers until the user enters an odd number"*). Since input must be collected at least once before testing, `do-while` is the natural choice.

---

### 10. The `break` Statement

Completely exits the current loop structure immediately.

#### Syntax:
```c
break;
```

#### Code Example:
```c
for (int i = 1; i <= 10; i++)
{
    if (i == 5)
    {
        break;  // Exits the loop when i reaches 5
    }
    printf("%d ", i);
}
// Output: 1 2 3 4
```

#### ⚠️ The Nested Loop Trap:
In nested loops, a `break` statement **only terminates the innermost loop** in which it resides — it does not exit parent/outer loops!

```c
for (int i = 1; i <= 3; i++)
{
    for (int j = 1; j <= 3; j++)
    {
        if (j == 2) break;   // Breaks inner loop only!
        printf("(%d,%d) ", i, j);
    }
    printf("| ");
}
// Output: (1,1) | (2,1) | (3,1) |
```

---

### 11. The `continue` Statement

Skips the remaining statements in the **current iteration** and jumps directly to the next iteration.

- In a `for` loop, `continue` jumps directly to the **updation step** (`i++`), followed by condition checking.
- In a `while` / `do-while` loop, `continue` jumps directly to the **condition check**.

#### Code Example (Skip number 6):
```c
for (int i = 1; i <= 10; i++)
{
    if (i == 6)
    {
        continue;  // Skips printing 6
    }
    printf("%d ", i);
}
// Output: 1 2 3 4 5 7 8 9 10
```

---

### 12. `break` vs. `continue` Comparison Matrix

| Feature | `break` Statement | `continue` Statement |
| :--- | :--- | :--- |
| **Action** | Terminates loop completely | Skips rest of current iteration |
| **Loop Continues?** | **No** | **Yes** (Moves to next iteration) |
| **Remaining Code** | Skipped | Skipped for current iteration only |
| **Primary Purpose** | Early loop exit on match | Filter/skip specific unwanted values |
| **Nested Behavior** | Exits innermost loop only | Skips iteration of innermost loop only |

> 💡 **Memory Trick**:
> - **`break`** ➜ **STOP THE LOOP** 🛑
> - **`continue`** ➜ **SKIP THIS ITERATION** ↪️

---

## 🎨 Visual Cheat Sheet

![Chapter 4 Cheat Sheet](./images/C%20programming%20Visual%20Notes_watermark_page-0004.jpg)

> 💡 **Note**: The complete master visual notes PDF is available in the repository root: [`C-Programming-Visual-Notes.pdf`](../C-Programming-Visual-Notes.pdf).

---

## ⚡ Syntax Quick Reference

### `for` Loop
```c
for (initialization; condition; updation)
{
    // Body / Work
}
```

### `while` Loop
```c
initialization;
while (condition)
{
    // Body / Work
    updation;
}
```

### `do-while` Loop
```c
initialization;
do
{
    // Body / Work
    updation;
} while (condition);   // Semicolon mandatory
```

### Increment / Decrement
```c
i++;    // Post-increment
++i;    // Pre-increment
i--;    // Post-decrement
--i;    // Pre-decrement
```

### Control Statements
```c
break;      // Immediately terminates current loop
continue;   // Skips remainder of current iteration
```

---

## 📋 Quick Revision Table

| Concept | Golden Rule |
| :--- | :--- |
| **`for`** | Initialize ➜ Check Condition ➜ Execute Body ➜ Update Iterator |
| **`while`** | Check Condition ➜ Execute Body ➜ Update Iterator |
| **`do-while`** | Execute Body ➜ Check Condition (Requires trailing `;`) |
| **`i++`** | Use old value first ➜ Increase `i` later |
| **`++i`** | Increase `i` first ➜ Use new value later |
| **`i--`** | Use old value first ➜ Decrease `i` later |
| **`--i`** | Decrease `i` first ➜ Use new value later |
| **`break`** | Exit loop completely (innermost loop only) |
| **`continue`** | Skip remainder of current iteration |
| **`for(;;)`** | Infinite loop syntax |

---

## 📂 Practice Programs

Access the practice problem folders directly by clicking on the links below:

| Difficulty Level | Folder Link | Description |
| :--- | :--- | :--- |
| 🟢 **Easy** | 📂 **[Browse Easy Programs](./easy/)** | Fundamental loop practice covering basic counting, multiplication tables, sum of N numbers, and pre/post increment logic. |
| 🟡 **Medium** | 📂 **[Browse Medium Programs](./medium/)** | Intermediate challenges covering prime checks, digit reversals, Fibonacci series, factorial calculations, and loop break/continue filtering. |
| 🔴 **Hard** | 📂 **[Browse Hard Programs](./hard/)** | Advanced problems dealing with nested loop pattern printing, Armstrong numbers, GCD/LCM algorithms, and menu-driven `do-while` systems. |

---

## 💡 Key Takeaways

- Loops automate repetition — use them instead of repeatedly writing duplicate code blocks.
- All three loop types (`for`, `while`, `do-while`) are functionally equivalent; choose based on clean syntax formatting.
- `for` loop initialization executes **only once** at the start.
- `while` evaluates its condition **first** — the body may execute **0 times**.
- `do-while` evaluates its condition **last** — the body executes **at least 1 time**.
- `do-while` requires a mandatory semicolon `;` after `while(condition);`.
- `i++`/`i--` evaluate using the old value then change `i`; `++i`/`--i` change `i` first then evaluate using the new value.
- `break` completely exits the current loop; `continue` skips the rest of the current iteration.
- In nested loops, `break` and `continue` affect **only the innermost loop** in which they are declared.
- Always ensure the loop condition eventually evaluates to false to prevent infinite loop traps!

---

## ✅ Chapter Summary

After completing this chapter, you should be able to:

- [x] Explain why loops exist and how they eliminate code duplication
- [x] Write a valid `for` loop and explain its three header components
- [x] Use non-integer iterators (`float`, `char`) in loop headers
- [x] Recognize and fix infinite loop traps
- [x] Differentiate between `i++` vs `++i` and `i--` vs `--i`
- [x] Choose between `while` and `do-while` based on minimum execution requirements
- [x] Remember the mandatory trailing semicolon `;` in `do-while` loops
- [x] Use `break` to exit loops early and understand its scope in nested loops
- [x] Use `continue` to skip specific iterations without terminating the loop

---

## Next Chapter

➡️ **[Continue to Chapter 5: Functions & Recursion](../05-Functions-and-Recursion/README.md)**
