# 📘 Chapter 3: Conditional Statements

> Master decision-making in C using `if`, `if-else`, `else-if` ladders, ternary operators (`? :`), and `switch-case` statements.

---

## 📌 Chapter Overview

Conditional statements allow a program to make decisions based on conditions. Instead of executing every statement sequentially from top to bottom, the program evaluates a condition and executes different blocks of code depending on whether the condition evaluates to **true** or **false**.

This chapter covers essential decision-making constructs, Boolean evaluation rules, curly brace best practices, common comparison traps (`=` vs `==`), fall-through mechanics, and multi-way branch selection using `switch` statements.

---

## ℹ️ Chapter Information

| Metadata | Details |
| :--- | :--- |
| **Difficulty** | 🟢 Beginner |
| **Prerequisite** | [Chapter 2 – Instructions & Operators](../02-Instructions-and-Operators/README.md) |
| **Estimated Time** | ~2–3 Hours |
| **Practice Directories** | [`easy/`](./easy/), [`medium/`](./medium/), [`hard/`](./hard/) |
| **Visual Cheat Sheet** | Included ([View Image](./images/C%20programming%20Visual%20Notes_watermark_page-0003.jpg)) |

---

## 📚 Topics Covered

- [x] Introduction to Conditional Statements
- [x] Real-Life Decision Making
- [x] Types of Conditional Statements (`if-else` vs `switch`)
- [x] The `if` Statement & Execution Flow
- [x] The `if-else` Statement
- [x] The `else-if` Ladder
- [x] Nested `if` Statements
- [x] Curly Braces `{ }` Rules & Industry Best Practices
- [x] Common Beginner Mistake: Multi-line `if` without `{}`
- [x] The Assignment Trap (`if (x = 1)` vs `if (x == 1)`)
- [x] Ternary Operator (`? :`) Syntax & Semicolon Rules
- [x] The `switch` Statement Mechanics
- [x] Allowed Case Constant Types (`int`, `char`)
- [x] The `break` Statement & Fall-Through Trap
- [x] The `default` Case & Switch Properties

---

## 🎨 Visual Cheat Sheet

![Chapter 3 Cheat Sheet](./images/C%20programming%20Visual%20Notes_watermark_page-0003.jpg)

> 💡 **Note**: The complete master visual notes PDF is available in the repository root: [`C-Programming-Visual-Notes.pdf`](../C-Programming-Visual-Notes.pdf).

---

## 📖 Complete Chapter Theory

### 1. Introduction to Decision Making

Conditional statements allow a program to make decisions based on conditions. Instead of executing every statement sequentially from top to bottom, the program evaluates a condition and executes different blocks of code depending on whether the condition evaluates to **true** (non-zero) or **false** (zero).

#### Real-Life Examples:
- **Grade Calculation**: If `marks > 90` ➜ Grade `A+`
- **Weather Alert**: If `weather` is dark ➜ Print `"Night"`
- **Voting Eligibility**: If `age >= 18` ➜ Eligible to vote

---

### 2. Types of Conditional Statements

C provides two primary decision-making constructs:
1. **`if-else` Statements**: Used for range checking and complex Boolean expressions (`&&`, `||`, `!`).
2. **`switch` Statements**: Used for multi-way branching against fixed discrete constant values (`int` or `char`).

---

### 3. The `if` Statement

The `if` statement executes a block of code **only** when its condition evaluates to true.

#### Syntax:
```c
if (condition)
{
    // Statements executed if condition is true (non-zero)
}
```

#### Execution Flow:
```text
      Condition True
            ↓
    Execute if block
            ↓
      Condition False
            ↓
     Skip if block
```

---

### 4. The `if-else` Statement

Used when one block of code should execute if the condition is **true**, and an alternative block should execute when it is **false**.

#### Syntax:
```c
if (condition)
{
    // True block — executes if condition is non-zero (True)
}
else
{
    // False block — executes if condition is 0 (False)
}
```

---

### 5. The `else-if` Ladder

Used when multiple mutually exclusive conditions must be checked sequentially.

#### Syntax:
```c
if (condition1)
{
    // Code block 1
}
else if (condition2)
{
    // Code block 2
}
else if (condition3)
{
    // Code block 3
}
else
{
    // Default block — executes if ALL conditions above are false
}
```

#### Execution Order:
1. Check the first condition (`condition1`).
2. If false, move down and check `condition2`.
3. Continue down the ladder until one condition evaluates to true.
4. If none of the conditions are true, execute the final `else` block (if present).

---

### 6. Curly Braces `{ }` Rules & Best Practices

Curly braces `{}` define the block of code belonging to an `if`, `else if`, or `else` branch.

#### Example:
```c
if (age >= 18)
{
    printf("Eligible");
}
```

#### The Single-Statement Rule:
If an `if` or `else` branch contains **only one statement**, curly braces are technically optional:
```c
if (age >= 18)
    printf("Eligible");
```

> 🌟 **Best Practice**: **Always use curly braces `{}`**, even for single-line statements!
> - **Better Readability**: Makes code boundaries explicit.
> - **Easier Maintenance**: Adding a second line later won't introduce hidden bugs.
> - **Prevents Mistakes**: Avoids unintended execution traps.
> - **Industry Standard**: Required by standard corporate style guides (Google, MISRA C).

#### ⚠️ Common Beginner Mistake:
```c
if (condition)
    printf("Hello\n");
    printf("World\n");
```
- **What happens**: Only `printf("Hello\n");` belongs to the `if`.
- **The Bug**: `printf("World\n");` is outside the `if` block and will **always execute**, regardless of whether the condition is true or false.

---

### 7. The Assignment Inside `if` Trap ⚠️

One of the most common interview traps and bug sources in C programming!

#### Trap Example:
```c
int x = 2;

if (x = 1)
{
    printf("x is equal to 1");
}
else
{
    printf("x is not equal to 1");
}
```

#### Expected vs Actual Output:
- **Beginner expectation**: Prints `"x is not equal to 1"` (since `x` was `2`).
- **Actual Output**: Prints **`"x is equal to 1"`**!

#### Why does this happen?
1. `x = 1` uses the **assignment operator `=`**, not the equality operator `==`.
2. It assigns `1` into variable `x`.
3. The assigned value (`1`) becomes the result of the expression inside `if(...)`.
4. In C, any non-zero value evaluates to **True**.
5. Since `1` is non-zero, the `if` condition succeeds and executes the True branch!

#### Correct Comparison Syntax:
```c
if (x == 1)    // Use '==' for equality comparison
{
    printf("x is equal to 1");
}
```

> 💡 **Golden Rule**: Use `==` for **comparison**. Use `=` only for **assignment**.

---

### 8. The Ternary Operator (`? :`)

The ternary operator is a shorthand inline syntax for simple `if-else` decisions.

#### Syntax:
```c
condition ? expression_if_true : expression_if_false;
```

#### Example:
```c
(age >= 18) ? printf("Adult") : printf("Minor");
```

#### Semicolon Rule:
- ✅ **Correct**: `condition ? printf("Yes") : printf("No");`
- ❌ **Incorrect**: `condition ? printf("Yes"); : printf("No");`

> ⚠️ The statement ends **only after the entire ternary expression** finishes. Do not place a semicolon inside the middle of a ternary operator.

---

### 9. The `switch` Statement

A `switch` statement selects one block of code to execute from many candidate cases based on the value of a single variable or expression.

#### Syntax:
```c
switch (variable)
{
    case value1:
        // Statements for value1
        break;

    case value2:
        // Statements for value2
        break;

    default:
        // Statements if no case matches
}
```

#### Allowed Case Constant Types:
`switch` cases can only evaluate **constant integral expressions**:
- **Integers**: `case 1:`, `case 42:`
- **Characters**: `case 'A':`, `case 'q':` *(since `char` is stored as an integer ASCII value)*

#### The `break` Statement & Fall-Through Trap:
The `break` statement immediately exits the `switch` block after a matching case finishes executing.

If `break` is omitted, execution **falls through** into every subsequent case, executing their statements even though their values didn't match!

#### ⚠️ Fall-Through Trap Example:
```c
int num = 3;

switch (num)
{
    case 3:
        printf("Three\n");
    case 4:
        printf("Four\n");
}
```
**Output**:
```text
Three
Four
```

#### The `default` Case:
Acts similarly to the final `else` block in an `else-if` ladder. It executes when none of the specified `case` values match the variable. A `break` after `default` is generally optional if it is placed at the end of the `switch`.

#### Key Properties of `switch`:
1. `case` statements can appear in any order.
2. Nested `switch` statements are allowed.
3. `default` is optional but strongly recommended for safety.
4. Every case should normally terminate with a `break` unless fall-through is intentional.

---

### 10. Construct Comparison Summary

| Construct | Syntax Example | Best Used For |
| :--- | :--- | :--- |
| **`if`** | `if (x > 0)` | Single threshold checks |
| **`if-else`** | `if (x % 2 == 0) ... else ...` | Binary choice (Either/Or) |
| **`else-if`** | `if (m >= 90) ... else if (m >= 80)` | Continuous numeric range grading |
| **Ternary (`? :`)** | `max = (a > b) ? a : b;` | Compact inline assignments |
| **`switch-case`** | `switch (ch) { case 'A': ... break; }` | Fixed discrete value options |

---

## ⚡ Syntax Quick Reference

### `if` Statement
```c
if (condition)
{
    // Code block
}
```

### `if-else` Statement
```c
if (condition)
{
    // True block
}
else
{
    // False block
}
```

### `else-if` Ladder
```c
if (condition1)
{
    // Block 1
}
else if (condition2)
{
    // Block 2
}
else
{
    // Default block
}
```

### Ternary Operator (`? :`)
```c
condition ? true_statement : false_statement;
```

### `switch` Statement
```c
switch (variable)
{
    case value1:
        // Code
        break;
    case value2:
        // Code
        break;
    default:
        // Default code
}
```

---

## 📂 Practice Programs

Access the practice problem folders directly by clicking on the links below:

| Difficulty Level | Folder Link | Description |
| :--- | :--- | :--- |
| 🟢 **Easy** | 📂 **[Browse Easy Programs](./easy/)** | Fundamental decision-making problems covering basic `if-else`, parity checks, and ternary logic. |
| 🟡 **Medium** | 📂 **[Browse Medium Programs](./medium/)** | Intermediate challenges covering `else-if` ladders, grade evaluations, leap year checks, and `switch-case` menus. |
| 🔴 **Hard** | 📂 **[Browse Hard Programs](./hard/)** | Advanced problems dealing with nested conditions, state machines, billing tiers, and complex validation rules. |

---

## 💡 Key Takeaways

- **Purpose**: Conditional statements enable dynamic decision-making in programs.
- **Two Constructs**: Use `if-else` for continuous ranges/complex conditions and `switch` for fixed discrete values.
- **Braces Best Practice**: Always wrap blocks in `{}` for clarity, safety, and maintainability.
- **Assignment Trap**: Never confuse `=` (stores a value) with `==` (compares equality). `if(x = 1)` is a classic bug!
- **Ternary Operator**: Compact inline alternative for simple `if-else` expressions.
- **Switch Case Constants**: `switch` accepts only integer or character constant expressions.
- **Fall-Through Hazard**: Always terminate switch cases with `break` to prevent unwanted cascading executions.
- **Default Branch**: Use `default` in `switch` statements to catch unmatched inputs safely.

---

## ✅ Chapter Summary

After completing this chapter, you should be able to:

- [x] Differentiate between the three main types of instructions and decision structures
- [x] Declare and construct valid `if`, `if-else`, and `else-if` ladder statements
- [x] Avoid single-statement brace traps and enforce `{}` best practices
- [x] Identify and fix assignment traps (`if (x = 1)`)
- [x] Use the ternary operator (`? :`) for concise conditional formatting
- [x] Construct `switch-case` blocks with proper `break` and `default` statements
- [x] Prevent fall-through bugs in `switch` statements
- [x] Recognize common decision-making patterns in C

---

## Next Chapter

➡️ **[Continue to Chapter 4: Loop Control Instructions](../04-Loop-Control-Instructions/README.md)**
