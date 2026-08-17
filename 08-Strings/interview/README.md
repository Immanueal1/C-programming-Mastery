# 🎯 Chapter 8: Technical Interview Preparation

> Master Technical Interview Questions, Output Predictions, Memory Layout Analyses, String I/O Stream Behaviors, Debugging Challenges, and MCQs for Chapter 8 (Strings & Character Arrays).

---

## 📌 Module Overview

This module consolidates core string conceptual interview materials from Chapter 8. It prepares software engineering candidates for technical screeners, whiteboard interviews, memory tracing exercises, pointer vs. array reassignability rules, `<string.h>` library internals, string input stream traps (`scanf` vs `fgets`), and C string memory safety buffer overflow questions.

---

## 📁 File Structure

| File | Description | Focus Area |
| :--- | :--- | :--- |
| 📖 [`THEORY.md`](./THEORY.md) | Top 10 Conceptual Theory Questions | Null character `'\0'`, `'A'` vs `"A"`, space trap, `gets()` danger, `char *` vs `char []`, password salting |
| 🔮 [`OUTPUT_PREDICTION.md`](./OUTPUT_PREDICTION.md) | Top 10 Code Output Snippets | Truncation at `'\0'`, `strcat` outputs, pointer reassignments, hidden character printing |
| 🧠 [`MEMORY_PREDICTION.md`](./MEMORY_PREDICTION.md) | Top 10 Memory & String-Layout Questions | Storage allocation bytes, buffer indices, `fgets` index layouts, ASCII value of `'\0'` |
| 📥 [`IO_PREDICTION.md`](./IO_PREDICTION.md) | Top 10 String I/O Stream Questions | Whitespace delimiters, `puts()` auto-newline, `fgets()` newline capture, read-only crashes |
| 🐞 [`DEBUGGING.md`](./DEBUGGING.md) | Top 10 Syntax & Logical Debugging Challenges | Capacity overflows, array reassignments, missing `'\0'`, pointer arithmetic traps |
| 📝 [`MCQs.md`](./MCQs.md) | Top 10 Multiple Choice Questions | Termination character, `fgets()` vs `gets()`, `strlen()` vs `sizeof()`, salting definition |

---

## 🎯 Key Interview Concepts Covered

1. **Null Character Terminator (`'\0'`)**: Why every C string must end with ASCII `0`.
2. **Character vs String**: Single quotes `'A'` (1 byte) vs double quotes `"A"` (2 bytes).
3. **Storage vs Length**: Why `sizeof(str)` counts `'\0'` while `strlen(str)` excludes it.
4. **Input Traps**: Why `scanf("%s")` breaks on spaces, why `gets()` causes buffer overflow, and why `fgets()` is safe.
5. **Array vs Pointer Reassignability**: Why `char *str` pointers can be reassigned (`str = "New"`) but `char str[]` array names cannot.
6. **Read-Only Segment Protection**: Why mutating a string literal via pointer (`ptr[0] = 'X'`) causes a Segmentation Fault.
7. **Buffer Capacity Requirements**: Why `strcpy()` and `strcat()` require destination arrays to have sufficient allocated bytes.
8. **String Content Comparison**: Why `str1 == str2` checks memory pointer addresses instead of text content (`strcmp()`).
9. **Password Salting**: Real-world application of secret salt concatenation using `strcpy()` and `strcat()`.
10. **`fgets()` Newline Anomaly**: How `fgets()` captures Enter (`'\n'`) into the input buffer right before `'\0'`.

---

## 🔗 Navigation Links

- 🟢 **[Easy Practice (`../easy/`)](../easy/)**
- 🟡 **[Medium Practice (`../medium/`)](../medium/)**
- 🔴 **[Hard Practice (`../hard/`)](../hard/)**
- 🛠️ **[Portfolio Mini Projects (`../projects/`)](../projects/)**
- 🏠 **[Return to Chapter 8 Overview (`../README.md`)](../README.md)**
