# 🟢 Chapter 4 Easy Practice Workbook

> Practice workbook containing 10 beginner-level problems focused on loop syntax (`for`, `while`, `do-while`), character/float iterators, pre/post increment verification, and `break`/`continue` basics.

---

## 🎯 Learning Objectives

- Construct basic `for`, `while`, and `do-while` loop structures.
- Use non-integer loop iterators (`char`, `float`).
- Differentiate between pre-increment (`++i`) and post-increment (`i++`).
- Apply `break` to exit loops early and `continue` to skip iterations.

---

## 📊 Section Metadata

- **Estimated Difficulty**: 🟢 Easy
- **Total Problems**: 10 Questions
- **Topic Focus**: Fundamental Loops, Iterators, Increment Logic, Basic Break/Continue

---

## 📈 Progress Checklist

- [ ] 01 The Forward Counter
- [ ] 02 The Liftoff Countdown
- [ ] 03 Even Number Stepper
- [ ] 04 The Do-While Guarantee
- [ ] 05 The Alphabet Printer
- [ ] 06 The Emergency Stop (break)
- [ ] 07 The Number Skipper (continue)
- [ ] 08 Post-Increment Verification
- [ ] 09 Pre-Increment Verification
- [ ] 10 The Float Stepper

---

## 📝 Practice Questions

### Question 01: The Forward Counter

- **Difficulty**: Easy
- **Concepts Used**: `for` Loop, Integer Iterator
- **Problem Statement**:
  Write a program that takes an integer N as input and prints all numbers from 1 to N sequentially, each on a new line.
- **Sample Input**:
  ```text
  5
  ```
- **Sample Output**:
  ```text
  1
  2
  3
  4
  5
  ```
- **Constraints**: Use a `for` loop. N will be $\ge 1$.
- **Hints**:
  - *Hint 1*: The initialization should be `int i = 1`.
  - *Hint 2*: The condition should check if `i` is less than or equal to N.
  - *Hint 3*: The updation should increment `i` by 1 (`i++`).

---

### Question 02: The Liftoff Countdown

- **Difficulty**: Easy
- **Concepts Used**: `while` Loop, Decrement Operator (`--`)
- **Problem Statement**:
  Write a program that asks the user for a starting number N. Count down from N to 1 using a `while` loop, and then print `Liftoff!`.
- **Sample Input**:
  ```text
  3
  ```
- **Sample Output**:
  ```text
  3
  2
  1
  Liftoff!
  ```
- **Constraints**: You MUST use a `while` loop, not a `for` loop.
- **Hints**:
  - *Hint 1*: Initialize your iterator variable before the `while` keyword.
  - *Hint 2*: Your loop condition should be `N >= 1` or `N > 0`.
  - *Hint 3*: Don't forget to decrement N inside the loop body using `N--`.

---

### Question 03: Even Number Stepper

- **Difficulty**: Easy
- **Concepts Used**: Custom Updation (`i += 2`)
- **Problem Statement**:
  Print all even numbers from 2 up to a user-provided limit N.
- **Sample Input**:
  ```text
  10
  ```
- **Sample Output**:
  ```text
  2 4 6 8 10
  ```
- **Constraints**: Do NOT use an `if` statement to check for even numbers. Control the output entirely using the loop's updation expression.
- **Hints**:
  - *Hint 1*: Start your loop iterator at 2.
  - *Hint 2*: Instead of updating by 1, you can update by 2.
  - *Hint 3*: Use `i = i + 2` or `i += 2` in the updation block of your `for` loop.

---

### Question 04: The Do-While Guarantee

- **Difficulty**: Easy
- **Concepts Used**: `do-while` Loop, Semicolon Rule
- **Problem Statement**:
  Write a program that prints "Executing loop!" and then asks the user to enter 1 to repeat or 0 to stop. Use a `do-while` loop so the message prints at least once before any condition is checked.
- **Sample Input**:
  ```text
  1
  0
  ```
- **Sample Output**:
  ```text
  Executing loop!
  Enter 1 to repeat, 0 to stop: 1
  Executing loop!
  Enter 1 to repeat, 0 to stop: 0
  ```
- **Constraints**: Use a `do-while` loop.
- **Hints**:
  - *Hint 1*: The syntax is `do { ... } while (condition);`.
  - *Hint 2*: The loop should continue as long as the user's input equals 1.
  - *Hint 3*: Do not forget the mandatory semicolon `;` at the very end of the `while(condition)` statement.

---

### Question 05: The Alphabet Printer

- **Difficulty**: Easy
- **Concepts Used**: Character Iterators
- **Problem Statement**:
  Loop iterators do not have to be integers. Write a `for` loop that prints all uppercase English alphabets from A to Z separated by a space.
- **Sample Input**: *(No input required)*
- **Sample Output**:
  ```text
  A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
  ```
- **Constraints**: Use a `char` variable as your loop iterator.
- **Hints**:
  - *Hint 1*: Initialize your iterator as `char ch = 'A';`.
  - *Hint 2*: Characters are just ASCII integers under the hood, so you can check `ch <= 'Z'`.
  - *Hint 3*: You can increment characters just like numbers using `ch++`.

---

### Question 06: The Emergency Stop (break)

- **Difficulty**: Easy
- **Concepts Used**: `break` Statement
- **Problem Statement**:
  Write a program that starts a `for` loop to count from 1 to 100. However, take an input X from the user. If the loop iterator reaches X, use the `break` statement to stop the loop immediately.
- **Sample Input**:
  ```text
  4
  ```
- **Sample Output**:
  ```text
  1
  2
  3
  4
  Loop Broken!
  ```
- **Constraints**: Print `Loop Broken!` outside and after the loop.
- **Hints**:
  - *Hint 1*: Inside the `for` loop, use an `if` statement to check if the iterator equals X.
  - *Hint 2*: Print the number first, then check the condition to break.
  - *Hint 3*: Use the `break;` keyword inside the `if` block.

---

### Question 07: The Number Skipper (continue)

- **Difficulty**: Easy
- **Concepts Used**: `continue` Statement
- **Problem Statement**:
  Print numbers from 1 to 5. However, take an input X from the user. If the iterator equals X, use the `continue` statement to skip printing that specific number and move to the next iteration.
- **Sample Input**:
  ```text
  3
  ```
- **Sample Output**:
  ```text
  1
  2
  4
  5
  ```
- **Constraints**: Use a `for` loop and the `continue` keyword.
- **Hints**:
  - *Hint 1*: Inside the loop, check if `i == X`.
  - *Hint 2*: If true, execute `continue;`.
  - *Hint 3*: Place the `printf` statement after the `continue` check so the printing gets skipped.

---

### Question 08: Post-Increment Verification

- **Difficulty**: Easy
- **Concepts Used**: Post-Increment (`i++`)
- **Problem Statement**:
  Declare an integer `x = 5`. Print the value of `x++` directly inside a `printf` statement. On the next line, print the value of `x` again. Observe the output to understand post-increment logic.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  Value during x++: 5
  Value after: 6
  ```
- **Constraints**: Apply the increment directly inside the first `printf`.
- **Hints**:
  - *Hint 1*: Post-increment (`x++`) uses the current value first, and then increments it.
  - *Hint 2*: `printf("Value during x++: %d\n", x++);`
  - *Hint 3*: Just `printf("Value after: %d\n", x);` for the second line.

---

### Question 09: Pre-Increment Verification

- **Difficulty**: Easy
- **Concepts Used**: Pre-Increment (`++i`)
- **Problem Statement**:
  Declare an integer `y = 5`. Print the value of `++y` directly inside a `printf` statement. On the next line, print the value of `y` again. Observe how this differs from post-increment.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  Value during ++y: 6
  Value after: 6
  ```
- **Constraints**: Apply the increment directly inside the first `printf`.
- **Hints**:
  - *Hint 1*: Pre-increment (`++y`) increments the value first, and then uses it.
  - *Hint 2*: `printf("Value during ++y: %d\n", ++y);`
  - *Hint 3*: Both lines will print the updated value.

---

### Question 10: The Float Stepper

- **Difficulty**: Easy
- **Concepts Used**: Float Iterators
- **Problem Statement**:
  Write a `for` loop that starts at 0.0, goes up to 1.0, and increments by 0.2 in each step. Print the iterator value with 1 decimal place.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  0.0
  0.2
  0.4
  0.6
  0.8
  1.0
  ```
- **Constraints**: Use a `float` as the loop iterator.
- **Hints**:
  - *Hint 1*: `for(float f = 0.0; ...)`
  - *Hint 2*: The condition is `f <= 1.0`.
  - *Hint 3*: The updation is `f += 0.2`. Use `%.1f` to format the print.
