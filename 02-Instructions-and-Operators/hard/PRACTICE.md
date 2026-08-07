# 🔴 Hard Practice Questions

> Practice workbook containing 10 advanced problems focusing on complex formula translation, bitwise operations, date extraction, math tricks, and hardware algorithms.

---

## 🎯 Learning Objectives

- Translate physical and kinematic equations ($v = \sqrt{u^2 + 2as}$) into C expressions.
- Extract individual digits and packed date components using modulo and division.
- Construct complex logical expressions for multi-variable theorems.
- Understand the distinction between bitwise (`&`, `^`) and logical (`&&`) operations.
- Apply non-conditional math rounding and bitwise XOR variable swapping.

---

## 📊 Section Metadata

- **Estimated Difficulty**: 🔴 Hard
- **Total Problems**: 10 Questions
- **Topic Focus**: Low-Level Bitwise Math, Multi-Variable Logic, Math Libraries & Embedded Concepts

---

## 📈 Progress Checklist

- [ ] 21 Microplastic Sensor ADC Scaling
- [ ] 22 Reverse a 3-Digit Number
- [ ] 23 Physics Kinematics Solver
- [ ] 24 Day/Month/Year Extraction
- [ ] 25 Boolean Vowel Detector (Lowercase)
- [ ] 26 Bitwise vs Logical AND Warning
- [ ] 27 The Triangle Inequality Theorem
- [ ] 28 Rounding up to the Nearest Multiple of 10
- [ ] 29 Bhilai Power Grid Billing
- [ ] 30 The "No 3rd Variable" Trick with XOR

---

## Question 21: Microplastic Sensor ADC Scaling

- **Difficulty**: Hard
- **Concepts Used**: Float Math, Explicit Casting, Formula Translation
- **Problem Statement**:
  An Analog-to-Digital Converter (ADC) reads a value between 0 and 1023. You need to map this reading to a voltage between 0.0V and 5.0V. Read the raw integer ADC value and print the mapped voltage.
  Formula: $\text{Voltage} = \left(\frac{\text{ADC}}{1023}\right) \times 5.0$
- **Sample Input**:
  ```text
  512
  ```
- **Sample Output**:
  ```text
  Voltage: 2.50V
  ```
- **Constraints**: Watch out for integer division destroying the fraction!
- **Hints**:
  - *Hint 1*: `512 / 1023` evaluates to 0.
  - *Hint 2*: You must force floating-point math.
  - *Hint 3*: `voltage = (adc_value / 1023.0) * 5.0;`

---

## Question 22: Reverse a 3-Digit Number

- **Difficulty**: Hard
- **Concepts Used**: Chained Modulo and Division
- **Problem Statement**:
  Take a 3-digit integer from the user (e.g., 456). Extract its individual digits mathematically, reverse their order, and recombine them into a new integer. Print the new integer.
- **Sample Input**:
  ```text
  456
  ```
- **Sample Output**:
  ```text
  Reversed: 654
  ```
- **Constraints**: Must be stored in an `int` variable before printing. No loops.
- **Hints**:
  - *Hint 1*: Use `% 10` to get the last digit, and `/ 10` to strip it off.
  - *Hint 2*: `d3 = num % 10; num = num / 10;`
  - *Hint 3*: Recombine using place values: `(d3 * 100) + (d2 * 10) + d1`.

---

## Question 23: Physics Kinematics Solver

- **Difficulty**: Hard
- **Concepts Used**: Precedence, Arithmetic, `<math.h>`
- **Problem Statement**:
  Calculate the final velocity ($v$) of an object using the kinematic equation: $v^2 = u^2 + 2as$.
  Read initial velocity ($u$), acceleration ($a$), and displacement ($s$) as floats. Calculate and print the final velocity $v$.
- **Sample Input**:
  ```text
  10.0
  9.8
  50.0
  ```
- **Sample Output**:
  ```text
  Final Velocity: 32.86
  ```
- **Constraints**: Use `pow()` and `sqrt()` from `<math.h>`.
- **Hints**:
  - *Hint 1*: $v = \sqrt{u^2 + 2as}$
  - *Hint 2*: `sqrt()` takes a single double argument.
  - *Hint 3*: `v = sqrt(pow(u, 2) + (2 * a * s));`

---

## Question 24: Day/Month/Year Extraction

- **Difficulty**: Hard
- **Concepts Used**: Modulo/Division Logic
- **Problem Statement**:
  Dates are often stored in embedded systems as a single continuous 8-digit integer to save space, formatted as DDMMYYYY. Read a date in this format, extract the Day, Month, and Year mathematically, and print them separated by hyphens.
- **Sample Input**:
  ```text
  25122026
  ```
- **Sample Output**:
  ```text
  Date: 25-12-2026
  ```
- **Constraints**: Use arithmetic operators only.
- **Hints**:
  - *Hint 1*: The last 4 digits represent the year. How do you get the last 4 digits of a number?
  - *Hint 2*: `year = date % 10000;` and then strip it: `date = date / 10000;`
  - *Hint 3*: The next 2 digits are the month (`date % 100`), and the remaining is the day (`date / 100`).

---

## Question 25: Boolean Vowel Detector (Lowercase)

- **Difficulty**: Hard
- **Concepts Used**: ASCII bounds, Logical Operators
- **Problem Statement**:
  Read a single lowercase character. Write a pure logical expression that evaluates to 1 if the character is a vowel ('a', 'e', 'i', 'o', 'u') and 0 otherwise.
- **Sample Input**:
  ```text
  e
  ```
- **Sample Output**:
  ```text
  Is Vowel: 1
  ```
- **Constraints**: No `if` statements.
- **Hints**:
  - *Hint 1*: Use the Logical OR (`||`) operator to chain conditions.
  - *Hint 2*: You must check equality for every vowel individually.
  - *Hint 3*: `ch == 'a' || ch == 'e' || ch == 'i' ...`

---

## Question 26: Bitwise vs Logical AND Warning

- **Difficulty**: Hard
- **Concepts Used**: `&` vs `&&`
- **Problem Statement**:
  In C, `&&` is Logical AND, while `&` is Bitwise AND. Write a program that reads two inputs: 5 and 2. Evaluate and print the result of `5 && 2` versus `5 & 2`.
- **Sample Input**: *(None, hardcode 5 and 2)*
- **Sample Output**:
  ```text
  Logical AND (&&): 1
  Bitwise AND (&): 0
  ```
- **Constraints**: Explain mentally why the output happens (Logical looks at truthiness: True AND True = 1. Bitwise compares binary 101 and 010 = 000).
- **Hints**:
  - *Hint 1*: 5 and 2 are both non-zero, hence both are "True".
  - *Hint 2*: `True && True` results in 1.
  - *Hint 3*: Binary 101 & 010 share no common 1-bits, resulting in 0.

---

## Question 27: The Triangle Inequality Theorem

- **Difficulty**: Hard
- **Concepts Used**: Logical Expressions
- **Problem Statement**:
  A valid triangle can only be formed if the sum of any two sides is strictly greater than the third side. Read three integer sides: A, B, and C. Print `1` if they form a valid triangle, and `0` if they do not.
- **Sample Input**:
  ```text
  7
  10
  5
  ```
- **Sample Output**:
  ```text
  Valid Triangle: 1
  ```
- **Constraints**: All three conditions must be true simultaneously. No conditionals.
- **Hints**:
  - *Hint 1*: Check $A+B>C$, $B+C>A$, and $A+C>B$.
  - *Hint 2*: Chain them using `&&`.
  - *Hint 3*: `printf("%d", (a+b>c) && (b+c>a) && (a+c>b));`

---

## Question 28: Rounding up to the Nearest Multiple of 10

- **Difficulty**: Hard
- **Concepts Used**: Advanced Integer Math
- **Problem Statement**:
  Read an integer. Without using conditional statements, round this integer up to the nearest multiple of 10. (e.g., 42 becomes 50, 48 becomes 50, 50 becomes 50).
- **Sample Input**:
  ```text
  43
  ```
- **Sample Output**:
  ```text
  Rounded: 50
  ```
- **Constraints**: No conditionals, loops, or library functions. Pure arithmetic.
- **Hints**:
  - *Hint 1*: If you add 9 to the number and then perform integer division by 10, what happens?
  - *Hint 2*: `(43 + 9) / 10 = 52 / 10 = 5`.
  - *Hint 3*: Multiply the result back by 10. `((num + 9) / 10) * 10`.

---

## Question 29: Bhilai Power Grid Billing

- **Difficulty**: Hard
- **Concepts Used**: Complex sequential expressions
- **Problem Statement**:
  A household consumes a certain number of electricity units. The base rate is ₹5.50 per unit. There is a fixed meter charge of ₹150. A government subsidy covers 20% of the base unit cost (excluding the meter charge). Calculate the final payable amount.
- **Sample Input**:
  ```text
  200
  ```
- **Sample Output**:
  ```text
  Final Bill: 1030.00
  ```
- **Constraints**: Use floats for precision.
- **Hints**:
  - *Hint 1*: `base_cost = units * 5.50;`
  - *Hint 2*: `subsidy = base_cost * 0.20;`
  - *Hint 3*: `final_bill = (base_cost - subsidy) + 150.0;`

---

## Question 30: The "No 3rd Variable" Trick with XOR

- **Difficulty**: Hard
- **Concepts Used**: Bitwise XOR (`^`), Assignment
- **Problem Statement**:
  Earlier, you swapped variables using addition and subtraction. Now, swap two integers A and B using the Bitwise XOR operator (`^`). This is the most hardware-efficient swapping algorithm used in embedded systems.
- **Sample Input**:
  ```text
  10
  20
  ```
- **Sample Output**:
  ```text
  A: 20, B: 10
  ```
- **Constraints**: No temporary variable. Use only `^` and `=`.
- **Hints**:
  - *Hint 1*: XORing a number with itself results in 0. XORing with 0 returns the number.
  - *Hint 2*: Store the combined XOR state in A.
  - *Hint 3*: `A = A ^ B; B = A ^ B; A = A ^ B;`
