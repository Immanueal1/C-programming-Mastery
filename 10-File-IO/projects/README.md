# 🛠️ Chapter 10: Portfolio Mini Projects

> Practical, hands-on mini projects built entirely using Chapter 10 concepts: `FILE *`, file access modes (`"r"`, `"w"`, `"a"`), `fprintf()`, `fscanf()`, `fgetc()`, `fputc()`, and `while(1)` EOF traversal loops.

---

## 📌 Short Description

This directory contains 5 portfolio mini projects designed to persist student subject marks using `fprintf()`, read and display story files using character-by-character `fgetc()` EOF loops, write continuous character notes using `fputc()` until a sentinel character (`#`), append history log ages using `"a"` mode, and compute integer sums directly from disk files using `fscanf()`.

---

## 📚 Topics Covered

- [x] Student Marks File Writer via `fprintf()` & `"w"` Mode (`01_student_marks_file_writer`)
- [x] Simple Text File Reader via `fgetc()` & `while(1)` EOF Loop (`02_simple_text_file_reader`)
- [x] Continuous File-Based Notes Writer via `fputc()` & Sentinel `#` (`03_file_based_notes_writer`)
- [x] History Log Appender Utility via `"a"` Mode (`04_the_log_appender_utility`)
- [x] Disk Integer Summation Calculator via `fscanf()` (`05_integer_file_summation`)

---

## 🎯 Learning Objectives

- Persist user inputs directly into formatted disk files.
- Display file contents cleanly using `while(1)` EOF loops.
- Capture continuous keyboard input and stream characters directly to disk using `fputc()`.
- Append new execution log records without overwriting existing data.
- Read numerical data from disk, calculate results, and report findings to the console.

---

## 📁 Folder Contents

| Project Directory | Title | Core Objective |
| :--- | :--- | :--- |
| [`01_student_marks_file_writer/`](./01_student_marks_file_writer/) | Student Marks File Writer | Read 3 subject marks via `scanf`, open `marks.txt` in `"w"`, write formatted marks using `fprintf()`, close file. |
| [`02_simple_text_file_reader/`](./02_simple_text_file_reader/) | Simple Text File Reader | Open `story.txt` in `"r"`, check `NULL`, read character-by-character via `fgetc()` in `while(1)` EOF loop, print to screen. |
| [`03_file_based_notes_writer/`](./03_file_based_notes_writer/) | File-Based Notes Writer | Open `notes.txt` in `"w"`, read keyboard characters in loop, stream to file via `fputc()`, terminate on sentinel character `#`. |
| [`04_the_log_appender_utility/`](./04_the_log_appender_utility/) | The Log Appender Utility | Prompt for user age, open `history.txt` in `"a"` mode, append formatted line using `fprintf()`, demonstrate preservation across runs. |
| [`05_integer_file_summation/`](./05_integer_file_summation/) | Integer File Summation | Open `numbers.txt` in `"r"`, read 3 integers using `fscanf()`, compute total sum, display result to screen, close file. |

---

## 🔗 Navigation Links

- 🟢 **[Easy Practice (`../easy/`)](../easy/)**
- 🟡 **[Medium Practice (`../medium/`)](../medium/)**
- 🔴 **[Hard Practice (`../hard/`)](../hard/)**
- 🏠 **[Return to Chapter 10 Overview (`../README.md`)](../README.md)**
