# 🔴 Chapter 10 Hard Practice Workbook

> Practice workbook containing 10 advanced problems focusing on dual file stream management, character case transformation with ASCII arithmetic (`ch - 32`), sequential multi-file content merging, character frequency counting, proving `"w"` overwrite destruction, multi-session log rotation simulation (`"w"` ➜ `"a"` ➜ `"r"`), empty file detection (`count == 0`), selective character filtering (vowel extraction), parallel `fscanf()` + `fprintf()` data pipeline formatting, and complete persistent data lifecycle tracking (Keyboard ➜ RAM ➜ Disk ➜ RAM ➜ Screen).

---

## 🎯 Learning Objectives

- Manage multiple concurrent file pointers (`fptr_src` and `fptr_dest`).
- Apply ASCII character conversions during file-to-file stream transfers.
- Merge sequential input files into a unified output file stream.
- Search and count specific character frequencies across file streams.
- Demonstrate empirical evidence of `"w"` mode file truncation.
- Simulate log rotation using multi-phase mode switching (`"w"` initial clear, `"a"` append log, `"r"` verify).
- Handle edge-case empty files gracefully upon the first `fgetc()` call.
- Extract selective character sets (vowels) from file input into target file output.
- Construct end-to-end persistent data pipelines moving values across RAM, Disk, and Console.

---

## 📊 Section Metadata

- **Estimated Difficulty**: 🔴 Hard
- **Total Problems**: 10 Questions
- **Topic Focus**: Dual File Stream Management, ASCII Case Conversion, Multi-File Merging, Character Frequency Search, Overwrite Proof, Log Rotation Simulation, Blank File Handling, Selective Filtering (Vowels), Formatted Report Pipelines, Persistent Data Ping-Pong

---

## 📈 Progress Checklist

- [ ] 21 Even Number Filter
- [ ] 22 The Capitalizer
- [ ] 23 File Merge Utility
- [ ] 24 Character Frequency Search
- [ ] 25 The Overwrite Proof
- [ ] 26 Log Rotating Simulator
- [ ] 27 Blank File Handler
- [ ] 28 Vowel Extractor
- [ ] 29 The Data Formatter
- [ ] 30 File I/O Ping-Pong

---

## 📝 Practice Questions

### Question 21: Even Number Filter

- **Difficulty**: Hard
- **Concepts Used**: Multiple Files, Formatted I/O, Logic
- **Problem Statement**:
  A file `all_numbers.txt` contains 5 integers. Write a program that reads all 5 integers. If an integer is even, write it to a new file called `even.txt`. If it is odd, ignore it.
- **Sample Input**:
  *(Inside `all_numbers.txt`)*
  ```text
  1 4 7 10 15
  ```
- **Sample Output**:
  *(Inside `even.txt`)*
  ```text
  4 10
  ```
- **Constraints**: You must manage two file pointers simultaneously.
- **Hints**:
  - *Hint 1*: Open `all_numbers.txt` in `"r"` mode and `even.txt` in `"w"` mode.
  - *Hint 2*: Use a `for` loop running 5 times. Inside, `fscanf` a number.
  - *Hint 3*: Check `if (num % 2 == 0)`. If true, `fprintf` it to the second file pointer.

---

### Question 22: The Capitalizer

- **Difficulty**: Hard
- **Concepts Used**: `fgetc()`, ASCII Logic, `fputc()`
- **Problem Statement**:
  Write a program that reads a text file `lower.txt` character by character. If a character is a lowercase letter (`'a'` to `'z'`), convert it to uppercase. Write the resulting characters to a new file `upper.txt`.
- **Sample Input**:
  *(Inside `lower.txt`)*
  ```text
  hello world!
  ```
- **Sample Output**:
  *(Inside `upper.txt`)*
  ```text
  HELLO WORLD!
  ```
- **Constraints**: Use ASCII arithmetic (subtract 32) to convert cases.
- **Hints**:
  - *Hint 1*: Set up an EOF loop reading from the source file.
  - *Hint 2*: Before writing to the destination file, check `if (ch >= 'a' && ch <= 'z')`.
  - *Hint 3*: If true, `ch = ch - 32;`. Then `fputc(ch, fptr_dest);`.

---

### Question 23: File Merge Utility

- **Difficulty**: Hard
- **Concepts Used**: Sequential File Reading
- **Problem Statement**:
  You have `file1.txt` containing `"Hello "` and `file2.txt` containing `"World"`. Write a program that reads all contents of `file1.txt` and writes them to `merged.txt`, then reads all contents of `file2.txt` and appends them to `merged.txt`.
- **Sample Input**: *(Two input files as described)*
- **Sample Output**:
  *(Inside `merged.txt`)*
  ```text
  Hello World
  ```
- **Constraints**: You will need to run two separate EOF loops.
- **Hints**:
  - *Hint 1*: Open `merged.txt` in `"w"` mode. Open `file1.txt` in `"r"`.
  - *Hint 2*: Run an EOF loop to copy `file1` to `merged`. Close `file1`.
  - *Hint 3*: Open `file2.txt` in `"r"`. Run a second EOF loop to copy it to `merged`. Close both.

---

### Question 24: Character Frequency Search

- **Difficulty**: Hard
- **Concepts Used**: `fgetc()`, Conditional Counting
- **Problem Statement**:
  Write a program that asks the user for a single character (e.g., `'e'`). Open `data.txt` and count exactly how many times that specific character appears in the file. Print the frequency.
- **Sample Input**:
  ```text
  e
  ```
  *(Inside `data.txt`: engineering)*
- **Sample Output**:
  ```text
  Frequency of 'e': 3
  ```
- **Constraints**: Handle the EOF loop properly.
- **Hints**:
  - *Hint 1*: Read the character from the user using `scanf("%c", &target)`.
  - *Hint 2*: Inside your EOF loop, add an `if (ch == target)`.
  - *Hint 3*: Increment a counter variable if they match.

---

### Question 25: The Overwrite Proof

- **Difficulty**: Hard
- **Concepts Used**: `"w"` vs `"a"` mode mechanics
- **Problem Statement**:
  Write a program that strictly demonstrates the danger of `"w"` mode.
  1. Open `test.txt` in `"w"` mode, write `"First"`, and close.
  2. Open `test.txt` in `"w"` mode again, write `"Second"`, and close.
  3. Open `test.txt` in `"r"` mode, read all characters, and print them to the screen.
  The output should just be `"Second"`.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Second
  ```
- **Constraints**: Follow the exact 3-step sequence.
- **Hints**:
  - *Hint 1*: You will `fopen` and `fclose` the same file three times.
  - *Hint 2*: The second `fopen` in `"w"` mode will instantly delete the `"First"` text.
  - *Hint 3*: The third step is your standard EOF reading loop.

---

### Question 26: Log Rotating Simulator

- **Difficulty**: Hard
- **Concepts Used**: Mixed Modes, State Management
- **Problem Statement**:
  Simulate a log file.
  1. Open `log.txt` in `"w"` mode to start fresh and write `"Session 1\n"`. Close it.
  2. Open it in `"a"` mode, append `"Session 2\n"`, and close it.
  3. Open it in `"r"` mode and print the entire file to the console.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Session 1
  Session 2
  ```
- **Constraints**: Use `fprintf` for the writing and appending phases.
- **Hints**:
  - *Hint 1*: This proves how appending preserves the old data.
  - *Hint 2*: Use three distinct Open ➜ Work ➜ Close blocks.
  - *Hint 3*: The read phase uses the `while(1)` EOF loop with `fgetc`.

---

### Question 27: Blank File Handler

- **Difficulty**: Hard
- **Concepts Used**: EOF on first read
- **Problem Statement**:
  Create a completely empty file manually called `empty.txt`. Write an EOF loop program to read it. Observe what happens. Add a print statement saying `"File is empty"` if the very first `fgetc` returns EOF.
- **Sample Input**:
  *(Inside `empty.txt`)*
  *(Nothing)*
- **Sample Output**:
  ```text
  File is empty
  ```
- **Constraints**: Use an integer flag or counter to detect if the first read was EOF.
- **Hints**:
  - *Hint 1*: Set `int count = 0;` before the loop.
  - *Hint 2*: Inside the loop, `if (ch != EOF)`, increment `count`.
  - *Hint 3*: After the loop, `if (count == 0)`, print `"File is empty"`.

---

### Question 28: Vowel Extractor

- **Difficulty**: Hard
- **Concepts Used**: Logic with `fgetc()`, Multiple Files
- **Problem Statement**:
  Read `words.txt`. If a character is a vowel (`a`, `e`, `i`, `o`, `u` - assume all lowercase), write it to `vowels.txt`. Otherwise, ignore it.
- **Sample Input**:
  *(Inside `words.txt`)*
  ```text
  beautiful
  ```
- **Sample Output**:
  *(Inside `vowels.txt`)*
  ```text
  eauiu
  ```
- **Constraints**: Use `fputc()` conditionally.
- **Hints**:
  - *Hint 1*: Open source in `"r"`, destination in `"w"`.
  - *Hint 2*: Check `if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')`.
  - *Hint 3*: Only call `fputc(ch, dest_fptr)` inside that `if` block.

---

### Question 29: The Data Formatter

- **Difficulty**: Hard
- **Concepts Used**: `fscanf()` and `fprintf()` parallel
- **Problem Statement**:
  `raw.txt` contains two numbers representing length and width: `5 10`. Read these numbers, calculate the area, and write a beautifully formatted sentence to `report.txt`: `"The area of a 5 by 10 rectangle is 50."`
- **Sample Input**:
  *(Inside `raw.txt`)*
  ```text
  5 10
  ```
- **Sample Output**:
  *(Inside `report.txt`)*
  ```text
  The area of a 5 by 10 rectangle is 50.
  ```
- **Constraints**: Use one `fscanf` and one `fprintf`.
- **Hints**:
  - *Hint 1*: `fscanf(src, "%d %d", &l, &w);`
  - *Hint 2*: Calculate `area = l * w;`
  - *Hint 3*: `fprintf(dest, "The area of a %d by %d rectangle is %d.", l, w, area);`

---

### Question 30: File I/O Ping-Pong

- **Difficulty**: Hard
- **Concepts Used**: Memory and File Direction flow
- **Problem Statement**:
  Write a program that takes an integer from the user via `scanf` (Keyboard ──► RAM). Writes it to `temp.txt` using `fprintf` (RAM ──► Disk). Closes the file. Opens it again, reads the integer using `fscanf` (Disk ──► RAM) into a NEW variable. Multiplies that new variable by 2, and prints it to the screen via `printf` (RAM ──► Screen).
- **Sample Input**:
  ```text
  25
  ```
- **Sample Output**:
  ```text
  Final result: 50
  ```
- **Constraints**: Must strictly follow the data path described.
- **Hints**:
  - *Hint 1*: You are demonstrating the full life-cycle of persistent data.
  - *Hint 2*: Phase 1: `scanf`, `fopen("w")`, `fprintf`, `fclose`.
  - *Hint 3*: Phase 2: `fopen("r")`, `fscanf`, calculate, `printf`, `fclose`.
