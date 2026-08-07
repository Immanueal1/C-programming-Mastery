# 🟢 Easy Practice Questions

> Practice workbook containing 10 beginner-level problems focused on conditional statements, relational comparisons, ternary logic, and switch-case syntax.

---

## 🎯 Learning Objectives

- Construct single and multi-branch decision structures (`if`, `if-else`, `else-if`).
- Implement shorthand ternary expressions (`? :`).
- Distinguish between assignment `=` and equality check `==`.
- Utilize `switch` fall-through intentionally for stacked case values.
- Enforce statement block scoping using curly braces `{}`.

---

## 📊 Section Metadata

- **Estimated Difficulty**: 🟢 Beginner
- **Total Problems**: 10 Questions
- **Topic Focus**: Conditional Branching, Ternary Syntax, Equality Rules & Switch Basics

---

## 📈 Progress Checklist

- [ ] 01 The Threshold Check
- [ ] 02 Parity Analyzer
- [ ] 03 The Voting Kiosk
- [ ] 04 Maximum of Two
- [ ] 05 The Ternary Max
- [ ] 06 Mathematical Sign Checker
- [ ] 07 The Equality Trap Simulator
- [ ] 08 Vowel or Consonant (Switch)
- [ ] 09 Powerbuilding Lift Validator
- [ ] 10 The Curly Brace Rule Test

---

## Question 01: The Threshold Check

- **Difficulty**: Easy
- **Concepts Used**: Simple `if`, Relational Operators
- **Problem Statement**:
  You are monitoring a temperature sensor in a physics lab. Write a program that reads an integer temperature. If the temperature exceeds 100, print a warning message. Otherwise, the program should silently end.
- **Sample Input**:
  ```text
  105
  ```
- **Sample Output**:
  ```text
  WARNING: Boiling point exceeded!
  ```
- **Constraints**: Do not use an `else` block.
- **Hints**:
  - *Hint 1*: You only need to check for a single condition.
  - *Hint 2*: Use the `>` operator.
  - *Hint 3*: `if (temp > 100) { ... }`

---

## Question 02: Parity Analyzer

- **Difficulty**: Easy
- **Concepts Used**: `if-else`, Modulo Operator (`%`)
- **Problem Statement**:
  Write a program that takes an integer input from the user and accurately determines whether it is an Even or Odd number.
- **Sample Input**:
  ```text
  42
  ```
- **Sample Output**:
  ```text
  42 is an Even number.
  ```
- **Constraints**: None.
- **Hints**:
  - *Hint 1*: An even number is perfectly divisible by 2.
  - *Hint 2*: Check if the remainder of the number divided by 2 is 0.
  - *Hint 3*: `if (num % 2 == 0)`

---

## Question 03: The Voting Kiosk

- **Difficulty**: Easy
- **Concepts Used**: `if-else`, `>=` Operator
- **Problem Statement**:
  A local voting kiosk requires a user to be at least 18 years old to cast a ballot. Read the user's age and print "Eligible to vote" or "Not eligible to vote".
- **Sample Input**:
  ```text
  17
  ```
- **Sample Output**:
  ```text
  Not eligible to vote
  ```
- **Constraints**: Use standard `if-else` branching.
- **Hints**:
  - *Hint 1*: The condition must include 18 as an eligible age.
  - *Hint 2*: Use the Greater Than or Equal To operator.
  - *Hint 3*: `if (age >= 18)`

---

## Question 04: Maximum of Two

- **Difficulty**: Easy
- **Concepts Used**: `if-else`
- **Problem Statement**:
  Given two distinct integers A and B, write a program to compare them and print the larger of the two.
- **Sample Input**:
  ```text
  15
  29
  ```
- **Sample Output**:
  ```text
  29 is larger.
  ```
- **Constraints**: Assume A and B are never equal.
- **Hints**:
  - *Hint 1*: Compare the two variables directly.
  - *Hint 2*: If A is greater than B, print A.
  - *Hint 3*: Else, print B.

---

## Question 05: The Ternary Max

- **Difficulty**: Easy
- **Concepts Used**: Ternary Operator (`? :`)
- **Problem Statement**:
  Solve the "Maximum of Two" problem again, but this time you are strictly forbidden from using `if` or `else` keywords.
- **Sample Input**:
  ```text
  50
  12
  ```
- **Sample Output**:
  ```text
  50 is larger.
  ```
- **Constraints**: You MUST use the ternary operator.
- **Hints**:
  - *Hint 1*: The ternary operator takes three operands: `condition ? true_case : false_case`.
  - *Hint 2*: You can embed `printf` inside the ternary operator, or use it to assign the max value to a variable.
  - *Hint 3*: `(a > b) ? printf("%d is larger", a) : printf("%d is larger", b);`

---

## Question 06: Mathematical Sign Checker

- **Difficulty**: Easy
- **Concepts Used**: `else-if` Ladder
- **Problem Statement**:
  Read an integer from the user. Print "Positive" if it is greater than zero, "Negative" if it is less than zero, and "Zero" if it is exactly zero.
- **Sample Input**:
  ```text
  -5
  ```
- **Sample Output**:
  ```text
  Negative
  ```
- **Constraints**: Must use an `else-if` ladder.
- **Hints**:
  - *Hint 1*: You have exactly three distinct possibilities.
  - *Hint 2*: Check `> 0` first, then `< 0`.
  - *Hint 3*: The final case can just be an `else`.

---

## Question 07: The Equality Trap Simulator

- **Difficulty**: Easy
- **Concepts Used**: `=` vs `==`
- **Problem Statement**:
  You need to verify if an operation status code is exactly 1 (Success). Write an `if-else` statement to check this. Be extremely careful to use the comparison operator, not the assignment operator.
- **Sample Input**:
  ```text
  1
  ```
- **Sample Output**:
  ```text
  Operation Successful.
  ```
- **Constraints**: Ensure your condition is `status == 1`.
- **Hints**:
  - *Hint 1*: Remember the trap: `if (status = 1)` will always evaluate to true.
  - *Hint 2*: Equality checking requires two equals signs.
  - *Hint 3*: `if (status == 1)`

---

## Question 08: Vowel or Consonant (Switch)

- **Difficulty**: Easy
- **Concepts Used**: `switch`, `break`, Fall-through
- **Problem Statement**:
  Read a single lowercase character. Using a `switch` statement, print "Vowel" if it is 'a', 'e', 'i', 'o', or 'u'. Print "Consonant" for any other input.
- **Sample Input**:
  ```text
  e
  ```
- **Sample Output**:
  ```text
  Vowel
  ```
- **Constraints**: You must use a `switch` statement. Utilize fall-through intentionally to make the code shorter.
- **Hints**:
  - *Hint 1*: You do not need a `printf` for every single vowel case.
  - *Hint 2*: Stack the cases together without `break` until the last vowel.
  - *Hint 3*: `case 'a': case 'e': case 'i': ... printf("Vowel"); break;`

---

## Question 09: Powerbuilding Lift Validator

- **Difficulty**: Easy
- **Concepts Used**: Nested `if`, Logical NOT (`!`)
- **Problem Statement**:
  A user inputs their squat weight in kg. A valid lift must be greater than 0. If it is valid, check if it is above 100 kg. If so, print "Heavy Lift". If valid but 100 or below, print "Light Lift". If invalid, print "Invalid Input".
- **Sample Input**:
  ```text
  140
  ```
- **Sample Output**:
  ```text
  Heavy Lift
  ```
- **Constraints**: Use a nested `if` structure.
- **Hints**:
  - *Hint 1*: The outer `if` should check if the weight is `> 0`.
  - *Hint 2*: The inner `if-else` handles the "Heavy" vs "Light" logic.
  - *Hint 3*: The outer `else` handles the "Invalid Input".

---

## Question 10: The Curly Brace Rule Test

- **Difficulty**: Easy
- **Concepts Used**: `if` scope, Braces `{}`
- **Problem Statement**:
  Write a program that takes an integer. If the integer is 5, print "Five" on one line, and "End of Check" on the next line. If it is not 5, do nothing. Use proper curly braces to ensure both lines are bound to the `if` statement.
- **Sample Input**:
  ```text
  5
  ```
- **Sample Output**:
  ```text
  Five
  End of Check
  ```
- **Constraints**: Ensure both prints are inside the conditional block.
- **Hints**:
  - *Hint 1*: Without curly braces, only the first `printf` is conditionally executed.
  - *Hint 2*: Wrap both `printf` statements in `{ ... }`.
  - *Hint 3*: `if (num == 5) { printf...; printf...; }`
