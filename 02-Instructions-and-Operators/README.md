# 📘 Chapter 2: Instructions & Operators

> Master how C evaluates expressions, manipulates variables, applies operator precedence, performs type conversions, and processes logical conditions.

---

## Chapter Overview

After learning how to declare variables and perform basic input/output, the next step is understanding **instructions** and **operators**.

**Instructions** tell the computer what action to perform. **Operators** perform calculations, comparisons, and logical decisions inside those instructions. This chapter covers the mechanics of arithmetic instructions, type conversion rules, relational and logical comparisons, operator precedence, and shorthand assignment operators.

---

## Chapter Information

| Metadata | Details |
| :--- | :--- |
| **Difficulty** | 🟢 Beginner |
| **Prerequisite** | [Chapter 1 – Basics & Variables](../01-Basics-and-Variables/README.md) |
| **Estimated Time** | ~2–3 Hours |
| **Programs Count** | 15 Practice Problems |
| **Visual Cheat Sheet** | Included ([View Image](./images/C%20programming%20Visual%20Notes_watermark_page-0002.jpg)) |

---

## Topics Covered

- [x] Types of Instructions
- [x] Type Declaration Rules
- [x] Arithmetic Instructions
- [x] Arithmetic Rules & Quirks
- [x] The Left-Hand Side (LHS) Rule
- [x] Multiplication Rules
- [x] Power Operator Trap (`^` vs `pow()`)
- [x] Modulo Operator (`%`)
- [x] Type Conversion (Implicit & Explicit)
- [x] Relational Operators
- [x] Logical Operators
- [x] True vs False in C
- [x] Operator Precedence
- [x] Operator Associativity
- [x] Assignment Shorthand Operators
- [x] Common Practice Patterns

---

## 📖 Chapter Theory

### 1. Types of Instructions & Declarations

A C program is mainly built from three types of instructions:

| Type | Purpose | Example |
| :--- | :--- | :--- |
| **Type Declaration** | Declaring variables before using them | `int age; float salary; char grade;` |
| **Arithmetic** | Performing math: `+`, `-`, `*`, `/`, `%` | `int sum = a + b;` |
| **Control** | Deciding program execution flow — sequence, decision (`if-else`), loop (`for`/`while`), case (`switch`) | Covered in later chapters |

> ⚠️ Variables must always be declared **before** they are used.

#### Type Declaration Rules

✅ **Valid**:
```c
int a = 22;
int b = a;
```
```c
int a, b, c;
a = b = c = 1;   // Assignment happens right to left
```
```c
int x;
int y = x;       // Using an already-declared variable is valid
```

❌ **Invalid**:
```c
int x = y = z = 4;   // Error — y and z haven't been declared yet
```
```c
char stars = '**';   // Error — a char variable stores only ONE character
```
✅ Correct version:
```c
char star = '*';
```

---

### 2. Arithmetic Instructions & Quirks

Arithmetic instructions evaluate mathematical expressions:
```c
int sum = a + b;
```

| Operator | Meaning |
| :---: | :--- |
| `+` | Addition |
| `-` | Subtraction |
| `*` | Multiplication |
| `/` | Division |
| `%` | Modulus (Remainder) |

#### The Left-Hand Side (LHS) Rule
The left-hand side of an assignment **must always be a single variable**—never an expression.

- ✅ **Correct**: `a = b + c;`
- ❌ **Incorrect**: `b + c = a;` *(Compiler error—an expression cannot receive a value)*

#### The Multiplication Trap
You can never write `bc` or `b.c` to mean "b times c"—multiplication must always be **explicit**.

| Written as | Valid? |
| :---: | :---: |
| `bc` | ❌ |
| `b.c` | ❌ |
| `b * c` | ✅ |

#### The Power Trap ⚡
Many beginners assume `b ^ c` calculates power. **It does not.** `^` is the **Bitwise XOR** operator.

```c
8 ^ 8    // Returns 0, NOT 64
```

To calculate a power, include `<math.h>` and use `pow()`:
```c
#include <math.h>
double result = pow(b, c);
```

#### The Modulo Operator (`%`) Deep Dive
`%` returns the **remainder** after integer division:
```c
7 % 3   // Output: 1
```

- **Integers Only**: Works only on integers—`1.6 % 1.0` is invalid.
- **Sign Rule**: The remainder always follows the sign of the **numerator**.

```c
-8 % 3  =  -2
 8 % -3 =   2
```

---

### 3. Type Conversion

Sometimes C automatically changes one data type into another—this is called **type conversion**.

#### Implicit Conversion (Automatic Promotion)
Performed automatically by the compiler when mixing types in an expression:

| Expression Type | Result Type | Example |
| :--- | :---: | :--- |
| `int OP int` | `int` | `2 / 3` outputs `0` (integer division discards decimal part) |
| `int OP float` | `float` | `2.0 / 3` outputs `0.666667` |
| `float OP float` | `float` | `1.5 + 2.5` outputs `4.000000` |

#### Explicit Conversion (Casting)
The programmer manually changes the data type using `(type) expression`:
```c
int a = (int) 1.999999;   // 'a' becomes 1
```

> 💡 **Key Takeaway**: C does **not** round the value during explicit casting—it simply **truncates (removes) the decimal portion**. `1.999999` becomes strictly `1`, not `2`.

---

### 4. Relational & Logical Operators

#### Relational Operators
Compare two values:

| Operator | Meaning |
| :---: | :--- |
| `==` | Equal to |
| `>` | Greater than |
| `>=` | Greater than or equal to |
| `<` | Less than |
| `<=` | Less than or equal to |
| `!=` | Not equal to |

> ⚠️ **`=` vs `==` — Don't confuse them:**
> - `=` is the **assignment operator**—it *stores* a value.
> - `==` is the **equality comparison operator**—it *checks* if two values are equal.
>
> Accidentally writing `if (x = 5)` instead of `if (x == 5)` is one of the most common bugs in C—it silently assigns `5` to `x` instead of comparing.

#### Logical Operators
Combine multiple conditions:

| Operator | Name | Behavior | Example |
| :---: | :---: | :--- | :--- |
| `&&` | AND | True only if **both** conditions are true | `a > 0 && b > 0` |
| `\|\|` | OR | True if **at least one** condition is true | `a > 0 \|\| b > 0` |
| `!` | NOT | Reverses the logical boolean result | `!(5 > 1)` ➜ `0` (False) |

#### True and False in C
C historically has no built-in Boolean keyword. Instead:
- `0` ➜ **False**
- **Any non-zero value** ➜ **True** (e.g., `1`, `2`, `-5` are all considered True)

---

### 5. Operator Precedence & Associativity

When multiple operators appear together, C follows a fixed priority order.

#### The Priority Ladder (Highest → Lowest)

| Priority | Operators | Meaning |
| :---: | :--- | :--- |
| 1 (highest) | `!` | Logical NOT |
| 2 | `*`, `/`, `%` | Multiply, Divide, Modulo |
| 3 | `+`, `-` | Addition, Subtraction |
| 4 | `<`, `<=`, `>`, `>=` | Relational Comparisons |
| 5 | `==`, `!=` | Equality Comparisons |
| 6 | `&&` | Logical AND |
| 7 | `\|\|` | Logical OR |
| 8 (lowest) | `=` | Assignment |

#### Associativity
If two operators share the **same priority** (like `*` and `/`), C evaluates them **left to right**.

**Worked Example**: `4 * 3 / 6 * 2`

| Step | Expression | Action |
| :---: | :--- | :--- |
| 1 | `4 * 3 / 6 * 2` ➜ `12 / 6 * 2` | Leftmost `*` evaluated first (`4 * 3 = 12`) |
| 2 | `12 / 6 * 2` ➜ `2 * 2` | Then `/` evaluated (`12 / 6 = 2`) |
| 3 | `2 * 2` ➜ `4` | Final `*` evaluated (`2 * 2 = 4`) |

**Result**: `4`

---

### 6. Assignment Shorthand Operators

Shorthand operators simplify updating variable values:

| Operator | Equivalent To | Example |
| :---: | :--- | :--- |
| `+=` | `a = a + b` | `a += b;` |
| `-=` | `a = a - b` | `a -= b;` |
| `*=` | `a = a * b` | `a *= b;` |
| `/=` | `a = a / b` | `a /= b;` |
| `%=` | `a = a % b` | `a %= b;` |

`a += b;` is identical in functionality to `a = a + b;`—just more concise.

---

### 7. Common Programming Patterns

#### Check if a number is Even:
```c
if (x % 2 == 0) {
    printf("Even");
}
```

#### Check if a number is a 2-Digit Number:
```c
if (x > 9 && x < 100) {
    printf("2-Digit Number");
}
```

---

## 🎨 Visual Cheat Sheet

![Chapter 2 Cheat Sheet](./images/C%20programming%20Visual%20Notes_watermark_page-0002.jpg)

> 💡 **Note**: The complete, high-resolution master visual notes PDF is available in the repository root: [`C-Programming-Visual-Notes.pdf`](../C-Programming-Visual-Notes.pdf) (or [`C programming Visual Notes_watermark.pdf`](../C%20programming%20Visual%20Notes_watermark.pdf)).

---

## ⚡ Syntax Quick Reference

### Type Declaration
```c
int a;
float b;
int a = 22, b = a;
a = b = c = 1;          // Right-to-left assignment
```

### Arithmetic Operators
```c
a + b     // Addition
a - b     // Subtraction
a * b     // Multiplication
a / b     // Division
a % b     // Modulo (integers only)
```

### Power (requires `<math.h>`)
```c
#include <math.h>
double result = pow(base, exponent);
```

### Explicit Type Casting
```c
int a = (int) 1.999999;   // Truncates decimal to 1
```

### Relational Operators
```c
a == b    // Equal to
a != b    // Not equal to
a > b     // Greater than
a < b     // Less than
a >= b    // Greater than or equal to
a <= b    // Less than or equal to
```

### Logical Operators
```c
a && b    // AND
a || b    // OR
!a        // NOT
```

### Assignment Shorthand
```c
a += b;   // a = a + b
a -= b;   // a = a - b
a *= b;   // a = a * b
a /= b;   // a = a / b
a %= b;   // a = a % b
```

### Operator Precedence Order (High → Low)
```text
!  ➜  * / %  ➜  + -  ➜  < <= > >=  ➜  == !=  ➜  &&  ➜  ||  ➜  =
```

---

## 📂 Practice Programs

### 🟢 Easy Programs

| No. | Program | Status |
| :---: | :--- | :---: |
| 01 | **Basic Arithmetic Calculator**: Perform addition, subtraction, multiplication, and division | ⬜ |
| 02 | **Modulo Remainder Finder**: Calculate integer division remainders using `%` | ⬜ |
| 03 | **Assignment Shorthand Demo**: Demonstrate `+=`, `-=`, `*=`, and `/=` operators | ⬜ |
| 04 | **Circle Area & Perimeter**: Compute area and perimeter using mathematical formulas | ⬜ |
| 05 | **Explicit Type Caster**: Convert floating-point numbers to integers using `(int)` | ⬜ |

### 🟡 Medium Programs

| No. | Program | Status |
| :---: | :--- | :---: |
| 01 | **Temperature Converter**: Convert Celsius to Fahrenheit using floating-point formulas | ⬜ |
| 02 | **In-Place Number Swap**: Swap two variables without using a temporary third variable | ⬜ |
| 03 | **Even or Odd Checker**: Test number parity using modulo logic (`x % 2 == 0`) | ⬜ |
| 04 | **Student Percentage Calculator**: Sum subject marks and calculate exact percentage | ⬜ |
| 05 | **Power Calculator**: Compare `pow()` from `<math.h>` against bitwise XOR (`^`) | ⬜ |

### 🔴 Hard Programs

| No. | Program | Status |
| :---: | :--- | :---: |
| 01 | **Operator Precedence Evaluator**: Trace multi-operator expressions using priority rules | ⬜ |
| 02 | **Two-Digit Range Validator**: Validate two-digit numbers using relational and `&&` operators | ⬜ |
| 03 | **Largest of Two Numbers**: Compare values using relational operators | ⬜ |
| 04 | **Digit Extractor**: Isolate individual digits using `% 10` and `/ 10` chaining | ⬜ |
| 05 | **Type Conversion Profiler**: Analyze implicit promotion vs explicit truncation | ⬜ |

---

## ⚠️ Common Beginner Mistakes

- **Confusing `=` with `==`**: Using `=` (assignment) instead of `==` (equality check) silently assigns values instead of comparing.
- **Using `^` for Exponentiation**: `^` is bitwise XOR in C; use `pow(base, exp)` from `<math.h>` for powers.
- **Integer Division Truncation**: `int / int` discards decimal remainders (e.g., `5 / 2` yields `2`, not `2.5`).
- **Ignoring Precedence Rules**: Assuming expressions evaluate left-to-right without accounting for operator priority.
- **Using Modulo on Floats**: Applying `%` on floating-point numbers causes compilation errors (`%` only works on integers).

---

## 💡 Key Takeaways

- The left-hand side of `=` must always be a single variable, never an expression.
- `^` is bitwise XOR, **not** power—use `pow()` from `<math.h>` for exponentiation.
- `%` only works on integers, and the result's sign follows the numerator.
- `int / int` always truncates—mix in a `float` to get a decimal result.
- Explicit casting truncates, it does not round.
- `==` compares, `=` assigns—never confuse the two.
- Operators of the same precedence resolve left to right (associativity).
- Shorthand operators (`+=`, `-=`, etc.) behave identically to full assignment expressions.

---

## 🛠️ Mini Project

### 🧾 Utility Bill & Tax Calculator Engine

Build a console-based utility calculator that reads user consumption units, applies multi-tiered rate multipliers using arithmetic operators, calculates applicable tax rates via type casting, and outputs a formatted breakdown.

- **Concepts Used**: Arithmetic operators, type conversion, relational/logical operators, assignment shorthand, format specifiers.
- **Difficulty**: 🟢 Beginner

---

## ✅ Chapter Summary

After completing this chapter, you should be able to:

- [x] Differentiate between the three types of instructions (Type Declaration, Arithmetic, Control)
- [x] Declare variables correctly following C assignment rules
- [x] Write valid arithmetic expressions
- [x] Avoid common arithmetic mistakes (Power trap `^`, Multiplication trap, LHS rule)
- [x] Understand implicit and explicit type conversion (truncation vs rounding)
- [x] Use relational and logical operators correctly
- [x] Apply operator precedence and left-to-right associativity
- [x] Use shorthand assignment operators (`+=`, `-=`, `*=`, `/=`, `%=`)
- [x] Recognize common coding patterns (Checking even numbers and two-digit ranges)

---

## Next Chapter

➡️ **[Chapter 3 – Conditional Statements](../03-Conditional-Statements/README.md)**
