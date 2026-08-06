# 🟢 Easy Practice Questions

> Practice workbook containing 10 beginner-level problems focused on C syntax, basic I/O, variables, data types, format specifiers, and simple math operations.

---

## 📈 Progress Checklist

- [ ] 01 Sensor Boot Sequence
- [ ] 02 The Tutor's Log
- [ ] 03 Microplastic Concentration
- [ ] 04 Grade Assignation
- [ ] 05 Gym Lifter Profile
- [ ] 06 Planck's Constant
- [ ] 07 Spectroscopy Wavelength
- [ ] 08 Basic Arithmetic
- [ ] 09 ASCII Character Viewer
- [ ] 10 Aligned Output

---

## Question 1: Sensor Boot Sequence

- **Difficulty**: Easy
- **Concepts Used**: `printf()`, Escape Sequences
- **Problem Statement**:
  You are programming an ESP32 microcontroller for a spectroscopy prototype. Write a program that prints a precise boot sequence to the console. The output must span exactly three lines.
- **Sample Input**: *(No user input required)*
- **Sample Output**:
  ```text
  System Booting...
  Initializing NIR Sensor...
  Ready.
  ```
- **Constraints**: Use only a single `printf()` statement.
- **Hints**:
  - *Hint 1*: You can print multiple lines in one command.
  - *Hint 2*: Use the newline escape sequence (`\n`).
  - *Hint 3*: Insert `\n` at the end of each phrase within the quotes.

---

## Question 2: The Tutor's Log

- **Difficulty**: Easy
- **Concepts Used**: Variable Declaration, `printf()`, Integer Format Specifier (`%d`)
- **Problem Statement**:
  As a math and physics tutor, you need to display the current number of students enrolled in your academy. Declare an integer variable, assign it the value 42, and print it in a formatted sentence.
- **Sample Input**: *(No user input required)*
- **Sample Output**:
  ```text
  Current academy enrollment: 42 students.
  ```
- **Constraints**: The number 42 must be printed using a variable, not hardcoded into the string.
- **Hints**:
  - *Hint 1*: Declare a variable using the `int` keyword.
  - *Hint 2*: Use the `%d` format specifier.
  - *Hint 3*: Your print statement should look like `printf("... %d ...", variable_name);`.

---

## Question 3: Microplastic Concentration

- **Difficulty**: Easy
- **Concepts Used**: `scanf()`, `float`, `&` Operator
- **Problem Statement**:
  Your NIR-Based Microplastic Analyzer detects a specific concentration of plastic in a water sample. Write a program that asks the user to input a decimal value and then prints it back.
- **Sample Input**: `15.4`
- **Sample Output**:
  ```text
  Enter concentration: 15.4
  Detected concentration is 15.400000 mg/L
  ```
- **Constraints**: Use the `float` data type.
- **Hints**:
  - *Hint 1*: Use `scanf()` to read user input.
  - *Hint 2*: The format specifier for a float is `%f`.
  - *Hint 3*: Don't forget the Address-Of operator (`&`) in your `scanf()`.

---

## Question 4: Grade Assignation

- **Difficulty**: Easy
- **Concepts Used**: `char` data type, `%c`
- **Problem Statement**:
  Write a program that takes a single character input representing a student's competitive exam grade (e.g., A, B, C) and prints a confirmation message.
- **Sample Input**: `A`
- **Sample Output**:
  ```text
  Enter grade: A
  Grade A successfully recorded.
  ```
- **Constraints**: Variables must be strictly of type `char`.
- **Hints**:
  - *Hint 1*: `char` stores exactly one character.
  - *Hint 2*: Use the `%c` format specifier.
  - *Hint 3*: Read the character using `scanf("%c", &grade);`.

---

## Question 5: Gym Lifter Profile

- **Difficulty**: Easy
- **Concepts Used**: Multiple Data Types (`int`, `float`, `char`)
- **Problem Statement**:
  Create a powerbuilding profile. Ask the user for their age (integer), their body weight (float), and their training group (a single character: A, B, or C). Print them all on a single line.
- **Sample Input**:
  ```text
  21
  78.5
  A
  ```
- **Sample Output**:
  ```text
  Profile: Age 21, Weight 78.50 kg, Group A
  ```
- **Constraints**: Read all three inputs using a single `scanf()` statement.
- **Hints**:
  - *Hint 1*: You can chain format specifiers in `scanf()`.
  - *Hint 2*: Make sure the variables in `scanf` match the order of the specifiers.
  - *Hint 3*: `scanf("%d %f %c", &age, &weight, &group);`. *(Note: beware of spaces before `%c`!)*.

---

## Question 6: Planck's Constant

- **Difficulty**: Easy
- **Concepts Used**: Constants (`const` or `#define`), Exponential Notation
- **Problem Statement**:
  Write a program that defines Planck's constant as `6.626e-34` and prints it. The value must be immutable (cannot be changed later in the code).
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  Planck's Constant: 6.626000e-34
  ```
- **Constraints**: Use either the `const` keyword or `#define`. Use `%e` for scientific notation.
- **Hints**:
  - *Hint 1*: Scientific notation in C uses `e`.
  - *Hint 2*: A `const float` or `const double` prevents modification.
  - *Hint 3*: `const double PLANCK = 6.626e-34;`

---

## Question 7: Spectroscopy Wavelength

- **Difficulty**: Easy
- **Concepts Used**: Format Specifier Precision (`%.Xf`)
- **Problem Statement**:
  Your ESP32 outputs a raw float value for light wavelength, e.g., `450.123456` nm. Read this value from the user, but print it rounded to exactly two decimal places.
- **Sample Input**: `450.123456`
- **Sample Output**:
  ```text
  Calibrated Wavelength: 450.12 nm
  ```
- **Constraints**: Do not alter the variable's actual value; only change how it is displayed.
- **Hints**:
  - *Hint 1*: You can modify the `%f` specifier to limit decimal places.
  - *Hint 2*: Place a dot and a number between `%` and `f`.
  - *Hint 3*: Use `%.2f` in your `printf()`.

---

## Question 8: Basic Arithmetic

- **Difficulty**: Easy
- **Concepts Used**: Addition, Variable Initialization
- **Problem Statement**:
  A coaching academy has two batches. Batch 1 has 45 students, and Batch 2 has 38 students. Write a program that calculates and prints the total number of students using an arithmetic operator.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  Total students: 83
  ```
- **Constraints**: You must declare three variables: `batch1`, `batch2`, and `total`.
- **Hints**:
  - *Hint 1*: Assign the values to the batch variables.
  - *Hint 2*: Use the `+` operator.
  - *Hint 3*: `total = batch1 + batch2;`.

---

## Question 9: ASCII Character Viewer

- **Difficulty**: Easy
- **Concepts Used**: ASCII Values, Type Casting/Specifiers
- **Problem Statement**:
  Every character in C is secretly stored as a number (ASCII value). Write a program that asks the user for a single character and prints its underlying integer value.
- **Sample Input**: `A`
- **Sample Output**:
  ```text
  The ASCII value of A is 65
  ```
- **Constraints**: Do not use any explicit type-casting functions.
- **Hints**:
  - *Hint 1*: How does C differentiate between printing a character and printing a number?
  - *Hint 2*: It depends purely on the format specifier.
  - *Hint 3*: Print the `char` variable using `%d`.

---

## Question 10: Aligned Output

- **Difficulty**: Easy
- **Concepts Used**: Format Specifier Width (`%5d`)
- **Problem Statement**:
  You need to print three variables (5, 42, 1089) right-aligned to a width of 6 spaces to create a neat column.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
       5
      42
    1089
  ```
- **Constraints**: Do not use manual spaces (like `printf("     5")`).
- **Hints**:
  - *Hint 1*: Format specifiers can dictate minimum width.
  - *Hint 2*: Place a number between `%` and `d`.
  - *Hint 3*: Use `%6d` to force the output to take up 6 characters of space.
