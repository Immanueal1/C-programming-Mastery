# 🟡 Chapter 8: Medium Practice Problems

> Intermediate C programming challenges focusing on the `scanf("%s")` whitespace trap, multi-word input via `fgets(str, n, stdin)`, visible length vs. array storage capacity (`strlen` vs `sizeof`), array non-reassignability vs. character pointer reassignability (`char str[]` vs `char *str`), manual string truncation with `'\0'`, password salting logic with `strcpy` and `strcat`, exact string equality checks with `strcmp`, and string concatenation length tracking.

---

## 📌 Short Description

This directory contains 10 intermediate practice problems designed to master input whitespace limitations, bounded line reading with `fgets()`, character counting vs. RAM storage capacity, character pointer address mutation vs. constant array immutability, explicit `'\0'` insertion for string truncation, sequential `strcpy()` and `strcat()` password salting algorithms, and lexicographical content verification with `strcmp()`.

---

## 📚 Topics Covered

- [x] Observing `scanf("%s")` Whitespace Cutoff Limitations
- [x] Safe Multi-Word Line Input using `fgets(str, n, stdin)`
- [x] Character Count (`strlen`) vs. Allocated Byte Capacity (`sizeof`)
- [x] Array Non-reassignability & Character Pointer Reassignability (`char *str` vs `char str[]`)
- [x] Manual String Truncation by Injecting `'\0'` at Specified Indexes
- [x] Safe String Copying into Dedicated Backup Buffers using `strcpy()`
- [x] Password Salting Application Logic (`strcpy` + `strcat`)
- [x] Exact String Equality Checks using `strcmp()` (Content vs. Address `==`)
- [x] String Concatenation (`strcat`) & Post-Concatenation Length Tracking

---

## 🎯 Learning Objectives

- Observe whitespace cutoff behavior in `scanf("%s")` and replace it with safe `fgets()` input.
- Distinguish between character count (`strlen`) and memory allocation capacity (`sizeof`).
- Understand why character array names cannot be reassigned (`str = "New"`) while character pointers can.
- Manually truncate strings by injecting `'\0'` at specific array indexes.
- Apply password salting using `strcpy()` and `strcat()` sequentially.
- Verify exact string content equality using `strcmp()` instead of pointer address comparisons (`==`).

---

## 📈 Progress Checklist

- [ ] 11 The Whitespace Trap
- [ ] 12 Safe Multi-Word Input
- [ ] 13 Length vs Storage Size
- [ ] 14 Array Immutability Trap
- [ ] 15 The Mutable Pointer
- [ ] 16 Manual String Truncation
- [ ] 17 Safe Copying
- [ ] 18 Salting a Password Concept
- [ ] 19 Exact Match Verifier
- [ ] 20 Appending Names

---

## 📁 Folder Contents

| File | Title | Concepts Used |
| :--- | :--- | :--- |
| [`11_the_whitespace_trap.c`](./11_the_whitespace_trap.c) | The Whitespace Trap | `scanf("%s")` behavior |
| [`12_safe_multi_word_input.c`](./12_safe_multi_word_input.c) | Safe Multi-Word Input | `fgets()`, Standard Input |
| [`13_length_vs_storage_size.c`](./13_length_vs_storage_size.c) | Length vs Storage Size | `strlen()` vs `sizeof()` |
| [`14_array_immutability_trap.c`](./14_array_immutability_trap.c) | Array Immutability Trap | Array non-reassignment |
| [`15_the_mutable_pointer.c`](./15_the_mutable_pointer.c) | The Mutable Pointer | Pointer reassignment, `char *str` |
| [`16_manual_string_truncation.c`](./16_manual_string_truncation.c) | Manual String Truncation | The Null Character `'\0'` |
| [`17_safe_copying.c`](./17_safe_copying.c) | Safe Copying | `strcpy()`, Destination Capacity |
| [`18_salting_a_password_concept.c`](./18_salting_a_password_concept.c) | Salting a Password Concept | Password Salting, `strcpy()`, `strcat()` |
| [`19_exact_match_verifier.c`](./19_exact_match_verifier.c) | Exact Match Verifier | `strcmp()`, Equality Check |
| [`20_appending_names.c`](./20_appending_names.c) | Appending Names | `strcat()` |

---

## 📝 Practice Questions

### Question 11: The Whitespace Trap

- **Difficulty**: Medium
- **Concepts Used**: `scanf("%s")` behavior
- **Problem Statement**:
  Write a program that uses `scanf("%s", name);` to read a user's full name (first and last name separated by a space). Print the name. Observe and understand why only the first name prints.
- **Sample Input**:
  ```text
  Shradha Khapra
  ```
- **Sample Output**:
  ```text
  Read name: Shradha
  ```
- **Constraints**: You must use `%s` with `scanf`.
- **Hints**:
  - *Hint 1*: `scanf("%s")` stops reading input the moment it encounters any whitespace (space, tab, or newline).
  - *Hint 2*: The remainder of the input (`" Khapra"`) stays in the input buffer.
  - *Hint 3*: This is a major limitation of `%s` for multi-word strings.

---

### Question 12: Safe Multi-Word Input

- **Difficulty**: Medium
- **Concepts Used**: `fgets()`, Standard Input
- **Problem Statement**:
  Fix the previous program. Read the user's full name safely, including spaces, allowing up to 50 characters. Print the full name back to the console.
- **Sample Input**:
  ```text
  Shradha Khapra
  ```
- **Sample Output**:
  ```text
  Full name: Shradha Khapra
  ```
- **Constraints**: You MUST use `fgets()`. Do not use the unsafe `gets()` function.
- **Hints**:
  - *Hint 1*: `fgets` requires three parameters: the buffer, the max length, and the input stream.
  - *Hint 2*: The input stream for standard keyboard input is `stdin`.
  - *Hint 3*: `fgets(name, 50, stdin);`

---

### Question 13: Length vs Storage Size

- **Difficulty**: Medium
- **Concepts Used**: `strlen()` vs `sizeof()`
- **Problem Statement**:
  Declare a large string buffer: `char str[100] = "Programming";`. Print both its `strlen()` and its `sizeof()`.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Length: 11
  Size: 100
  ```
- **Constraints**: Understand the difference between the two metrics.
- **Hints**:
  - *Hint 1*: `strlen()` counts the characters until it hits `'\0'`.
  - *Hint 2*: `sizeof()` evaluates the total allocated memory capacity of the array.
  - *Hint 3*: The array is size 100, but only 11 characters are currently "visible" string data.

---

### Question 14: Array Immutability Trap

- **Difficulty**: Medium
- **Concepts Used**: Array non-reassignment
- **Problem Statement**:
  Declare `char name[] = "Hello";`. Try to reassign it by writing `name = "World";`. Notice the compiler error. Write a comment explaining why this fails, and fix the code to update the string contents to `"World"` properly using a library function.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Updated name: World
  ```
- **Constraints**: Use the proper `<string.h>` function to bypass the reassignment restriction.
- **Hints**:
  - *Hint 1*: An array name acts as a constant pointer to its base address. You cannot reassign the base address.
  - *Hint 2*: To change the contents of a character array, you must copy new characters into it.
  - *Hint 3*: Use `strcpy(name, "World");`.

---

### Question 15: The Mutable Pointer

- **Difficulty**: Medium
- **Concepts Used**: Pointer reassignment, `char *str`
- **Problem Statement**:
  Unlike character arrays, character pointers CAN be reassigned. Declare a character pointer `char *ptr = "Initial";`. Print it. Then, directly reassign the pointer using `ptr = "Updated";` and print it again.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  First: Initial
  Second: Updated
  ```
- **Constraints**: Do not use `strcpy`. Use the pointer reassignment feature.
- **Hints**:
  - *Hint 1*: `char *ptr` points to a string literal in read-only memory.
  - *Hint 2*: Reassigning the pointer simply makes it point to a different string literal in memory.
  - *Hint 3*: `ptr = "Updated";` is completely valid syntax for pointers.

---

### Question 16: Manual String Truncation

- **Difficulty**: Medium
- **Concepts Used**: The Null Character `'\0'`
- **Problem Statement**:
  Declare an array `char str[] = "HelloWorld";`. By directly accessing an array index, insert a Null Character manually exactly at index 5. Print the string.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Hello
  ```
- **Constraints**: Do not use string library functions.
- **Hints**:
  - *Hint 1*: A C string officially ends wherever the first `'\0'` is encountered, regardless of what comes after it.
  - *Hint 2*: Index 5 is the `'W'` character.
  - *Hint 3*: Write `str[5] = '\0';`

---

### Question 17: Safe Copying

- **Difficulty**: Medium
- **Concepts Used**: `strcpy()`, Destination Capacity
- **Problem Statement**:
  Ask the user to enter a single word string. Copy this word into a backup buffer named `backup[50]`. Print both the original and the backup strings to prove it worked.
- **Sample Input**:
  ```text
  Safety
  ```
- **Sample Output**:
  ```text
  Original: Safety
  Backup: Safety
  ```
- **Constraints**: Use `strcpy()`.
- **Hints**:
  - *Hint 1*: Declare `char input[50];` and `char backup[50];`.
  - *Hint 2*: Use `scanf("%s", input);`.
  - *Hint 3*: Call `strcpy(backup, input);`.

---

### Question 18: Salting a Password Concept

- **Difficulty**: Medium
- **Concepts Used**: Password Salting, `strcpy()`, `strcat()`
- **Problem Statement**:
  A user provides a password. You must "salt" it by appending the string `"123"` to the end. Take a password input using `scanf`, copy it to a secure buffer `storedPass[100]`, append `"123"`, and print the final stored password.
- **Sample Input**:
  ```text
  myPass
  ```
- **Sample Output**:
  ```text
  Stored Password: myPass123
  ```
- **Constraints**: Use both `strcpy` and `strcat`.
- **Hints**:
  - *Hint 1*: Copy the original password into the large `storedPass` array first.
  - *Hint 2*: Define your salt: `char salt[] = "123";`.
  - *Hint 3*: Use `strcat(storedPass, salt);` to append the salt.

---

### Question 19: Exact Match Verifier

- **Difficulty**: Medium
- **Concepts Used**: `strcmp()`, Equality Check
- **Problem Statement**:
  Read two single-word strings from the user. Use `strcmp()` to check if they are perfectly identical. If they are, print `"Match"`. Otherwise, print `"No Match"`.
- **Sample Input**:
  ```text
  Apple
  Apple
  ```
- **Sample Output**:
  ```text
  Match
  ```
- **Constraints**: Do not use `str1 == str2`.
- **Hints**:
  - *Hint 1*: `str1 == str2` compares memory addresses, not the text!
  - *Hint 2*: `strcmp()` returns 0 when strings are identical.
  - *Hint 3*: `if (strcmp(s1, s2) == 0)`

---

### Question 20: Appending Names

- **Difficulty**: Medium
- **Concepts Used**: `strcat()`
- **Problem Statement**:
  Declare `char fName[50] = "First ";` and `char lName[] = "Last";`. Concatenate `lName` onto `fName` and print the result. What is the length of the new string? Print the length.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Name: First Last
  Length: 10
  ```
- **Constraints**: Use `<string.h>` functions.
- **Hints**:
  - *Hint 1*: `strcat(fName, lName);`
  - *Hint 2*: The destination `fName` now holds the combined string.
  - *Hint 3*: Call `strlen(fName)` to get the final length.

---

## 🔗 Navigation Links

- 📋 **[View Complete Practice Workbook (`PRACTICE.md`)](./PRACTICE.md)**
- 🟢 **[Return to Easy Practice (`../easy/`)](../easy/)**
- 🔴 **[Proceed to Hard Practice (`../hard/`)](../hard/)**
- 🏠 **[Return to Chapter 8 Overview (`../README.md`)](../README.md)**
