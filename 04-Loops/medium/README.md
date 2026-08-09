# 🟡 Chapter 4: Medium Practice Problems

> Intermediate C programming challenges focusing on loop equivalency conversion, modulo skipping, reverse character iteration, infinite input guards, condition increment evaluation, and nested loop scoping rules.

---

## 📌 Short Description

This directory contains 10 intermediate practice problems designed to sharpen multi-variable loop control, reverse iteration, non-standard condition updates, infinite guard loops, and nested `break`/`continue` scope boundaries.

---

## 📚 Topics Covered

- [x] Translating `for` Loops to Equivalent `while` Loops
- [x] Skipping Multiples with `continue` & Modulo (`%`)
- [x] Reverse Character Decrement Iterators (`ch--`)
- [x] Intentional Infinite Loops (`while(1)`) & Input Guard Breaks
- [x] Alternate Character Stepping (`ch += 2`)
- [x] Post-Increment Evaluation in `while(i++ < 3)` Conditions
- [x] Pre-Increment Evaluation in `while(++j < 3)` Conditions
- [x] Scope of `break` in Nested `for` Loops
- [x] Execution Flow Differences in `while` vs. `do-while`
- [x] Bi-Directional Safe Up/Down Range Counting

---

## 🎯 Learning Objectives

- Convert `for` loop logic into equivalent `while` loop syntax.
- Combine modulo operators `%` with `continue` to filter out specific number multiples.
- Implement intentional infinite loops (`while(1)`) with input guard termination (`break`).
- Analyze pre/post increment evaluation rules when declared directly inside loop conditions.
- Observe and handle nested loop `break` scope boundaries.

---

## 📈 Progress Checklist

- [ ] 11 Loop Equivalency Converter
- [ ] 12 Skipping Multiples
- [ ] 13 Reverse Alphabet Iterator
- [ ] 14 Infinite Input Guard
- [ ] 15 Alternate Character Stepper
- [ ] 16 Post-Increment in Conditions
- [ ] 17 Pre-Increment in Conditions
- [ ] 18 Nested Loop Break Behavior
- [ ] 19 Do-While vs While Mis-match
- [ ] 20 The Safe Up/Down Counter

---

## 📁 Folder Contents

| File | Title | Concepts Used |
| :--- | :--- | :--- |
| [`11_loop_equivalency_converter.c`](./11_loop_equivalency_converter.c) | Loop Equivalency Converter | Loop Equivalency Rule |
| [`12_skipping_multiples.c`](./12_skipping_multiples.c) | Skipping Multiples | `continue`, Modulo Operator (`%`) |
| [`13_reverse_alphabet_iterator.c`](./13_reverse_alphabet_iterator.c) | Reverse Alphabet Iterator | Character Iterators, Decrement Operator |
| [`14_infinite_input_guard.c`](./14_infinite_input_guard.c) | Infinite Input Guard | `while(1)`, `break` |
| [`15_alternate_character_stepper.c`](./15_alternate_character_stepper.c) | Alternate Character Stepper | Character Iteration, Custom Updation |
| [`16_post_increment_in_conditions.c`](./16_post_increment_in_conditions.c) | Post-Increment in Conditions | Post-Increment in `while()` Condition |
| [`17_pre_increment_in_conditions.c`](./17_pre_increment_in_conditions.c) | Pre-Increment in Conditions | Pre-Increment in `while()` Condition |
| [`18_nested_loop_break_behavior.c`](./18_nested_loop_break_behavior.c) | Nested Loop Break Behavior | Nested Loops, Scope of `break` |
| [`19_do_while_vs_while_mismatch.c`](./19_do_while_vs_while_mismatch.c) | Do-While vs While Mis-match | `while` vs `do-while` execution flow |
| [`20_the_safe_up_down_counter.c`](./20_the_safe_up_down_counter.c) | The Safe Up/Down Counter | Loop Structure Decision |

---

## 📝 Practice Questions

### Question 11: Loop Equivalency Converter

- **Difficulty**: Medium
- **Concepts Used**: Loop Equivalency Rule
- **Problem Statement**:
  You are given the following `for` loop logic conceptually: `for(int i = 10; i > 0; i -= 3)`. Write a program that implements this EXACT behavior, but you are strictly forbidden from using the `for` keyword. You must use a `while` loop.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  10 7 4 1
  ```
- **Constraints**: Use a `while` loop.
- **Hints**:
  - *Hint 1*: In a `while` loop, initialization happens before the loop.
  - *Hint 2*: The condition stays inside the `while(...)`.
  - *Hint 3*: The updation (`i -= 3`) must be placed at the very bottom of the loop body.

---

### Question 12: Skipping Multiples

- **Difficulty**: Medium
- **Concepts Used**: `continue`, Modulo Operator (`%`)
- **Problem Statement**:
  Take an input N. Write a program that prints numbers from 1 to N. However, if a number is a multiple of 3, skip it completely using the `continue` statement.
- **Sample Input**:
  ```text
  7
  ```
- **Sample Output**:
  ```text
  1 2 4 5 7
  ```
- **Constraints**: Use a `for` loop.
- **Hints**:
  - *Hint 1*: How do you mathematically check if a number is a multiple of 3?
  - *Hint 2*: Use the modulo operator: `i % 3 == 0`.
  - *Hint 3*: If true, `continue;`. Print the number otherwise.

---

### Question 13: Reverse Alphabet Iterator

- **Difficulty**: Medium
- **Concepts Used**: Character Iterators, Decrement Operator
- **Problem Statement**:
  Take an uppercase character as input (e.g., F). Print the alphabet in reverse order from that character down to A.
- **Sample Input**:
  ```text
  E
  ```
- **Sample Output**:
  ```text
  E D C B A
  ```
- **Constraints**: Use a `char` iterator in a `while` loop.
- **Hints**:
  - *Hint 1*: Read the character into `char ch;`.
  - *Hint 2*: The condition is `ch >= 'A'`.
  - *Hint 3*: Use `ch--` to decrement the letter.

---

### Question 14: Infinite Input Guard

- **Difficulty**: Medium
- **Concepts Used**: `while(1)`, `break`
- **Problem Statement**:
  Write a program that uses an infinite loop (`while(1)`) to continuously ask the user for a number and prints it. The loop must only stop (`break`) when the user enters a negative number.
- **Sample Input**:
  ```text
  10
  5
  0
  -2
  ```
- **Sample Output**:
  ```text
  Entered: 10
  Entered: 5
  Entered: 0
  Loop Terminated.
  ```
- **Constraints**: You must use `while(1)` or `for(;;)` to create the infinite loop intentionally.
- **Hints**:
  - *Hint 1*: `while(1)` means the condition is always True.
  - *Hint 2*: Put `scanf` inside the loop.
  - *Hint 3*: After `scanf`, check `if(num < 0) { break; }`.

---

### Question 15: Alternate Character Stepper

- **Difficulty**: Medium
- **Concepts Used**: Character Iteration, Custom Updation
- **Problem Statement**:
  Print every alternate uppercase letter of the alphabet starting from A up to Z (i.e., A, C, E, G...).
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  A C E G I K M O Q S U W Y
  ```
- **Constraints**: Do not use `if` conditions to skip letters. Control it strictly using the loop's updation parameter.
- **Hints**:
  - *Hint 1*: You can increment a character by more than 1.
  - *Hint 2*: Instead of `ch++`, what can you write?
  - *Hint 3*: `ch += 2` skips to the next alternate character in the ASCII table.

---

### Question 16: Post-Increment in Conditions

- **Difficulty**: Medium
- **Concepts Used**: Post-Increment in `while()` Condition
- **Problem Statement**:
  Write a program that initializes `int i = 0;`. Use the condition `while(i++ < 3)`. Inside the loop, print the value of `i`. Observe carefully what gets printed and figure out why.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  Inside loop: 1
  Inside loop: 2
  Inside loop: 3
  ```
- **Constraints**: No manual updation inside the loop body. The updation is in the condition itself.
- **Hints**:
  - *Hint 1*: `i++` evaluates the condition using the old value of `i`, but increments `i` immediately after checking.
  - *Hint 2*: On the first check, it checks `0 < 3` (True), then `i` becomes 1. So inside the loop, 1 is printed.
  - *Hint 3*: Trace this step-by-step up to 3.

---

### Question 17: Pre-Increment in Conditions

- **Difficulty**: Medium
- **Concepts Used**: Pre-Increment in `while()` Condition
- **Problem Statement**:
  Repeat the previous experiment, but initialize `int j = 0;` and use the condition `while(++j < 3)`. Print `j` inside the loop. Compare the output to the previous question.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  Inside loop: 1
  Inside loop: 2
  ```
- **Constraints**: Use `++j` in the condition.
- **Hints**:
  - *Hint 1*: `++j` increments the value before checking the condition.
  - *Hint 2*: On the first check, `j` becomes 1, then it checks `1 < 3` (True).
  - *Hint 3*: On the third check, `j` becomes 3, it checks `3 < 3` (False), and the loop terminates without printing 3.

---

### Question 18: Nested Loop Break Behavior

- **Difficulty**: Medium
- **Concepts Used**: Nested Loops, Scope of `break`
- **Problem Statement**:
  Create an outer `for` loop (`i` from 1 to 3) and an inner `for` loop (`j` from 1 to 3). Inside the inner loop, if `j == 2`, execute `break;`. Print `i` and `j` right before the `break` check. Observe which loop gets broken.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  i=1, j=1
  i=2, j=1
  i=3, j=1
  ```
- **Constraints**: Use nested `for` loops.
- **Hints**:
  - *Hint 1*: The `break` statement only ever destroys the innermost loop it is currently inside.
  - *Hint 2*: When `j == 2`, the inner loop breaks, but the outer loop moves to the next `i`.
  - *Hint 3*: Consequently, `j` will never print 2 or 3.

---

### Question 19: Do-While vs While Mis-match

- **Difficulty**: Medium
- **Concepts Used**: `while` vs `do-while` execution flow
- **Problem Statement**:
  Initialize `int k = 10;`. Write a `while` loop that checks `while(k < 5)` and prints "While ran". Then, write a `do-while` loop that checks `while(k < 5)` and prints "Do-While ran". See which one prints.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  Do-While ran
  ```
- **Constraints**: Both loops must have the identical condition `k < 5`.
- **Hints**:
  - *Hint 1*: `while` checks the condition at the entry gate.
  - *Hint 2*: `do-while` executes the body first, then checks the condition at the exit gate.
  - *Hint 3*: Therefore, `do-while` always runs at least once, even if the condition is mathematically false from the start.

---

### Question 20: The Safe Up/Down Counter

- **Difficulty**: Medium
- **Concepts Used**: Loop Structure Decision
- **Problem Statement**:
  Read two integers, `start` and `end`. Write logic that safely counts from `start` to `end`. If `start < end`, it counts UP. If `start > end`, it counts DOWN.
- **Sample Input 1**:
  ```text
  2 5
  ```
- **Sample Output 1**:
  ```text
  2 3 4 5
  ```
- **Sample Input 2**:
  ```text
  4 1
  ```
- **Sample Output 2**:
  ```text
  4 3 2 1
  ```
- **Constraints**: Use `if-else` to choose between two different `for` loops to prevent an infinite loop.
- **Hints**:
  - *Hint 1*: If you try to do `i++` when `start = 4` and `end = 1`, the condition `i >= end` will result in an infinite loop if not handled carefully.
  - *Hint 2*: Use `if (start <= end)` to run an incrementing loop.
  - *Hint 3*: Use `else` to run a decrementing loop (`i--`).

---

## 🔗 Navigation Links

- 📋 **[View Complete Practice Workbook (`PRACTICE.md`)](./PRACTICE.md)**
- 🟢 **[Return to Easy Practice (`../easy/`)](../easy/)**
- 🔴 **[Proceed to Hard Practice (`../hard/`)](../hard/)**
- 🏠 **[Return to Chapter 4 Overview (`../README.md`)](../README.md)**
