# 🟢 Chapter 10 Easy Practice Workbook

> Practice workbook containing 10 beginner-level problems focused on file pointers (`FILE *`), file modes (`"r"`, `"w"`, `"a"`, `"wb"`), `NULL` safety checking (`if (fptr == NULL)`), formatted file I/O (`fprintf()`, `fscanf()`), character-by-character file I/O (`fputc()`, `fgetc()`), and the mandatory **OPEN ➜ WORK ➜ CLOSE** workflow (`fclose()`).

---

## 🎯 Learning Objectives

- Declare file pointers using `FILE *fptr`.
- Open files using `fopen()` in text (`"r"`, `"w"`, `"a"`) and binary (`"wb"`) modes.
- Implement `NULL` pointer safety guards to detect file opening failures.
- Write formatted values using `fprintf()` and read formatted values using `fscanf()`.
- Dispatch single characters to files using `fputc()` and retrieve single characters using `fgetc()`.
- Demonstrate the overwrite behavior of `"w"` mode versus the preservation behavior of `"a"` mode.
- Cleanly release file resources using `fclose()`.

---

## 📊 Section Metadata

- **Estimated Difficulty**: 🟢 Easy
- **Total Problems**: 10 Questions
- **Topic Focus**: File Pointer Declaration, `fopen()`, File Modes (`"r"`, `"w"`, `"a"`, `"wb"`), `NULL` Safety Check, `fclose()`, `fprintf()`, `fscanf()`, `fputc()`, `fgetc()`

---

## 📈 Progress Checklist

- [ ] 01 The Persistent Creator
- [ ] 02 The Missing File Guard
- [ ] 03 The Formatted Writer
- [ ] 04 The Formatted Reader
- [ ] 05 The Appender
- [ ] 06 Single Character Dispatch
- [ ] 07 Single Character Retrieval
- [ ] 08 Binary Mode Recognition
- [ ] 09 The Overwrite Trap
- [ ] 10 The Safe Closer

---

## 📝 Practice Questions

### Question 01: The Persistent Creator

- **Difficulty**: Easy
- **Concepts Used**: `FILE *`, `fopen()`, `"w"` mode, `fclose()`
- **Problem Statement**:
  Write a program that creates a new text file named `data.txt`. You do not need to write anything into it; just create it and cleanly close it.
- **Sample Input**: *(No input)*
- **Sample Output**: *(File `data.txt` is created on the disk)*
- **Constraints**: Use the exact correct file mode to ensure the file is created if it does not exist.
- **Hints**:
  - *Hint 1*: You need to declare a file pointer first.
  - *Hint 2*: Use `fopen("data.txt", "w");` to open the file in write mode.
  - *Hint 3*: Don't forget the golden rule: **OPEN ➜ WORK ➜ CLOSE**. Use `fclose()` at the end.

---

### Question 02: The Missing File Guard

- **Difficulty**: Easy
- **Concepts Used**: `"r"` mode, `NULL` checking
- **Problem Statement**:
  Write a program that attempts to open a file named `missing.txt` in read mode. Since the file does not exist, the program must detect the failure and print an error message instead of crashing.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Error opening file!
  ```
- **Constraints**: You must use an `if` statement to check for `NULL`.
- **Hints**:
  - *Hint 1*: `fopen()` returns a specific value when it fails to read a missing file.
  - *Hint 2*: Check if your file pointer equals `NULL`.
  - *Hint 3*: `if (fptr == NULL) { printf("Error..."); return 1; }`

---

### Question 03: The Formatted Writer

- **Difficulty**: Easy
- **Concepts Used**: `fprintf()`, Program ──► File
- **Problem Statement**:
  You have an integer variable `score = 95`. Write a program that opens `score.txt` in write mode and writes the value of `score` into the file using formatted output.
- **Sample Input**: *(No input)*
- **Sample Output**:
  *(Inside `score.txt`)*
  ```text
  95
  ```
- **Constraints**: Use `fprintf()`.
- **Hints**:
  - *Hint 1*: `fprintf` works exactly like `printf`, but it takes a file pointer as its first argument.
  - *Hint 2*: The syntax is `fprintf(file_pointer, "format_string", variables);`.
  - *Hint 3*: `fprintf(fptr, "%d", score);`

---

### Question 04: The Formatted Reader

- **Difficulty**: Easy
- **Concepts Used**: `fscanf()`, File ──► Program
- **Problem Statement**:
  Assume a file `input.txt` already exists and contains the number `42`. Write a program that opens this file in read mode, reads the integer into a variable, and prints it to the standard output (screen).
- **Sample Input**:
  *(Inside `input.txt`)*
  ```text
  42
  ```
- **Sample Output**:
  ```text
  Number read from file: 42
  ```
- **Constraints**: Use `fscanf()`.
- **Hints**:
  - *Hint 1*: `fscanf` requires the memory address of standard variables, just like `scanf`.
  - *Hint 2*: The syntax is `fscanf(file_pointer, "%d", &variable);`.
  - *Hint 3*: Don't forget the `&` operator before your integer variable inside `fscanf()`.

---

### Question 05: The Appender

- **Difficulty**: Easy
- **Concepts Used**: `"a"` mode
- **Problem Statement**:
  A file named `log.txt` already contains the text `"Start of log"`. Write a program that opens this file and adds the number `100` to the very end of it, without deleting the existing text.
- **Sample Input**: *(No input)*
- **Sample Output**:
  *(Inside `log.txt`)*
  ```text
  Start of log100
  ```
- **Constraints**: Do not overwrite the existing data.
- **Hints**:
  - *Hint 1*: You need to use the append mode.
  - *Hint 2*: Use `"a"` as the mode string in `fopen()`.
  - *Hint 3*: `fptr = fopen("log.txt", "a");` followed by `fprintf(fptr, "%d", 100);`

---

### Question 06: Single Character Dispatch

- **Difficulty**: Easy
- **Concepts Used**: `fputc()`, Program ──► File
- **Problem Statement**:
  Write a program that takes a character variable `char ch = 'Z';` and writes this single character to a file named `char.txt`.
- **Sample Input**: *(No input)*
- **Sample Output**:
  *(Inside `char.txt`)*
  ```text
  Z
  ```
- **Constraints**: You must use `fputc()`. Do not use `fprintf()`.
- **Hints**:
  - *Hint 1*: `fputc()` puts a single character into a file.
  - *Hint 2*: The arguments for `fputc` are the character first, then the file pointer.
  - *Hint 3*: `fputc(ch, fptr);`

---

### Question 07: Single Character Retrieval

- **Difficulty**: Easy
- **Concepts Used**: `fgetc()`, File ──► Program
- **Problem Statement**:
  Assume `letter.txt` contains the character `X`. Write a program that opens the file, reads exactly one character from it, and prints that character to the screen.
- **Sample Input**:
  *(Inside `letter.txt`)*
  ```text
  X
  ```
- **Sample Output**:
  ```text
  X
  ```
- **Constraints**: You must use `fgetc()`. Do not use `fscanf()`.
- **Hints**:
  - *Hint 1*: `fgetc()` retrieves one character from the file.
  - *Hint 2*: It takes only one argument: the file pointer.
  - *Hint 3*: `ch = fgetc(fptr); printf("%c", ch);`

---

### Question 08: Binary Mode Recognition

- **Difficulty**: Easy
- **Concepts Used**: `"wb"` mode
- **Problem Statement**:
  Write the C code required to open a file named `image.dat` for writing in binary format. Immediately check if the file opened successfully, and if so, close it.
- **Sample Input**: *(No input)*
- **Sample Output**: *(File `image.dat` created in binary mode)*
- **Constraints**: Use the binary write mode.
- **Hints**:
  - *Hint 1*: Text mode uses `"w"`. Binary mode adds a `b`.
  - *Hint 2*: The mode string should be `"wb"`.
  - *Hint 3*: `fptr = fopen("image.dat", "wb");`

---

### Question 09: The Overwrite Trap

- **Difficulty**: Easy
- **Concepts Used**: `"w"` mode behavior
- **Problem Statement**:
  A file `notes.txt` contains the word `"Important"`. Write a program that opens `notes.txt` in `"w"` mode, writes the number `5`, and closes the file. Open the file manually afterwards to observe what happened to the word `"Important"`.
- **Sample Input**: *(No input)*
- **Sample Output**:
  *(Inside `notes.txt`)*
  ```text
  5
  ```
- **Constraints**: Observe that `"Important"` is completely deleted.
- **Hints**:
  - *Hint 1*: The `"w"` mode stands for Write + Overwrite.
  - *Hint 2*: As soon as `fopen()` executes with `"w"`, the file is wiped clean.
  - *Hint 3*: Just `fopen` with `"w"`, `fprintf` the `5`, and `fclose`.

---

### Question 10: The Safe Closer

- **Difficulty**: Easy
- **Concepts Used**: `fclose()`, Proper Workflow
- **Problem Statement**:
  Write a complete, minimal program that opens `safe.txt` in read mode, checks if it is `NULL`, and if it is not `NULL`, cleanly closes the file.
- **Sample Input**: *(No input)*
- **Sample Output**: *(No visible output, but perfectly safe memory behavior)*
- **Constraints**: Include `<stdio.h>` and follow the **OPEN ➜ CHECK ➜ CLOSE** workflow.
- **Hints**:
  - *Hint 1*: `fclose()` requires the file pointer as an argument.
  - *Hint 2*: Place `fclose(fptr);` at the very end of your `main()` function, just before `return 0;`.
  - *Hint 3*: If the file is `NULL`, you `return 1;`. Otherwise, proceed to `fclose(fptr);`.
