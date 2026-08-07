# 📝 Top 10 Multiple Choice Questions (MCQs)

> Test your understanding of Chapter 3 concepts with these conceptual multiple-choice questions.

---

### Question 1
What happens if a `break` statement is omitted at the end of a matching `switch` case?
- A) Compilation Error
- B) Skips directly to `default` case
- C) Fall-through execution into the next case
- D) Exits the `switch` block immediately

---

### Question 2
Which of the following is NOT a valid case label in a C `switch` statement?
- A) `case 1:`
- B) `case 'A':`
- C) `case 1.5:`
- D) `case 1+2:`

---

### Question 3
What is the outcome of the statement `if (0)`?
- A) Executes the `if` block
- B) Skips the `if` block
- C) Throws a compilation error
- D) Results in an infinite loop

---

### Question 4
How is the ternary operator correctly structured in C?
- A) `condition ? false_case : true_case;`
- B) `condition : true_case ? false_case;`
- C) `condition ? true_case : false_case;`
- D) `true_case ? condition : false_case;`

---

### Question 5
What is the primary danger of writing `if (x = 5)`?
- A) It throws a syntax error at compile time
- B) It checks if `x` is equal to 5
- C) It permanently assigns 5 to `x` and evaluates the condition to True
- D) It assigns 5 to `x` and evaluates the condition to False

---

### Question 6
Which operator is used for Logical AND in C?
- A) `&`
- B) `&&`
- C) `||`
- D) `!`

---

### Question 7
In an `else-if` ladder, if the first `if` condition evaluates to True, what happens to the remaining `else-if` blocks?
- A) They are evaluated anyway
- B) They are entirely skipped
- C) The compiler throws a warning
- D) They are executed automatically

---

### Question 8
Can a `switch` statement directly evaluate a string literal (e.g. `switch("Apple")`) in C?
- A) Yes
- B) No, only integer and character constant expressions are allowed
- C) Only if the string length is less than 5
- D) Yes, provided `<string.h>` is included

---

### Question 9
What does the expression `!(10 > 20)` evaluate to in C?
- A) `1`
- B) `0`
- C) `10`
- D) `-1`

---

### Question 10
How does the C compiler resolve the "Dangling Else" ambiguity when braces are omitted?
- A) The `else` belongs to the earliest `if`.
- B) The `else` belongs to the closest unclosed `if`.
- C) The compiler forces you to use braces.
- D) The compiler relies on code indentation.
