# 🟡 Medium Practice Questions

> Practice workbook containing 10 intermediate problems focusing on arithmetic formulas, variable swaps, unit conversions, and formatting.

---

## 📈 Progress Checklist

- [ ] 11 ESP32 Thermal Sensor
- [ ] 12 PCB Board Dimensions
- [ ] 13 Academy Fee Calculation
- [ ] 14 Data Swapper
- [ ] 15 Powerbuilder BMI Index
- [ ] 16 Algorithm Execution Time
- [ ] 17 E&TC Total Resistance
- [ ] 18 Upper to Lower Case Converter
- [ ] 19 Formatted Expense Report
- [ ] 20 Wheel Circumference

---

## Question 11: ESP32 Thermal Sensor

- **Difficulty**: Medium
- **Concepts Used**: Arithmetic Operators, Float precision
- **Problem Statement**:
  Your hardware setup reports a temperature in Celsius. Write a program that takes the Celsius value as float input and converts it to Fahrenheit using the formula: $F = (C \times 9/5) + 32$.
- **Sample Input**: `37.5`
- **Sample Output**:
  ```text
  Temperature in Fahrenheit: 99.50
  ```
- **Constraints**: Be careful with integer division! `9/5` evaluates to `1` in C.
- **Hints**:
  - *Hint 1*: Force float division in your formula.
  - *Hint 2*: Use `9.0` and `5.0`.
  - *Hint 3*: `F = (C * (9.0 / 5.0)) + 32;`

---

## Question 12: PCB Board Dimensions

- **Difficulty**: Medium
- **Concepts Used**: Basic Geometry, Integer Math
- **Problem Statement**:
  You are designing a rectangular PCB board. Write a program that takes the length and width in millimeters (integers) as input, and calculates both the Area and the Perimeter.
- **Sample Input**:
  ```text
  10
  5
  ```
- **Sample Output**:
  ```text
  Area: 50 sq mm
  Perimeter: 30 mm
  ```
- **Constraints**: Use only integer math.
- **Hints**:
  - *Hint 1*: Area = length * width.
  - *Hint 2*: Perimeter = 2 * (length + width).
  - *Hint 3*: Print both variables in separate `printf` statements or one with two `%d`s.

---

## Question 13: Academy Fee Calculation

- **Difficulty**: Medium
- **Concepts Used**: Simple Interest Formula
- **Problem Statement**:
  Calculate the late fee for a student's tuition. Read Principal amount (float), Rate of interest (float), and Time in years (float). Calculate the Simple Interest: $SI = (P \times R \times T) / 100$.
- **Sample Input**:
  ```text
  5000
  5.5
  2
  ```
- **Sample Output**:
  ```text
  Late Fee (Interest): 550.00
  ```
- **Constraints**: Output the result rounded to 2 decimal places.
- **Hints**:
  - *Hint 1*: Declare P, R, T, and SI.
  - *Hint 2*: Chain the multiplication before dividing.
  - *Hint 3*: `SI = (P * R * T) / 100.0;`

---

## Question 14: Data Swapper

- **Difficulty**: Medium
- **Concepts Used**: Logic, Arithmetic (`+`, `-`)
- **Problem Statement**:
  Write a program that takes two integers, A and B. Swap their values without declaring a third temporary variable. Print their values before and after the swap.
- **Sample Input**:
  ```text
  10
  20
  ```
- **Sample Output**:
  ```text
  Before: A=10, B=20
  After: A=20, B=10
  ```
- **Constraints**: You can only use variables A and B.
- **Hints**:
  - *Hint 1*: This is a classic math trick using addition and subtraction.
  - *Hint 2*: Store the sum of both in A.
  - *Hint 3*: `A = A + B; B = A - B; A = A - B;`

---

## Question 15: Powerbuilder BMI Index

- **Difficulty**: Medium
- **Concepts Used**: Float Division, Squaring
- **Problem Statement**:
  Calculate a lifter's Body Mass Index (BMI). Ask for weight in kg (float) and height in meters (float). Formula: $BMI = \text{Weight} / (\text{Height} \times \text{Height})$.
- **Sample Input**:
  ```text
  80.5
  1.8
  ```
- **Sample Output**:
  ```text
  BMI: 24.85
  ```
- **Constraints**: Round output to two decimal places.
- **Hints**:
  - *Hint 1*: Group the denominator in parentheses.
  - *Hint 2*: Do not use `<math.h>`, just multiply height by itself.
  - *Hint 3*: `BMI = weight / (height * height);`

---

## Question 16: Algorithm Execution Time

- **Difficulty**: Medium
- **Concepts Used**: Modulo (`%`) and Division (`/`)
- **Problem Statement**:
  Your C program takes a total execution time in seconds. Write a program to convert this total time into Hours, Minutes, and Seconds.
- **Sample Input**: `3665`
- **Sample Output**:
  ```text
  1 Hours, 1 Minutes, 5 Seconds
  ```
- **Constraints**: Input will not exceed 100,000. Use integer division and modulo logic.
- **Hints**:
  - *Hint 1*: 1 Hour = 3600 seconds. 1 Minute = 60 seconds.
  - *Hint 2*: `hours = total_seconds / 3600;`
  - *Hint 3*: To find remaining seconds for minutes, use `total_seconds % 3600`.

---

## Question 17: E&TC Total Resistance

- **Difficulty**: Medium
- **Concepts Used**: Float Arithmetic
- **Problem Statement**:
  You have two resistors, $R_1$ and $R_2$ (floats). Calculate their equivalent resistance if connected in Series ($R_{\text{series}} = R_1 + R_2$) and in Parallel ($R_{\text{parallel}} = \frac{R_1 \times R_2}{R_1 + R_2}$).
- **Sample Input**:
  ```text
  10.0
  40.0
  ```
- **Sample Output**:
  ```text
  Series: 50.00 ohms
  Parallel: 8.00 ohms
  ```
- **Constraints**: Print to two decimal places.
- **Hints**:
  - *Hint 1*: Calculate series first and store it in a variable.
  - *Hint 2*: Use parentheses carefully for the parallel calculation denominator.
  - *Hint 3*: `parallel = (r1 * r2) / (r1 + r2);`

---

## Question 18: Upper to Lower Case Converter

- **Difficulty**: Medium
- **Concepts Used**: ASCII Math
- **Problem Statement**:
  Read a single uppercase character from the user. Print its lowercase equivalent without using any built-in string functions.
- **Sample Input**: `K`
- **Sample Output**:
  ```text
  Lowercase: k
  ```
- **Constraints**: Assume the user strictly inputs an uppercase letter (A-Z).
- **Hints**:
  - *Hint 1*: The ASCII value of 'A' is 65, and 'a' is 97.
  - *Hint 2*: The difference between any upper and lower case letter is exactly 32.
  - *Hint 3*: `char lower = upper + 32;`

---

## Question 19: Formatted Expense Report

- **Difficulty**: Medium
- **Concepts Used**: Width and Precision Formatting
- **Problem Statement**:
  Read three float values representing the cost of three hardware components. Print them in a perfectly aligned right-justified column. The column width should be 10 characters, with 2 decimal places.
- **Sample Input**:
  ```text
  12.5
  150.75
  9.99
  ```
- **Sample Output**:
  ```text
       12.50
      150.75
        9.99
  ```
- **Constraints**: Use exact formatting syntax in `printf()`.
- **Hints**:
  - *Hint 1*: Combine the width and precision specifiers.
  - *Hint 2*: `%<width>.<precision>f`
  - *Hint 3*: Use `%10.2f` for each print statement.

---

## Question 20: Wheel Circumference

- **Difficulty**: Medium
- **Concepts Used**: `#define` Constants
- **Problem Statement**:
  Use a preprocessor directive to define PI as 3.14159. Read the radius of a wheel and calculate its circumference ($C = 2 \times \text{PI} \times r$).
- **Sample Input**: `5.0`
- **Sample Output**:
  ```text
  Circumference: 31.4159
  ```
- **Constraints**: You must define PI using `#define`, not as a standard float variable.
- **Hints**:
  - *Hint 1*: Preprocessor directives go at the very top of your file.
  - *Hint 2*: `#define` does not use an equals sign or semicolon.
  - *Hint 3*: `#define PI 3.14159`
