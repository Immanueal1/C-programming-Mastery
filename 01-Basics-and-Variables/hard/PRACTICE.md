# 🔴 Hard Practice Questions

> Practice workbook containing 10 advanced problems focusing on digit manipulation, buffer handling, memory layout, and production-style terminal formatting.

---

## 📈 Progress Checklist

- [ ] 21 TCS Digital Candidate ID
- [ ] 22 ATM Dispenser
- [ ] 23 Electronic Components Bill
- [ ] 24 Reverse a 3-Digit Number
- [ ] 25 Add Digits of a 4-Digit Number
- [ ] 26 Fractional and Integer Split
- [ ] 27 Anime Watchlist Table
- [ ] 28 Volumetric Density
- [ ] 29 Architecture Memory Inspector
- [ ] 30 Academy Registration Terminal

---

## Question 21: TCS Digital Candidate ID

- **Difficulty**: Hard
- **Concepts Used**: Multiple I/O, Advanced Formatting
- **Problem Statement**:
  Generate a console-based ID Card. Read a candidate's First Initial (char), Last Initial (char), Age (int), and Aptitude Score (float). Print a boxed ID card.
- **Sample Input**:
  ```text
  K
  G
  21
  94.5
  ```
- **Sample Output**:
  ```text
  ========================
      TCS DIGITAL ID      
  ========================
  Initials : K. G.
  Age      : 21
  Score    : 94.50
  ========================
  ```
- **Constraints**: Output must match the visual spacing exactly using manual spaces or tabs.
- **Hints**:
  - *Hint 1*: Read all inputs safely. Beware of leftover newline characters when scanning char after int/float.
  - *Hint 2*: Use `\n` to draw the borders.
  - *Hint 3*: Add a space before `%c` in `scanf` (e.g., `scanf(" %c", &initial);`) to ignore whitespace.

---

## Question 22: ATM Dispenser

- **Difficulty**: Hard
- **Concepts Used**: Deep Integer Math, Truncation
- **Problem Statement**:
  An ATM gives out ₹100, ₹50, and ₹10 notes. Given an exact withdrawal amount (a multiple of 10), calculate the minimum number of each note required.
- **Sample Input**: `880`
- **Sample Output**:
  ```text
  100 Notes: 8
  50 Notes: 1
  10 Notes: 3
  ```
- **Constraints**: No loops or conditionals allowed.
- **Hints**:
  - *Hint 1*: Divide the amount by 100 to get the 100 notes.
  - *Hint 2*: Update the remaining amount using the modulo operator (`% 100`).
  - *Hint 3*: Repeat the process for 50, then 10.

---

## Question 23: Electronic Components Bill

- **Difficulty**: Hard
- **Concepts Used**: Sequential Processing, Floating Math
- **Problem Statement**:
  You buy an ESP32 for ₹450, a Breadboard for ₹80, and Jumper Wires for ₹50. Ask the user for the quantity of each item they bought. Calculate the subtotal, add 18% GST, and print the Final Total.
- **Sample Input**:
  ```text
  2
  1
  3
  ```
- **Sample Output**:
  ```text
  Subtotal: 1130.00
  GST (18%): 203.40
  Total: 1333.40
  ```
- **Constraints**: Use appropriate `const` variables for item prices.
- **Hints**:
  - *Hint 1*: `subtotal = (qty1 * 450) + (qty2 * 80) + (qty3 * 50);`
  - *Hint 2*: `gst = subtotal * 0.18;`
  - *Hint 3*: `total = subtotal + gst;`

---

## Question 24: Reverse a 3-Digit Number

- **Difficulty**: Hard
- **Concepts Used**: Modulo and Division chaining
- **Problem Statement**:
  Take a 3-digit integer from the user (e.g., 456). Extract its individual digits and print the number in reverse mathematically.
- **Sample Input**: `456`
- **Sample Output**:
  ```text
  Reversed: 654
  ```
- **Constraints**: You must calculate it as an integer, not just print the characters in reverse (i.e., `reversed = 654`).
- **Hints**:
  - *Hint 1*: The last digit is `num % 10`.
  - *Hint 2*: To remove the last digit from the number, do `num = num / 10`.
  - *Hint 3*: `reversed = (digit3 * 100) + (digit2 * 10) + digit1;`

---

## Question 25: Add Digits of a 4-Digit Number

- **Difficulty**: Hard
- **Concepts Used**: Sequential digit extraction
- **Problem Statement**:
  Given a 4-digit number, calculate the sum of its 4 digits.
- **Sample Input**: `1048`
- **Sample Output**:
  ```text
  Sum of digits: 13
  ```
- **Constraints**: No loops permitted.
- **Hints**:
  - *Hint 1*: Use the same modulo/division logic from the previous problem.
  - *Hint 2*: Extract a digit, add it to a sum variable, divide the number by 10. Repeat 4 times.
  - *Hint 3*: `d1 = n % 10; n = n / 10; ... sum = d1 + d2 + d3 + d4;`

---

## Question 26: Fractional and Integer Split

- **Difficulty**: Hard
- **Concepts Used**: Typecasting Logic
- **Problem Statement**:
  Read a floating-point number. Split it into its integer part and its fractional part, and print them separately.
- **Sample Input**: `14.567`
- **Sample Output**:
  ```text
  Integer part: 14
  Fractional part: 0.567000
  ```
- **Constraints**: Use typecasting `(int)`.
- **Hints**:
  - *Hint 1*: To get the integer part, cast the float to an int.
  - *Hint 2*: To get the fractional part, subtract the integer part from the original float.
  - *Hint 3*: `intpart = (int)num; fracpart = num - intpart;`

---

## Question 27: Anime Watchlist Table

- **Difficulty**: Hard
- **Concepts Used**: Left-Justified Formatting (`%-15s`)
- **Problem Statement**:
  Print a perfectly aligned 2-column table displaying your Anime watchlist. Column 1 (Title) should be exactly 15 characters wide and left-aligned. Column 2 (Episodes) should be 8 characters wide and right-aligned.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  Title           Episodes
  Naruto               500
  Death Note            37
  Bleach               366
  ```
- **Constraints**: Strings can be hardcoded directly into the `printf` statement.
- **Hints**:
  - *Hint 1*: A negative sign in the format specifier makes it left-aligned.
  - *Hint 2*: `%15s` is right-aligned. `%-15s` is left-aligned.
  - *Hint 3*: `printf("%-15s %8d\n", "Naruto", 500);`

---

## Question 28: Volumetric Density

- **Difficulty**: Hard
- **Concepts Used**: Complex Formula Mapping
- **Problem Statement**:
  Density ($D$) is Mass ($M$) divided by Volume ($V$). You have a cylinder. Read its Mass ($M$), Radius ($R$), and Height ($H$). Calculate Volume ($V = \text{PI} \times R^2 \times H$), and then calculate Density.
- **Sample Input**:
  ```text
  150.0
  2.0
  10.0
  ```
- **Sample Output**:
  ```text
  Volume: 125.66
  Density: 1.19
  ```
- **Constraints**: Print float to 2 decimal places. Use `#define PI 3.14159`.
- **Hints**:
  - *Hint 1*: $R^2$ is simply `R * R`.
  - *Hint 2*: Calculate volume first, store it, then use it for density.
  - *Hint 3*: `D = M / V;`

---

## Question 29: Architecture Memory Inspector

- **Difficulty**: Hard
- **Concepts Used**: `sizeof()` operator, `%lu` specifier
- **Problem Statement**:
  Write a program that proves the amount of memory (in bytes) your specific compiler allocates for an `int`, `float`, `double`, and `char`.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  Size of int: 4 bytes
  Size of float: 4 bytes
  Size of double: 8 bytes
  Size of char: 1 bytes
  ```
- **Constraints**: You must use the `sizeof()` operator.
- **Hints**:
  - *Hint 1*: `sizeof()` evaluates the memory footprint of a data type.
  - *Hint 2*: `sizeof()` returns an unsigned long integer (`%lu` / `%zu`).
  - *Hint 3*: `printf("Size of int: %lu bytes\n", sizeof(int));`

---

## Question 30: Academy Registration Terminal

- **Difficulty**: Hard
- **Concepts Used**: All Chapter 1 Concepts Combined
- **Problem Statement**:
  Create a single program that runs a full registration sequence. Prompt for Student ID (int), Subject Code (char), and Distance from Academy in km (float). Print a formatted confirmation ticket with a dashed border, displaying all data accurately, formatting the float to 1 decimal place.
- **Sample Input**:
  ```text
  1024
  P
  12.45
  ```
- **Sample Output**:
  ```text
  -------------------------
     REGISTRATION TICKET   
  -------------------------
  ID      : 1024
  Subject : P
  Dist.   : 12.5 km
  -------------------------
  ```
- **Constraints**: Must handle the newline character trap when scanning characters.
- **Hints**:
  - *Hint 1*: Read the int, then the char, then the float.
  - *Hint 2*: `scanf("%d", &id); scanf(" %c", &subject); scanf("%f", &distance);`
  - *Hint 3*: Carefully build your `printf` layout using `\n` to structure the borders and alignments.
