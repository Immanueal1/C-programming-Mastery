# 🟡 Medium Practice Questions

> Practice workbook containing 10 intermediate problems focusing on arithmetic expressions, precedence ladders, logical combinations, and variable swaps.

---

## 🎯 Learning Objectives

- Apply BODMAS and grouping parentheses in multi-variable calculations.
- Construct multi-condition boolean checks (`&&`, `||`, `!`) without `if-else`.
- Understand operator associativity (Left-to-Right for arithmetic, Right-to-Left for assignment).
- Perform type casting to prevent integer division truncation in percentage formulas.
- Execute arithmetic swaps and time conversions cleanly.

---

## 📊 Section Metadata

- **Estimated Difficulty**: 🟡 Medium
- **Total Problems**: 10 Questions
- **Topic Focus**: Complex Arithmetic, Logical Expressions, Associativity & Type Casting

---

## 📈 Progress Checklist

- [ ] 11 Equivalent Resistance (Parallel & Series)
- [ ] 12 Digital Cutoff Evaluator
- [ ] 13 The Associativity Test
- [ ] 14 Powerbuilding Calorie Macros
- [ ] 15 Leap Year Boolean Logic
- [ ] 16 Swapping Without a Third Variable
- [ ] 17 Time Deconstruction
- [ ] 18 Circle Geometry
- [ ] 19 The NOT Operator (!)
- [ ] 20 Chained Assignment

---

## Question 11: Equivalent Resistance (Parallel & Series)

- **Difficulty**: Medium
- **Concepts Used**: Precedence, Float Arithmetic
- **Problem Statement**:
  You are prototyping a circuit. Read the resistance values of two resistors, $R_1$ and $R_2$ (floats). Calculate their equivalent resistance in series ($R_{eq} = R_1 + R_2$) and in parallel ($R_{eq} = \frac{R_1 \times R_2}{R_1 + R_2}$).
- **Sample Input**:
  ```text
  10.0
  40.0
  ```
- **Sample Output**:
  ```text
  Series Resistance: 50.00
  Parallel Resistance: 8.00
  ```
- **Constraints**: Enforce proper BODMAS/Precedence using parentheses.
- **Hints**:
  - *Hint 1*: The numerator and denominator for the parallel formula must be grouped.
  - *Hint 2*: If you write `R1 * R2 / R1 + R2`, associativity processes it left-to-right, yielding the wrong answer.
  - *Hint 3*: `(R1 * R2) / (R1 + R2)`

---

## Question 12: Digital Cutoff Evaluator

- **Difficulty**: Medium
- **Concepts Used**: Relational & Logical Combinations
- **Problem Statement**:
  A candidate passes the TCS Digital initial screening if their numerical score is $\ge 80$, coding score is $\ge 85$, AND their logic score is strictly $> 75$. Read these three integer scores and output `1` if eligible, or `0` if not.
- **Sample Input**:
  ```text
  82
  88
  70
  ```
- **Sample Output**:
  ```text
  Eligible: 0
  ```
- **Constraints**: No conditionals.
- **Hints**:
  - *Hint 1*: Chain three relational checks using logical AND.
  - *Hint 2*: Ensure you use `>=` vs `>` correctly based on the prompt.
  - *Hint 3*: `(num >= 80) && (code >= 85) && (logic > 75)`

---

## Question 13: The Associativity Test

- **Difficulty**: Medium
- **Concepts Used**: Left-to-Right Associativity
- **Problem Statement**:
  In C, operators of the same precedence (like `*` and `/`) are evaluated left-to-right. Write a program that calculates `120 / 4 * 2`. Print the result.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  Result: 60
  ```
- **Constraints**: Do not use parentheses in the code expression. Let C's natural associativity handle it.
- **Hints**:
  - *Hint 1*: If it evaluated right-to-left, it would be `120 / 8 = 15`.
  - *Hint 2*: Left-to-right evaluates `120 / 4` first (which is 30), then `30 * 2`.
  - *Hint 3*: `printf("%d", 120 / 4 * 2);`

---

## Question 14: Powerbuilding Calorie Macros

- **Difficulty**: Medium
- **Concepts Used**: Implicit vs Explicit Casting
- **Problem Statement**:
  You have a daily protein goal of 160 grams, but you've only consumed 95 grams so far. Calculate the percentage of your goal completed. Read the current and goal amounts as integers, but print the percentage as a precise float.
- **Sample Input**:
  ```text
  95
  160
  ```
- **Sample Output**:
  ```text
  Goal Completed: 59.38%
  ```
- **Constraints**: Input variables must be `int`. The calculation must output a precise float.
- **Hints**:
  - *Hint 1*: `(95 / 160) * 100` will result in 0 because of integer division.
  - *Hint 2*: You must explicitly cast at least one variable to float before dividing.
  - *Hint 3*: `((float)current / goal) * 100` OR multiply by `100.0` first.

---

## Question 15: Leap Year Boolean Logic

- **Difficulty**: Medium
- **Concepts Used**: Complex Logical Expressions
- **Problem Statement**:
  A year is a leap year if it is perfectly divisible by 4, EXCEPT if it is a multiple of 100 (unless it is also a multiple of 400). Read a year and print `1` if it is a leap year, and `0` otherwise.
- **Sample Input**:
  ```text
  2024
  ```
- **Sample Output**:
  ```text
  Is Leap Year: 1
  ```
- **Constraints**: Use a single logical expression. No `if-else`.
- **Hints**:
  - *Hint 1*: Use the modulo `%` operator to check divisibility.
  - *Hint 2*: The logic is: (Divisible by 4 AND Not divisible by 100) OR (Divisible by 400).
  - *Hint 3*: `(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)`

---

## Question 16: Swapping Without a Third Variable

- **Difficulty**: Medium
- **Concepts Used**: Arithmetic Assignment
- **Problem Statement**:
  Read two integers, A and B. Swap their values mathematically using only addition and subtraction (`+`, `-`). Print their values after swapping.
- **Sample Input**:
  ```text
  15
  25
  ```
- **Sample Output**:
  ```text
  A: 25, B: 15
  ```
- **Constraints**: You cannot declare a temp variable.
- **Hints**:
  - *Hint 1*: Store the total sum in A.
  - *Hint 2*: To get the new B, subtract the original B from the new A.
  - *Hint 3*: `A = A + B; B = A - B; A = A - B;`

---

## Question 17: Time Deconstruction

- **Difficulty**: Medium
- **Concepts Used**: Modulo and Integer Division
- **Problem Statement**:
  A process running on a microcontroller takes a raw input of total seconds. Convert this into standard Hours : Minutes : Seconds format.
- **Sample Input**:
  ```text
  3665
  ```
- **Sample Output**:
  ```text
  1 : 1 : 5
  ```
- **Constraints**: Use division and modulo operators.
- **Hints**:
  - *Hint 1*: 1 Hour = 3600 seconds. `hours = total / 3600`.
  - *Hint 2*: The remaining seconds after hours are extracted is `total % 3600`.
  - *Hint 3*: `minutes = remaining / 60;` and `seconds = remaining % 60;`.

---

## Question 18: Circle Geometry

- **Difficulty**: Medium
- **Concepts Used**: `pow()`, Precedence
- **Problem Statement**:
  Calculate the area of a circle. Read the radius as a float. Use `pow()` from `<math.h>` to square the radius, and 3.14159 for Pi.
- **Sample Input**:
  ```text
  2.5
  ```
- **Sample Output**:
  ```text
  Area: 19.63
  ```
- **Constraints**: Output formatted to 2 decimal places.
- **Hints**:
  - *Hint 1*: The formula is $\text{Area} = \pi \times r^2$.
  - *Hint 2*: `pow(r, 2.0)` computes the square.
  - *Hint 3*: `area = 3.14159 * pow(r, 2.0);`

---

## Question 19: The NOT Operator (!)

- **Difficulty**: Medium
- **Concepts Used**: Logical NOT
- **Problem Statement**:
  Read an integer. We want to check if the integer is exactly 0. However, you are strictly forbidden from using the equality operator (`==`). Print `1` if the number is zero, and `0` otherwise.
- **Sample Input**:
  ```text
  0
  ```
- **Sample Output**:
  ```text
  Is Zero: 1
  ```
- **Constraints**: Do not use `==`. Use the logical NOT operator `!`.
- **Hints**:
  - *Hint 1*: In C, any non-zero number is True, and 0 is False.
  - *Hint 2*: `!True` becomes 0, and `!False` becomes 1.
  - *Hint 3*: `printf("%d", !num);`

---

## Question 20: Chained Assignment

- **Difficulty**: Medium
- **Concepts Used**: Right-to-Left Associativity of `=`
- **Problem Statement**:
  Demonstrate how C handles chained assignments. Declare three integers x, y, and z. Assign them all the value 50 in a single statement. Print the sum of the three variables.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  Sum: 150
  ```
- **Constraints**: Do not initialize them on three separate lines.
- **Hints**:
  - *Hint 1*: The assignment operator `=` associates from right to left.
  - *Hint 2*: `x = y = z = 50;`
  - *Hint 3*: This works because `z = 50` evaluates to 50, which is then passed to `y`, and so on.
