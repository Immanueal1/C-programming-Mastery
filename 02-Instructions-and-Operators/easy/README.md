# 🟢 Chapter 2: Easy Practice Problems

> Beginner-friendly C programming challenges focusing on arithmetic instructions, integer division, type casting, relational comparisons, and precedence rules.

---

## 📌 Short Description

This folder contains 10 fundamental practice problems designed to build core proficiency with basic arithmetic expressions, integer division drops, modulo remainders, bitwise XOR traps, explicit casting, and Boolean logical evaluations without control structures.

---

## 📊 Section Metadata

- **Estimated Difficulty**: 🟢 Beginner
- **Total Problems**: 10 Questions
- **Topic Focus**: Instructions, Arithmetic, Precedence & Boolean Expressions

---

## 📚 Topics Covered

- [x] Integer Division `/` and Modulo Remainder `%` Operations
- [x] Boolean Logic Outputs (`1` and `0`) without Conditional Statements
- [x] Implicit Type Promotion Rules (`int` / `float` ➜ `float`)
- [x] Bitwise XOR (`^`) Operator vs Exponentiation via `pow()` (`<math.h>`)
- [x] Explicit Type Casting `(int)` for Fractional Part Extraction
- [x] 2-Digit Range Validation with Logical AND (`&&`)
- [x] Numerator-Dependent Negative Modulo Arithmetic
- [x] Left Hand Side (LHS) Rules & Compound Assignment (`+=`)
- [x] Training Eligibility Check using Logical OR (`||`)
- [x] Operator Precedence (`*` over `+`) & Parentheses Overrides

---

## 🎯 Learning Objectives

- Apply integer division `/` and remainder `%` to split sets.
- Understand boolean logic outputs (`1` and `0`) without control statements.
- Differentiate between bitwise XOR (`^`) and exponentiation via `pow()`.
- Use explicit type casting `(int)` to extract fractional components.
- Apply logical operators (`&&`, `||`) and precedence rules.

---

## 📈 Progress Checklist

- [ ] 01 The Tutor's Batch Split
- [ ] 02 Boolean Even/Odd Detector
- [ ] 03 Implicit Type Promotion
- [ ] 04 The XOR Trap
- [ ] 05 Explicit Fraction Extraction
- [ ] 06 Validating a 2-Digit Number
- [ ] 07 The Negative Modulo
- [ ] 08 Left Hand Side (LHS) Assignment
- [ ] 09 Boolean OR Check
- [ ] 10 Operator Precedence Basics

---

## 📁 Folder Contents

| File | Title | Concepts Used |
| :--- | :--- | :--- |
| [`01_the_tutors_batch_split.c`](./01_the_tutors_batch_split.c) | The Tutor's Batch Split | Arithmetic Instructions, Integer Division |
| [`02_boolean_even_odd_detector.c`](./02_boolean_even_odd_detector.c) | Boolean Even/Odd Detector | Relational Operators, Modulo (`%`), True/False in C |
| [`03_implicit_type_promotion.c`](./03_implicit_type_promotion.c) | Implicit Type Promotion | Implicit Type Conversion |
| [`04_the_xor_trap.c`](./04_the_xor_trap.c) | The XOR Trap | Bitwise XOR vs `pow()`, `<math.h>` |
| [`05_explicit_fraction_extraction.c`](./05_explicit_fraction_extraction.c) | Explicit Fraction Extraction | Explicit Type Casting |
| [`06_validating_a_2_digit_number.c`](./06_validating_a_2_digit_number.c) | Validating a 2-Digit Number | Logical Operators (`&&`) |
| [`07_the_negative_modulo.c`](./07_the_negative_modulo.c) | The Negative Modulo | Modulo Arithmetic Rules |
| [`08_left_hand_side_lhs_assignment.c`](./08_left_hand_side_lhs_assignment.c) | Left Hand Side (LHS) Assignment | Assignment Operator, LHS Rule |
| [`09_boolean_or_check.c`](./09_boolean_or_check.c) | Boolean OR Check | Logical OR (`||`) |
| [`10_operator_precedence_basics.c`](./10_operator_precedence_basics.c) | Operator Precedence Basics | Precedence and Associativity |

---

## 📝 Practice Questions

### Question 01: The Tutor's Batch Split

- **Difficulty**: Easy
- **Concepts Used**: Arithmetic Instructions, Integer Division
- **Problem Statement**:
  You have a total number of competitive exam students and want to divide them equally into a specific number of batches. Write a program that calculates how many students will be in each batch and how many students will be left out.
- **Sample Input**:
  ```text
  Total Students: 45
  Number of Batches: 4
  ```
- **Sample Output**:
  ```text
  Students per batch: 11
  Students remaining: 1
  ```
- **Constraints**: Use only integer division and the modulo operator.
- **Hints**:
  - *Hint 1*: The division operator `/` between two integers drops the decimal.
  - *Hint 2*: The modulo operator `%` gives you the remainder of the division.
  - *Hint 3*: `per_batch = total / batches;` and `remaining = total % batches;`

---

### Question 02: Boolean Even/Odd Detector

- **Difficulty**: Easy
- **Concepts Used**: Relational Operators, Modulo (`%`), True/False in C
- **Problem Statement**:
  Without using an `if-else` statement, write a program that takes an integer input and prints `1` if the number is even, and `0` if the number is odd.
- **Sample Input**:
  ```text
  Number: 14
  ```
- **Sample Output**:
  ```text
  Is Even: 1
  ```
- **Constraints**: Do NOT use conditional statements. Directly print the result of a relational expression.
- **Hints**:
  - *Hint 1*: In C, a relational expression evaluates to `1` (True) or `0` (False).
  - *Hint 2*: An even number leaves a remainder of `0` when divided by `2`.
  - *Hint 3*: `printf("Is Even: %d", num % 2 == 0);`

---

### Question 03: Implicit Type Promotion

- **Difficulty**: Easy
- **Concepts Used**: Implicit Type Conversion
- **Problem Statement**:
  Calculate the average of three integer test scores. The total sum should be divided in a way that yields a precise floating-point average, relying purely on implicit type conversion.
- **Sample Input**:
  ```text
  85
  90
  92
  ```
- **Sample Output**:
  ```text
  Average: 89.00
  ```
- **Constraints**: Do not use `(float)` explicit casting. Rely on C's automatic promotion rules.
- **Hints**:
  - *Hint 1*: `int / int` results in an `int`.
  - *Hint 2*: `int / float` results in a `float`.
  - *Hint 3*: Divide the sum by `3.0` instead of `3`.

---

### Question 04: The XOR Trap

- **Difficulty**: Easy
- **Concepts Used**: Bitwise XOR vs `pow()`, `<math.h>`
- **Problem Statement**:
  A junior developer tried to calculate $5^3$ by writing `5 ^ 3`. Write a program that demonstrates the incorrect output of `5 ^ 3`, and then correctly calculates $5^3$ using the proper function.
- **Sample Input**: *(No user input required)*
- **Sample Output**:
  ```text
  Using ^ operator: 6
  Using pow() function: 125.00
  ```
- **Constraints**: You must `#include <math.h>`.
- **Hints**:
  - *Hint 1*: `^` is the Bitwise XOR operator in C, not the power operator.
  - *Hint 2*: The `pow()` function takes two double arguments and returns a double.
  - *Hint 3*: `pow(5.0, 3.0)` is the correct approach.

---

### Question 05: Explicit Fraction Extraction

- **Difficulty**: Easy
- **Concepts Used**: Explicit Type Casting
- **Problem Statement**:
  Given a floating-point number, extract and print only its fractional part using explicit type conversion.
- **Sample Input**:
  ```text
  14.567
  ```
- **Sample Output**:
  ```text
  Fractional part: 0.567000
  ```
- **Constraints**: Use `(int)` casting.
- **Hints**:
  - *Hint 1*: How can you get the integer part of the float?
  - *Hint 2*: Subtract the integer part from the original float.
  - *Hint 3*: `fraction = num - (int)num;`

---

### Question 06: Validating a 2-Digit Number

- **Difficulty**: Easy
- **Concepts Used**: Logical Operators (`&&`)
- **Problem Statement**:
  Given an integer, verify if it is a strictly positive 2-digit number (between 10 and 99, inclusive). Print `1` for True and `0` for False.
- **Sample Input**:
  ```text
  45
  ```
- **Sample Output**:
  ```text
  Is 2-digit: 1
  ```
- **Constraints**: No `if` statements. Print the evaluation directly.
- **Hints**:
  - *Hint 1*: The number must be greater than 9 AND less than 100.
  - *Hint 2*: Use the Logical AND operator.
  - *Hint 3*: `printf("%d", n > 9 && n < 100);`

---

### Question 07: The Negative Modulo

- **Difficulty**: Easy
- **Concepts Used**: Modulo Arithmetic Rules
- **Problem Statement**:
  In C, the modulo operator has a specific rule regarding negative numbers. Write a program that divides -17 by 5 and prints the remainder to demonstrate this rule.
- **Sample Input**: *(No user input required)*
- **Sample Output**:
  ```text
  Remainder of -17 % 5 is -2
  ```
- **Constraints**: Calculate this directly in the `printf` statement.
- **Hints**:
  - *Hint 1*: The sign of the modulo result depends solely on the numerator.
  - *Hint 2*: `-17 / 5` is `-3`. The remainder is what is left.
  - *Hint 3*: `printf("%d", -17 % 5);`

---

### Question 08: Left Hand Side (LHS) Assignment

- **Difficulty**: Easy
- **Concepts Used**: Assignment Operator, LHS Rule
- **Problem Statement**:
  You have variables `a = 5` and `b = 10`. You want to update `a` to store the sum of `a` and `b`. Write a program using the compound assignment operator to achieve this.
- **Sample Input**: *(No user input required)*
- **Sample Output**:
  ```text
  Updated a: 15
  ```
- **Constraints**: Do not write `a = a + b;`.
- **Hints**:
  - *Hint 1*: Compound operators combine arithmetic and assignment.
  - *Hint 2*: The assignment operator evaluates from right to left.
  - *Hint 3*: Use `a += b;`.

---

### Question 09: Boolean OR Check

- **Difficulty**: Easy
- **Concepts Used**: Logical OR (`||`)
- **Problem Statement**:
  You are free to train today if it is Sunday (represented by 1) OR if it is a Holiday (represented by 1). Read two integers (1 or 0) and print `1` if you can train, and `0` otherwise.
- **Sample Input**:
  ```text
  0
  1
  ```
- **Sample Output**:
  ```text
  Can Train: 1
  ```
- **Constraints**: Direct logical expression printing.
- **Hints**:
  - *Hint 1*: You only need one of the conditions to be true.
  - *Hint 2*: Use the `||` operator.
  - *Hint 3*: `isSunday || isHoliday`

---

### Question 10: Operator Precedence Basics

- **Difficulty**: Easy
- **Concepts Used**: Precedence and Associativity
- **Problem Statement**:
  Write a program that evaluates and prints the result of the expression $4 + 9 \times 10$. Then, modify the expression using parentheses to force the addition to happen first, and print the new result.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  Default Precedence: 94
  Modified Precedence: 130
  ```
- **Constraints**: Print both outputs using arithmetic expressions inside `printf`.
- **Hints**:
  - *Hint 1*: `*` has higher precedence than `+`.
  - *Hint 2*: Parentheses `()` override default precedence.
  - *Hint 3*: `4 + 9 * 10` vs `(4 + 9) * 10`.

---

## 🔗 Navigation Links

- 🟡 **[Proceed to Medium Practice (`../medium/`)](../medium/)**
- 🔴 **[Proceed to Hard Practice (`../hard/`)](../hard/)**
- 🏠 **[Return to Chapter 2 Overview (`../README.md`)](../README.md)**
