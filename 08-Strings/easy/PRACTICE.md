# 🟢 Chapter 8 Easy Practice Workbook

> Practice workbook containing 10 beginner-level problems focused on manual vs. automatic character array initialization, the null terminator `'\0'`, single vs. double quote distinctions (`'A'` vs `"A"`), single-word input via `scanf("%s")`, visible length calculation with `strlen()`, string output using `puts()`, array storage allocation with `sizeof()`, string copying with `strcpy()`, string concatenation with `strcat()`, and string comparison using `strcmp()`.

---

## 🎯 Learning Objectives

- Construct C strings manually using character lists `{..., '\0'}` and string literals `"..."`.
- Distinguish between single-quoted single characters (`'A'`) and double-quoted strings (`"A"`).
- Read single-word input without `&` using `scanf("%s", str)`.
- Compute visible string length using `strlen()` from `<string.h>`.
- Display strings automatically with newlines using `puts()`.
- Measure total array byte capacity including `'\0'` using `sizeof()`.
- Copy, append, and compare C strings using `strcpy()`, `strcat()`, and `strcmp()`.

---

## 📊 Section Metadata

- **Estimated Difficulty**: 🟢 Easy
- **Total Problems**: 10 Questions
- **Topic Focus**: Manual & Automatic String Initialization, `'\0'`, `'A'` vs `"A"`, `scanf("%s")`, `strlen()`, `puts()`, `sizeof()`, `strcpy()`, `strcat()`, `strcmp()`

---

## 📈 Progress Checklist

- [ ] 01 The Manual Architect
- [ ] 02 The Automatic Builder
- [ ] 03 Character vs String Identity
- [ ] 04 Single-Word Greeting
- [ ] 05 The Length Calculator
- [ ] 06 Puts Output
- [ ] 07 Memory Occupied
- [ ] 08 The Duplicator
- [ ] 09 The Appender
- [ ] 10 Dictionary Checker

---

## 📝 Practice Questions

### Question 01: The Manual Architect

- **Difficulty**: Easy
- **Concepts Used**: Manual Initialization, `'\0'`
- **Problem Statement**:
  Declare a character array capable of storing the string `"C Code"`. Initialize it manually character-by-character using curly braces `{}`, ensuring you explicitly include the Null Character. Print the string using `printf`.
- **Sample Input**: *(No user input)*
- **Sample Output**:
  ```text
  C Code
  ```
- **Constraints**: You must use single quotes for each character.
- **Hints**:
  - *Hint 1*: The syntax looks like `char str[] = {'C', ... };`.
  - *Hint 2*: Don't forget the space character `' '`.
  - *Hint 3*: The very last element in the braces must be `'\0'`.

---

### Question 02: The Automatic Builder

- **Difficulty**: Easy
- **Concepts Used**: Automatic Initialization, String Literals
- **Problem Statement**:
  Declare a character array and initialize it with the string literal `"Hello"`. The compiler will automatically deduce the array size and insert the Null Character. Print the string.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Hello
  ```
- **Constraints**: Use double quotes for initialization.
- **Hints**:
  - *Hint 1*: `char greeting[] = "Hello";`
  - *Hint 2*: You do not need to write `'\0'` when using double quotes.
  - *Hint 3*: Use `%s` in your `printf` statement.

---

### Question 03: Character vs String Identity

- **Difficulty**: Easy
- **Concepts Used**: Character vs String Syntax, Single vs Double Quotes
- **Problem Statement**:
  Declare a single character variable containing the letter `A`, and a string (character array) containing the word `A`. Print both on separate lines using their appropriate format specifiers.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Character: A
  String: A
  ```
- **Constraints**: Use `%c` for the character and `%s` for the string.
- **Hints**:
  - *Hint 1*: Characters use single quotes: `char ch = 'A';`.
  - *Hint 2*: Strings use double quotes: `char str[] = "A";`.
  - *Hint 3*: `str` contains two bytes in memory (`'A'` and `'\0'`), while `ch` contains only one byte.

---

### Question 04: Single-Word Greeting

- **Difficulty**: Easy
- **Concepts Used**: `scanf("%s")`, String Input
- **Problem Statement**:
  Write a program that asks the user for their first name. Read the name using `scanf` and print `"Welcome, [Name]!"`.
- **Sample Input**:
  ```text
  Aman
  ```
- **Sample Output**:
  ```text
  Welcome, Aman!
  ```
- **Constraints**: Use `scanf("%s", name)`.
- **Hints**:
  - *Hint 1*: Declare a character array with a fixed size, e.g., `char name[50];`.
  - *Hint 2*: When reading a string with `scanf`, you do NOT use the `&` operator.
  - *Hint 3*: `scanf("%s", name);` is correct because an array name is already a pointer.

---

### Question 05: The Length Calculator

- **Difficulty**: Easy
- **Concepts Used**: `strlen()`, `<string.h>`
- **Problem Statement**:
  Take a single word as input from the user. Include the standard string library, and use the appropriate function to calculate and print the length of the string.
- **Sample Input**:
  ```text
  Programming
  ```
- **Sample Output**:
  ```text
  Length: 11
  ```
- **Constraints**: Include `<string.h>`.
- **Hints**:
  - *Hint 1*: The function to calculate string length is `strlen()`.
  - *Hint 2*: `strlen()` counts visible characters and strictly excludes the `'\0'`.
  - *Hint 3*: `int len = strlen(word);`

---

### Question 06: Puts Output

- **Difficulty**: Easy
- **Concepts Used**: `puts()`
- **Problem Statement**:
  Initialize a string with the value `"C Programming is fun"`. Instead of using `printf`, use the `puts()` function to display the string to the console.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  C Programming is fun
  ```
- **Constraints**: Use `puts()`.
- **Hints**:
  - *Hint 1*: `puts()` takes a string as its argument.
  - *Hint 2*: `puts(str);` automatically prints a newline at the end.
  - *Hint 3*: No format specifiers (`%s`) are needed for `puts()`.

---

### Question 07: Memory Occupied

- **Difficulty**: Easy
- **Concepts Used**: String Memory, `sizeof()`
- **Problem Statement**:
  Declare `char word[] = "Code";`. Print the memory occupied by this array using the `sizeof()` operator.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Memory occupied: 5 bytes
  ```
- **Constraints**: Understand why it is 5 and not 4.
- **Hints**:
  - *Hint 1*: `"Code"` contains 4 visible letters.
  - *Hint 2*: The compiler automatically adds the `'\0'` character at the end.
  - *Hint 3*: `sizeof(word)` calculates the total bytes including the Null Character.

---

### Question 08: The Duplicator

- **Difficulty**: Easy
- **Concepts Used**: `strcpy()`
- **Problem Statement**:
  Declare a source string containing `"Original"`, and an empty destination string of size 20. Use a `<string.h>` function to copy the source into the destination, then print the destination string.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Destination is now: Original
  ```
- **Constraints**: Do not try to assign arrays using `=`.
- **Hints**:
  - *Hint 1*: Use the `strcpy()` function.
  - *Hint 2*: The syntax is `strcpy(destination, source);`.
  - *Hint 3*: This copies all characters including the terminating `'\0'`.

---

### Question 09: The Appender

- **Difficulty**: Easy
- **Concepts Used**: `strcat()`, Destination Capacity
- **Problem Statement**:
  Declare a string `result[50] = "Hello ";` and a string `suffix[] = "World";`. Append the suffix to the result string using a standard library function. Print the combined result.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  HelloWorld
  ```
- **Constraints**: Use `<string.h>`.
- **Hints**:
  - *Hint 1*: Use the `strcat()` function for concatenation.
  - *Hint 2*: The syntax is `strcat(destination, source);`.
  - *Hint 3*: The destination string must have enough extra capacity to hold the source string.

---

### Question 10: Dictionary Checker

- **Difficulty**: Easy
- **Concepts Used**: `strcmp()`
- **Problem Statement**:
  Compare the strings `"Apple"` and `"Banana"` using a standard library function. Print the integer returned by the function.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Comparison result: -1 (or any negative number)
  ```
- **Constraints**: Do not use relational operators like `<` on the strings directly.
- **Hints**:
  - *Hint 1*: Use `strcmp()`.
  - *Hint 2*: `strcmp` does a lexicographical (ASCII) comparison.
  - *Hint 3*: Since `'A'` comes before `'B'`, the result will be a negative integer.
