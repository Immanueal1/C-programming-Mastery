# 🔴 Hard Practice Questions

> Practice workbook containing 10 advanced problems focusing on progressive tariffs, state machines, hardware tolerance bands, nested ternary expressions, priority flags, and full date validation.

---

## 🎯 Learning Objectives

- Calculate progressive tiered billing and income tax slabs accurately.
- Sequence error checks in precise priority order (ATM state machine).
- Nest `switch` statements inside `if` conditionals for hardware control.
- Solve 4-variable comparisons using purely nested ternary operators (`? :`).
- Formulate spatial overlap conditions and full calendar date validation rules.

---

## 📊 Section Metadata

- **Estimated Difficulty**: 🔴 Hard
- **Total Problems**: 10 Questions
- **Topic Focus**: Tiered Formulas, State Machines, Nested Ternary & Priority Flags

---

## 📈 Progress Checklist

- [ ] 21 Bhilai Power Grid Tariff
- [ ] 22 ATM Withdrawal State Machine
- [ ] 23 E&TC Component Tolerance Band
- [ ] 24 Anime Binge Decider
- [ ] 25 The Ultimate Ternary Puzzle
- [ ] 26 Hospital Triage System
- [ ] 27 Income Tax Calculator
- [ ] 28 Embedded System State Machine
- [ ] 29 Intersecting Rectangles
- [ ] 30 Date Validity Checker

---

## Question 21: Bhilai Power Grid Tariff

- **Difficulty**: Hard
- **Concepts Used**: Tiered Calculation, Nested Logic
- **Problem Statement**:
  Calculate the electricity bill based on units consumed:
  - First 100 units: ₹3.00/unit
  - Next 100 units: ₹4.50/unit
  - Next 300 units: ₹6.50/unit
  - Above 500 units: ₹8.00/unit
  A fixed surcharge of ₹50 is added. If the total bill exceeds ₹1000, an additional 10% tax is added. Print the final bill.
- **Sample Input**:
  ```text
  250
  ```
- **Sample Output**:
  ```text
  Final Bill: 1125.00
  ```
- **Constraints**: You must calculate the bill progressively (e.g., 250 units = 100@3.00 + 100@4.50 + 50@6.50).
- **Hints**:
  - *Hint 1*: Use `else-if` to isolate the tiers.
  - *Hint 2*: If units > 200, the cost is `(100 * 3) + (100 * 4.5) + ((units - 200) * 6.5)`.
  - *Hint 3*: Apply the 10% tax at the very end using a separate `if` block.

---

## Question 22: ATM Withdrawal State Machine

- **Difficulty**: Hard
- **Concepts Used**: Deep Nested `if`
- **Problem Statement**:
  Simulate an ATM withdrawal. Given an `account_balance` of ₹5000:
  1. Read the `withdrawal_amount`.
  2. Check if the amount is a multiple of 100. If not, print "Error: Amount must be in multiples of 100".
  3. Check if the amount exceeds the balance. If so, print "Error: Insufficient Funds".
  4. If valid, check if the amount exceeds the daily limit of ₹2000. If it does, print "Error: Daily Limit Exceeded".
  5. If all checks pass, print "Transaction Successful" and print the remaining balance.
- **Sample Input**:
  ```text
  2500
  ```
- **Sample Output**:
  ```text
  Error: Daily Limit Exceeded
  ```
- **Constraints**: Process errors in the exact priority order listed.
- **Hints**:
  - *Hint 1*: Use a nested `if` structure or sequential `if-else if` guards.
  - *Hint 2*: The modulo operator `% 100 != 0` handles the first check.
  - *Hint 3*: Update the balance and print it only in the final success block.

---

## Question 23: E&TC Component Tolerance Band

- **Difficulty**: Hard
- **Concepts Used**: Range Mapping
- **Problem Statement**:
  In hardware design, a resistor has a target resistance of 1000 ohms. Read the actual manufactured resistance.
  - Within $\pm 1\%$ (990 - 1010) ➜ "Band A (Premium)"
  - Outside Band A but within $\pm 5\%$ (950 - 1050) ➜ "Band B (Standard)"
  - Outside Band B but within $\pm 10\%$ (900 - 1100) ➜ "Band C (Acceptable)"
  - Otherwise ➜ "Defective"
- **Sample Input**:
  ```text
  945
  ```
- **Sample Output**:
  ```text
  Defective
  ```
- **Constraints**: Use precise logical boundaries.
- **Hints**:
  - *Hint 1*: Check the tightest range first (Band A).
  - *Hint 2*: For Band B, you only need to check `>= 950 && <= 1050` because if it were in Band A, the first `if` would have caught it.
  - *Hint 3*: Fall back to "Defective" in the `else` block.

---

## Question 24: Anime Binge Decider

- **Difficulty**: Hard
- **Concepts Used**: Arithmetic & Logic Synthesis
- **Problem Statement**:
  You have T minutes of free time before a tutoring session. A standard anime episode is exactly 24 minutes long. Read T.
  - If $T < 24$, print "Not enough time, review notes.".
  - If $24 \le T < 48$, print "Watch 1 episode.".
  - If $48 \le T < 120$, calculate how many ($T / 24$) and print "Watch X episodes.".
  - If $T \ge 120$ (2 hours), print "Binge watch! You can finish X episodes."
- **Sample Input**:
  ```text
  130
  ```
- **Sample Output**:
  ```text
  Binge watch! You can finish 5 episodes.
  ```
- **Constraints**: Evaluate top-down efficiently.
- **Hints**:
  - *Hint 1*: Calculate the `episodes = T / 24` variable first.
  - *Hint 2*: The $T \ge 120$ check should be the first condition you check in your `if-else` ladder.
  - *Hint 3*: Handle the singular "1 episode" versus plural "X episodes" properly.

---

## Question 25: The Ultimate Ternary Puzzle

- **Difficulty**: Hard
- **Concepts Used**: Nested Ternary Operators (`? :`)
- **Problem Statement**:
  Read four distinct integers: A, B, C, and D. Find and print the absolute largest among them.
- **Sample Input**:
  ```text
  12
  89
  45
  67
  ```
- **Sample Output**:
  ```text
  Largest is 89
  ```
- **Constraints**: You are STRICTLY FORBIDDEN from using `if`, `else`, or `switch`. You MUST find the maximum using ONLY the ternary operator (`? :`).
- **Hints**:
  - *Hint 1*: Break it down. Find the max of A and B (`max1`), and max of C and D (`max2`).
  - *Hint 2*: `max1 = (A > B) ? A : B;`
  - *Hint 3*: Compare `max1` and `max2` using a third ternary operation.

---

## Question 26: Hospital Triage System

- **Difficulty**: Hard
- **Concepts Used**: Priority Logic Flags
- **Problem Statement**:
  Read three integer flags (0 or 1) representing patient symptoms: `breathing_issue`, `bleeding`, and `fever`.
  - `breathing_issue` AND `bleeding` are both 1 ➜ "Priority 1: Code Red".
  - Only one of those two is 1 ➜ "Priority 2: Urgent".
  - Neither are 1, but `fever` is 1 ➜ "Priority 3: Standard Care".
  - All are 0 ➜ "Priority 4: Routine Checkup".
- **Sample Input**:
  ```text
  0
  1
  1
  ```
- **Sample Output**:
  ```text
  Priority 2: Urgent
  ```
- **Constraints**: Implement strict Boolean logic.
- **Hints**:
  - *Hint 1*: The first condition is `(breathing == 1 && bleeding == 1)`.
  - *Hint 2*: The second condition is an XOR logic: `(breathing == 1 || bleeding == 1)`.
  - *Hint 3*: The third is just `else if (fever == 1)`.

---

## Question 27: Income Tax Calculator

- **Difficulty**: Hard
- **Concepts Used**: Tiered Mathematical Logic
- **Problem Statement**:
  Calculate annual income tax based on the following slabs:
  - Up to ₹3,00,000: No Tax (0%)
  - ₹3,00,001 to ₹6,00,000: 5% of income exceeding 3L.
  - ₹6,00,001 to ₹9,00,000: ₹15,000 + 10% of income exceeding 6L.
  - Above ₹9,00,000: ₹45,000 + 20% of income exceeding 9L.
  Read the total income and print the calculated tax.
- **Sample Input**:
  ```text
  750000
  ```
- **Sample Output**:
  ```text
  Tax: 30000.00
  ```
- **Constraints**: Use floats for tax calculation to ensure precision.
- **Hints**:
  - *Hint 1*: For 7.5L, it falls in the 3rd slab. Tax = 15,000 + 10% of (7,50,000 - 6,00,000).
  - *Hint 2*: `tax = 15000 + 0.10 * (income - 600000);`
  - *Hint 3*: Use an `else-if` ladder starting from the highest or lowest slab.

---

## Question 28: Embedded System State Machine

- **Difficulty**: Hard
- **Concepts Used**: `switch` inside `if`
- **Problem Statement**:
  Simulate a hardware device. The device is either Powered On (1) or Off (0). Read the power state. If it is Off, print "System Offline". If it is On, read a second input, an operation code (1, 2, or 3).
  - Code 1: "Running Diagnostics"
  - Code 2: "Calibrating Sensors"
  - Code 3: "Transmitting Data"
  - Any other code: "Unknown Command"
- **Sample Input**:
  ```text
  1
  2
  ```
- **Sample Output**:
  ```text
  Calibrating Sensors
  ```
- **Constraints**: You must use a `switch` statement embedded inside an `if` block.
- **Hints**:
  - *Hint 1*: `if (power == 0)` handles the offline state.
  - *Hint 2*: The `else` block prompts/reads the operation code.
  - *Hint 3*: Use a `switch(opcode)` inside that `else` block to handle 1, 2, 3, and `default`.

---

## Question 29: Intersecting Rectangles

- **Difficulty**: Hard
- **Concepts Used**: Spatial Logic
- **Problem Statement**:
  Given a 1D line segment from $x_1$ to $x_2$ (where $x_1 < x_2$) and another segment from $x_3$ to $x_4$ (where $x_3 < x_4$). Read all four integers. Print "Overlap" if the two line segments overlap, and "No Overlap" if they do not.
- **Sample Input**:
  ```text
  1 5
  4 8
  ```
- **Sample Output**:
  ```text
  Overlap
  ```
- **Constraints**: Think about what proves they DO NOT overlap. It's much easier to check.
- **Hints**:
  - *Hint 1*: They do NOT overlap if the first line ends before the second begins ($x_2 < x_3$).
  - *Hint 2*: They also do NOT overlap if the second line ends before the first begins ($x_4 < x_1$).
  - *Hint 3*: Therefore, they OVERLAP if `!(x2 < x3 || x4 < x1)`.

---

## Question 30: Date Validity Checker

- **Difficulty**: Hard
- **Concepts Used**: Extremely nested/chained logic
- **Problem Statement**:
  Read three integers representing Day, Month, and Year. Validate if the date is real.
  - Months must be 1-12.
  - Days must be valid for the given month (e.g., April has 30 days, May has 31).
  - February has 29 days ONLY in a leap year, otherwise 28.
  Print "Valid Date" or "Invalid Date".
- **Sample Input**:
  ```text
  29
  2
  2023
  ```
- **Sample Output**:
  ```text
  Valid Date
  ```
- **Constraints**: Combine year, month, and day logic gracefully.
- **Hints**:
  - *Hint 1*: Validate the month first (`month >= 1 && month <= 12`). If false, Invalid.
  - *Hint 2*: For Feb (Month 2), calculate leap year logic to set `max_days` to 28 or 29.
  - *Hint 3*: For months 4, 6, 9, 11, `max_days = 30`. For others, 31. Finally check if `day >= 1 && day <= max_days`.
