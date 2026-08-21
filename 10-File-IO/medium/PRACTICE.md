# 🟡 Chapter 10 Medium Practice Workbook

> Practice workbook containing 10 intermediate problems focusing on sequential `fscanf()` loops, dynamic logger appenders (`"a"` mode), `while(1)` EOF traversal, character counters, multi-file stream copy utilities (`fgetc()` + `fputc()`), multiplication table generation via `fprintf()`, dynamic filename inputs, line counting via newline detection (`\n`), multi-phase read/append data merging, and whitespace literal reading with `fgetc()`.

---

## 🎯 Learning Objectives

- Use sequential `fscanf()` calls to read multiple formatted values.
- Build logging systems using `"a"` append mode.
- Construct standard infinite `while(1)` EOF loops to process file streams character-by-character.
- Implement file counter algorithms (counting characters and lines).
- Manage multiple file pointers simultaneously to copy data from source to destination files.
- Combine loop structures with `fprintf()` to generate structured text documents.
- Prompt users for dynamic filenames and handle file opening checks.
- Execute multi-phase file handling workflows (Read ➜ Close ➜ Append ➜ Close).
- Understand literal whitespace character reading via `fgetc()`.

---

## 📊 Section Metadata

- **Estimated Difficulty**: 🟡 Medium
- **Total Problems**: 10 Questions
- **Topic Focus**: Multi-`fscanf()`, `"a"` Logger Appending, `while(1)` EOF Loop, Character Counter, File Copying (`fgetc()` + `fputc()`), `fprintf()` Loops, Dynamic Filenames, Line Counter (`\n`), Two-Phase File Merging, Literal Character Reading

---

## 📈 Progress Checklist

- [ ] 11 Multi-Integer Reader
- [ ] 12 The Appending Logger
- [ ] 13 The End Of File (EOF) Traversal
- [ ] 14 Character Counter
- [ ] 15 The Copycat
- [ ] 16 Multiplication Table Generator
- [ ] 17 Safe File Opener
- [ ] 18 Line Counter
- [ ] 19 Formatted Data Merger
- [ ] 20 The Invisible Space

---

## 📝 Practice Questions

### Question 11: Multi-Integer Reader

- **Difficulty**: Medium
- **Concepts Used**: `fscanf()` loop
- **Problem Statement**:
  A file `numbers.txt` contains three integers separated by spaces: `10 20 30`. Write a program that reads all three integers one by one using `fscanf()` and calculates their sum. Print the sum to the screen.
- **Sample Input**:
  *(Inside `numbers.txt`)*
  ```text
  10 20 30
  ```
- **Sample Output**:
  ```text
  Sum: 60
  ```
- **Constraints**: You must call `fscanf()` three times.
- **Hints**:
  - *Hint 1*: Declare three separate integer variables.
  - *Hint 2*: Each call to `fscanf()` will automatically move the internal file cursor to the next number.
  - *Hint 3*: `fscanf(fptr, "%d", &num1); fscanf(fptr, "%d", &num2); ...`

---

### Question 12: The Appending Logger

- **Difficulty**: Medium
- **Concepts Used**: `"a"` mode, `fprintf()`
- **Problem Statement**:
  You are building a logging system. Write a program that takes an integer user ID from standard input (using `scanf`) and appends it to a file called `access_log.txt` on a new line.
- **Sample Input**:
  ```text
  9945
  ```
- **Sample Output**:
  *(Appended to `access_log.txt`)*
  ```text
  9945
  ```
- **Constraints**: If the program is run 5 times, there should be 5 lines in the text file. Use `"a"` mode.
- **Hints**:
  - *Hint 1*: Use standard `scanf` to get the ID, then `fopen` in append mode.
  - *Hint 2*: To ensure it goes on a new line, include `\n` in your `fprintf`.
  - *Hint 3*: `fprintf(fptr, "%d\n", id);`

---

### Question 13: The End Of File (EOF) Traversal

- **Difficulty**: Medium
- **Concepts Used**: `fgetc()`, `while(1)`, `EOF`
- **Problem Statement**:
  A file `message.txt` contains a secret sentence. Write a program that reads the file character-by-character and prints each character to the screen until the End Of File (`EOF`) is reached.
- **Sample Input**:
  *(Inside `message.txt`)*
  ```text
  Hello World!
  ```
- **Sample Output**:
  ```text
  Hello World!
  ```
- **Constraints**: You MUST use the standard EOF loop pattern taught in the chapter.
- **Hints**:
  - *Hint 1*: Use a `while(1)` infinite loop.
  - *Hint 2*: Inside the loop, read a character: `ch = fgetc(fptr);`
  - *Hint 3*: Immediately after reading, check `if (ch == EOF) { break; }`, then print `ch`.

---

### Question 14: Character Counter

- **Difficulty**: Medium
- **Concepts Used**: `fgetc()`, `EOF`, Counters
- **Problem Statement**:
  Write a program that opens `data.txt` and counts exactly how many characters are inside it. Print the final count to the screen.
- **Sample Input**:
  *(Inside `data.txt`)*
  ```text
  C Programming
  ```
- **Sample Output**:
  ```text
  Total characters: 13
  ```
- **Constraints**: Use an integer counter variable inside an EOF loop.
- **Hints**:
  - *Hint 1*: Initialize `int count = 0;` before the loop.
  - *Hint 2*: Every time you successfully read a character (and it is not EOF), do `count++;`.
  - *Hint 3*: Do not count the EOF marker itself. Break before incrementing the count if `ch == EOF`.

---

### Question 15: The Copycat

- **Difficulty**: Medium
- **Concepts Used**: Reading and Writing simultaneously, `fgetc()`, `fputc()`
- **Problem Statement**:
  Write a program that copies the exact contents of `source.txt` into a new file called `destination.txt`.
- **Sample Input**:
  *(Inside `source.txt`)*
  ```text
  Copy me!
  ```
- **Sample Output**:
  *(Inside `destination.txt`)*
  ```text
  Copy me!
  ```
- **Constraints**: You will need TWO file pointers.
- **Hints**:
  - *Hint 1*: Open `source.txt` in `"r"` mode and `destination.txt` in `"w"` mode.
  - *Hint 2*: Inside your EOF loop, after `fgetc()` from the source, use `fputc()` to write that character to the destination.
  - *Hint 3*: `ch = fgetc(fptr_src); if(ch == EOF) break; fputc(ch, fptr_dest);`

---

### Question 16: Multiplication Table Generator

- **Difficulty**: Medium
- **Concepts Used**: `fprintf()`, Loops
- **Problem Statement**:
  Take an integer N from the user. Write a program that creates a file named `table.txt` and writes the multiplication table for N (from 1 to 10) inside it.
- **Sample Input**:
  ```text
  5
  ```
- **Sample Output**:
  *(Inside `table.txt`)*
  ```text
  5 x 1 = 5
  5 x 2 = 10
  ...
  5 x 10 = 50
  ```
- **Constraints**: Combine a standard `for` loop with `fprintf`.
- **Hints**:
  - *Hint 1*: Open the file in `"w"` mode.
  - *Hint 2*: Run a loop `for(i = 1; i <= 10; i++)`.
  - *Hint 3*: Inside the loop: `fprintf(fptr, "%d x %d = %d\n", N, i, N * i);`

---

### Question 17: Safe File Opener

- **Difficulty**: Medium
- **Concepts Used**: User-provided filename, `NULL` check
- **Problem Statement**:
  Write a program that asks the user to type a filename (e.g., `test.txt`). Attempt to open that file in read mode. If it fails, print `"Failed to open"`. If it succeeds, print `"Successfully opened"` and close it.
- **Sample Input**:
  ```text
  missing.txt
  ```
- **Sample Output**:
  ```text
  Failed to open
  ```
- **Constraints**: Use a string (character array) to store the filename from `scanf`.
- **Hints**:
  - *Hint 1*: Declare `char filename[50];` and use `scanf("%s", filename);`.
  - *Hint 2*: Pass the `filename` array directly into `fopen`: `fopen(filename, "r");`
  - *Hint 3*: Follow up with the standard `if (fptr == NULL)` check.

---

### Question 18: Line Counter

- **Difficulty**: Medium
- **Concepts Used**: `fgetc()`, `\n` detection
- **Problem Statement**:
  Write a program that counts the number of lines in `document.txt`. (Assume every line ends with a newline character `\n`).
- **Sample Input**:
  *(Inside `document.txt`)*
  ```text
  Line 1
  Line 2
  Line 3
  ```
- **Sample Output**:
  ```text
  Total lines: 3
  ```
- **Constraints**: Read character-by-character.
- **Hints**:
  - *Hint 1*: Inside your EOF loop, check if the character read is equal to `'\n'`.
  - *Hint 2*: If `ch == '\n'`, increment your lines counter.
  - *Hint 3*: `if (ch == '\n') { lines++; }`

---

### Question 19: Formatted Data Merger

- **Difficulty**: Medium
- **Concepts Used**: Multiple `fscanf()`, `fprintf()`
- **Problem Statement**:
  A file `prices.txt` contains two integers: `150` and `250`. Write a program that reads both integers, calculates their sum, and appends the sum to the end of the same file.
- **Sample Input**:
  *(Inside `prices.txt`)*
  ```text
  150 250
  ```
- **Sample Output**:
  *(Inside `prices.txt` after running)*
  ```text
  150 250 400
  ```
- **Constraints**: You must open the file in `"r"` mode, read the data, close it, and then reopen it in `"a"` mode.
- **Hints**:
  - *Hint 1*: You cannot easily read and append simultaneously with basic modes. Do it in two phases.
  - *Hint 2*: Phase 1: `fopen` with `"r"`, `fscanf` twice, `fclose`.
  - *Hint 3*: Phase 2: `fopen` with `"a"`, `fprintf` the sum, `fclose`.

---

### Question 20: The Invisible Space

- **Difficulty**: Medium
- **Concepts Used**: `fgetc()` vs `fscanf()` behavior
- **Problem Statement**:
  A file contains `"A B"`. If you read it using two `fscanf(fptr, "%c", &ch)` calls, it ignores the space. Write a program using `fgetc()` to read and print all 3 characters (including the space) to prove `fgetc` reads everything literally.
- **Sample Input**:
  *(Inside `file.txt`)*
  ```text
  A B
  ```
- **Sample Output**:
  ```text
  Char 1: A
  Char 2:  
  Char 3: B
  ```
- **Constraints**: Call `fgetc` three times sequentially.
- **Hints**:
  - *Hint 1*: `fgetc` does not skip whitespace like formatted reading sometimes does.
  - *Hint 2*: Just assign `ch = fgetc(fptr);` three times in a row.
  - *Hint 3*: Print each character immediately after fetching it.
