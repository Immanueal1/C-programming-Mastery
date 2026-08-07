# 🟡 Medium Practice Questions

> Practice workbook containing 10 intermediate problems focusing on multi-variable logic, leap years, grade ladders, nested conditions, and switch menus.

---

## 🎯 Learning Objectives

- Chain multiple relational conditions using `&&` and `||`.
- Exploit top-down `else-if` evaluation to simplify range checks.
- Implement `switch` statements with character labels and stacked fall-through.
- Handle floating-point comparisons and precision formatting.
- Map 2D Cartesian coordinates to plane quadrants and axes.

---

## 📊 Section Metadata

- **Estimated Difficulty**: 🟡 Medium
- **Total Problems**: 10 Questions
- **Topic Focus**: Multi-Condition Logic, Switch Calculators, ASCII Ranges & Cascading Ladders

---

## 📈 Progress Checklist

- [ ] 11 Largest of Three
- [ ] 12 Digital Selection Cutoff
- [ ] 13 Leap Year Logic
- [ ] 14 Academic Tutor's Grader
- [ ] 15 The Switch Calculator
- [ ] 16 Powerbuilding BMI Category
- [ ] 17 Character Classifier
- [ ] 18 Triangle Validator
- [ ] 19 Month Days Finder
- [ ] 20 Cartesian Quadrant Checker

---

## Question 11: Largest of Three

- **Difficulty**: Medium
- **Concepts Used**: Logical AND (`&&`), `else-if`
- **Problem Statement**:
  Given three distinct integers, determine and print the largest among them.
- **Sample Input**:
  ```text
  14
  78
  32
  ```
- **Sample Output**:
  ```text
  78 is the largest.
  ```
- **Constraints**: Do not use nested `if` statements. Use logical operators to combine conditions.
- **Hints**:
  - *Hint 1*: A number is the largest if it is greater than both of the other numbers simultaneously.
  - *Hint 2*: Check `(A > B && A > C)`.
  - *Hint 3*: Use an `else-if` for B, and a final `else` for C.

---

## Question 12: Digital Selection Cutoff

- **Difficulty**: Medium
- **Concepts Used**: Multiple Logical Conditions
- **Problem Statement**:
  To clear a placement exam, a candidate must score $\ge 70$ in Quants, $\ge 75$ in Logic, and $\ge 80$ in Coding. Additionally, their total sum across all three must be $\ge 240$. Read the three scores and print "Selected" or "Rejected".
- **Sample Input**:
  ```text
  75
  80
  85
  ```
- **Sample Output**:
  ```text
  Selected
  ```
- **Constraints**: Use a single, combined `if` statement.
- **Hints**:
  - *Hint 1*: You need four total conditions joined by `&&`.
  - *Hint 2*: Calculate the sum in the condition or in a separate variable just before the `if`.
  - *Hint 3*: `if (q >= 70 && l >= 75 && c >= 80 && sum >= 240)`

---

## Question 13: Leap Year Logic

- **Difficulty**: Medium
- **Concepts Used**: Nested `if` OR Complex Logical Operators
- **Problem Statement**:
  Determine if a given year is a leap year. A year is a leap year if it is perfectly divisible by 4. However, if it is a century year (divisible by 100), it is NOT a leap year, UNLESS it is also divisible by 400.
- **Sample Input**:
  ```text
  2024
  ```
- **Sample Output**:
  ```text
  Leap Year
  ```
- **Constraints**: Output "Leap Year" or "Not a Leap Year".
- **Hints**:
  - *Hint 1*: Step 1: Is it divisible by 4? If no, Not a Leap Year.
  - *Hint 2*: Step 2: If yes, is it divisible by 100? If no, it IS a Leap Year.
  - *Hint 3*: Step 3: If divisible by 100, is it divisible by 400? If yes, Leap Year. Else, Not a Leap Year.

---

## Question 14: Academic Tutor's Grader

- **Difficulty**: Medium
- **Concepts Used**: `else-if` Ladder
- **Problem Statement**:
  As a tutor, you need to automate grading. Read a student's mark (0-100).
  - $\ge 90$: "A"
  - 80−89: "B"
  - 70−79: "C"
  - 60−69: "D"
  - $<60$: "F"
- **Sample Input**:
  ```text
  85
  ```
- **Sample Output**:
  ```text
  Grade: B
  ```
- **Constraints**: Assume valid input between 0 and 100.
- **Hints**:
  - *Hint 1*: Because `else-if` evaluates top-down, if `marks >= 90` fails, you already know the marks are `<90`.
  - *Hint 2*: You don't need `marks >= 80 && marks < 90`. Just `marks >= 80` is enough for the second check!
  - *Hint 3*: Rely on the cascading nature of the `else-if` ladder.

---

## Question 15: The Switch Calculator

- **Difficulty**: Medium
- **Concepts Used**: `switch`, `char` input, `break`
- **Problem Statement**:
  Read two numbers and a character representing an operator (+, -, *, /). Using a `switch` statement, perform the mathematical operation and print the result.
- **Sample Input**:
  ```text
  10
  5
  *
  ```
- **Sample Output**:
  ```text
  Result: 50
  ```
- **Constraints**: If the operator is `/` and the second number is 0, print "Error: Division by zero".
- **Hints**:
  - *Hint 1*: `switch` on the operator character (`switch(op)`).
  - *Hint 2*: Your cases will be `case '+':`, `case '-':`, etc.
  - *Hint 3*: Don't forget to nest an `if` inside the division case to prevent a crash.

---

## Question 16: Powerbuilding BMI Category

- **Difficulty**: Medium
- **Concepts Used**: Float comparison, `else-if`
- **Problem Statement**:
  Calculate BMI ($\text{BMI} = \text{Weight} / \text{Height}^2$). Then categorize it:
  - $<18.5$: "Underweight"
  - 18.5 to 24.9: "Normal"
  - 25.0 to 29.9: "Overweight"
  - $\ge 30.0$: "Obese"
  Read Weight (kg) and Height (m) as floats.
- **Sample Input**:
  ```text
  85.0
  1.75
  ```
- **Sample Output**:
  ```text
  BMI: 27.76
  Category: Overweight
  ```
- **Constraints**: Print BMI to two decimal places.
- **Hints**:
  - *Hint 1*: Calculate the BMI float first.
  - *Hint 2*: Use `else-if` to check the boundaries.
  - *Hint 3*: `if (bmi < 18.5) ... else if (bmi <= 24.9) ...`

---

## Question 17: Character Classifier

- **Difficulty**: Medium
- **Concepts Used**: ASCII Ranges, `if-else`
- **Problem Statement**:
  Read a single character. Determine and print if it is an "Uppercase Alphabet", "Lowercase Alphabet", "Digit", or "Special Character".
- **Sample Input**:
  ```text
  &
  ```
- **Sample Output**:
  ```text
  Special Character
  ```
- **Constraints**: Use relational operators directly on characters (e.g., `ch >= 'A'`).
- **Hints**:
  - *Hint 1*: Uppercase range is `'A'` to `'Z'`.
  - *Hint 2*: Digits range is `'0'` to `'9'`.
  - *Hint 3*: Use logical AND `&&` to check if a character falls within these boundaries.

---

## Question 18: Triangle Validator

- **Difficulty**: Medium
- **Concepts Used**: Logical Logic, Nested `if`
- **Problem Statement**:
  Read the three angles of a triangle. Check if the triangle is valid (sum of angles = 180, and no angle is 0). If valid, check if it is an "Equilateral", "Right-Angled", or "Other" valid triangle.
- **Sample Input**:
  ```text
  90
  45
  45
  ```
- **Sample Output**:
  ```text
  Right-Angled
  ```
- **Constraints**: Print "Invalid Triangle" if the sum is not 180.
- **Hints**:
  - *Hint 1*: Outer `if` checks validity: `sum == 180 && a > 0 && b > 0 && c > 0`.
  - *Hint 2*: Equilateral means `a == 60 && b == 60 && c == 60`.
  - *Hint 3*: Right-angled means `a == 90 || b == 90 || c == 90`.

---

## Question 19: Month Days Finder

- **Difficulty**: Medium
- **Concepts Used**: `switch` Fall-through
- **Problem Statement**:
  Read a month number (1-12). Using a `switch` statement, print the number of days in that month. Ignore leap years (assume February has 28 days).
- **Sample Input**:
  ```text
  10
  ```
- **Sample Output**:
  ```text
  31 Days
  ```
- **Constraints**: Write this elegantly. Do not write 12 separate `printf` statements.
- **Hints**:
  - *Hint 1*: Months 1, 3, 5, 7, 8, 10, 12 have 31 days.
  - *Hint 2*: Stack these cases together without a `break`.
  - *Hint 3*: Place one `printf("31 Days"); break;` at the bottom of that stack.

---

## Question 20: Cartesian Quadrant Checker

- **Difficulty**: Medium
- **Concepts Used**: `else-if`, AND operator
- **Problem Statement**:
  Read the X and Y coordinates (integers) of a point on a 2D plane. Print which quadrant it lies in ("Q1", "Q2", "Q3", "Q4"), or if it lies on the "X-axis", "Y-axis", or "Origin".
- **Sample Input**:
  ```text
  -5
  12
  ```
- **Sample Output**:
  ```text
  Q2
  ```
- **Constraints**: Ensure axes are checked properly.
- **Hints**:
  - *Hint 1*: Origin is `x == 0 && y == 0`.
  - *Hint 2*: Q1 is `x > 0 && y > 0`. Q2 is `x < 0 && y > 0`.
  - *Hint 3*: If `x == 0` but `y != 0`, it's on the Y-axis.
