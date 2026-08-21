# 📝 Project 03: File-Based Notes Writer

> Stream continuous keyboard input characters directly into a file until a sentinel character (`#`) is encountered.

---

## 📌 Short Description

Open `notes.txt` in `"w"` mode. Prompt the user to type a sentence. Use a loop reading keyboard characters via `scanf("%c", &ch)` or `getchar()`. Stream each character to `notes.txt` using `fputc(ch, fptr)`. Terminate input when the user types the sentinel character `#`. Close the file.

---

## 📚 Topics Covered

- [x] Stream Character Writing (`fputc`)
- [x] Keyboard Input Loop
- [x] Sentinel Character Termination (`if (ch == '#') break;`)

---

## 🎯 Learning Objectives

- Build interactive text streaming applications.
- Use `fputc()` to write user characters directly to disk files.

---

## 📁 Folder Contents

- `README.md`: Project specifications and guidelines.
- `main.c`: Starter source code file (contains empty template).

---

## 🔗 Navigation Links

- 🛠️ **[Return to Projects Index (`../`)](../README.md)**
- 🏠 **[Return to Chapter 10 Overview (`../../README.md`)](../../README.md)**
