# 📝 Top 10 Multiple Choice Questions (MCQs)

> Test your understanding of Chapter 4 concepts with these conceptual multiple-choice questions.

---

### Question 1
Which loop is guaranteed to execute its body at least once?
- A) `for` loop
- B) `while` loop
- C) `do-while` loop
- D) Infinite loop

---

### Question 2
What is the output of the following statement: `for(int i = 0; i < 5; i++); printf("%d", i);`? (Assume compiled under C99 standard).
- A) `0 1 2 3 4`
- B) `4`
- C) `5`
- D) Compilation Error (`i` out of scope)

---

### Question 3
In a `for` loop, which section executes exactly once?
- A) Initialization
- B) Condition
- C) Updation
- D) Body

---

### Question 4
What does the `continue` statement do inside a `for` loop?
- A) Exits the loop entirely.
- B) Skips the remaining code in the body and jumps to the updation section (`i++`).
- C) Skips the remaining code and jumps directly to the condition check without updating.
- D) Restarts the main program.

---

### Question 5
What causes a `while` loop to become an infinite loop?
- A) The condition evaluates to 0.
- B) The condition never evaluates to 0 (False).
- C) Using the `break` statement inside the body.
- D) Forgetting to initialize the iterator.

---

### Question 6
What is the final value of `i` after this statement finishes executing: `int i = 2; while(i-- > 0);`?
- A) `0`
- B) `-1`
- C) `1`
- D) `2`

---

### Question 7
Which delimiter is used to separate the three components inside a `for` loop signature?
- A) `,` (Comma)
- B) `:` (Colon)
- C) `;` (Semicolon)
- D) `|` (Pipe)

---

### Question 8
Can a `for` loop run without an initialization, condition, or updation section (e.g., `for(;;)` )?
- A) No, it throws a syntax error at compile time.
- B) Yes, but it does nothing and skips.
- C) Yes, it evaluates as a valid infinite loop.
- D) Only if variables are declared globally.

---

### Question 9
In nested loops, a `break` statement will:
- A) Exit all loops completely.
- B) Exit only the innermost loop it resides in.
- C) Exit the outermost parent loop.
- D) Act like a `continue` for the outer loop.

---

### Question 10
What is missing in this syntax: `do { i++; } while(i < 5)`?
- A) Braces around the `while` condition.
- B) A semicolon `;` at the end of the `while(i < 5)` statement.
- C) A colon `:` after `do`.
- D) Nothing is missing.
