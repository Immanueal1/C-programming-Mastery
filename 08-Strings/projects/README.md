# 🛠️ Chapter 8: Portfolio Mini Projects

> Practical, hands-on mini projects built entirely using Chapter 8 concepts: Character Arrays, Null Terminator `'\0'`, String I/O (`scanf`, `fgets`, `puts`), Character Pointers vs. Arrays, and `<string.h>` functions (`strlen`, `strcpy`, `strcat`, `strcmp`).

---

## 📌 Short Description

This directory contains 5 portfolio mini projects designed to apply string length and buffer analysis, multi-word input handling with `fgets()`, password salting using `strcpy()` and `strcat()`, dictionary-order comparison with `strcmp()`, and multi-stage sentence construction pipelines.

---

## 📚 Topics Covered

- [x] String Buffer Analysis & Length Inspection (`01_string_information_analyzer`)
- [x] Multi-Word Line Reading with `fgets()` (`02_student_name_and_input_utility`)
- [x] Password Salting Application Logic (`03_password_salting_demonstrator`)
- [x] Dictionary Lexicographical Comparison Utility (`04_simple_string_comparison_utility`)
- [x] Chained String Copy & Concatenation Pipeline (`05_string_copy_and_concatenation_tool`)

---

## 🎯 Learning Objectives

- Inspect character array buffers, visible length (`strlen`), and physical capacity (`sizeof`).
- Implement safe multi-word line input routines using `fgets(str, n, stdin)`.
- Construct password salting routines by chaining `strcpy()` and `strcat()` calls.
- Build dictionary-order string sorting utilities using `strcmp()`.
- Assemble multi-stage string sentences using sequential copying and concatenation.

---

## 📁 Folder Contents

| Project Directory | Title | Core Objective |
| :--- | :--- | :--- |
| [`01_string_information_analyzer/`](./01_string_information_analyzer/) | String Information Analyzer | Read string via `fgets()`, print `strlen()`, `sizeof()`, first char, and last visible char. |
| [`02_student_name_and_input_utility/`](./02_student_name_and_input_utility/) | Student Name & Input Utility | Demonstrate `scanf` multi-word failure and implement safe `fgets()` 50-char buffer input. |
| [`03_password_salting_demonstrator/`](./03_password_salting_demonstrator/) | Password Salting Demonstrator | Read user password, copy to buffer, append salt `"XYZ99"`, and output salted record. |
| [`04_simple_string_comparison_utility/`](./04_simple_string_comparison_utility/) | Simple String Comparison Utility | Compare two words via `strcmp()` and report match status or dictionary priority order. |
| [`05_string_copy_and_concatenation_tool/`](./05_string_copy_and_concatenation_tool/) | String Copy & Concatenation Tool | Copy `"Dear "`, concatenate user name, append `", Welcome!"`, and print result sentence. |

---

## 🔗 Navigation Links

- 🟢 **[Easy Practice (`../easy/`)](../easy/)**
- 🟡 **[Medium Practice (`../medium/`)](../medium/)**
- 🔴 **[Hard Practice (`../hard/`)](../hard/)**
- 🏠 **[Return to Chapter 8 Overview (`../README.md`)](../README.md)**
