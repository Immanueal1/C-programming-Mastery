# 🚗 Project 05: Vehicle Registration Copy

> Demonstrate direct structure-to-structure memory block copying (`c2 = c1`), including embedded string members.

---

## 📌 Short Description

Define a `Car` structure with `model` (char array) and `year` (int). Create variable `c1`. Use `strcpy` to set `c1.model` to `"Sedan"` and set `c1.year` to `2020`. Create an uninitialized `Car c2`. Execute `c2 = c1;`. Print `c2`'s members to prove that the entire structure memory block (including string characters) copied successfully.

---

## 📚 Topics Covered

- [x] String Copying into Structure Members (`strcpy`)
- [x] Direct Structure Block Assignment (`c2 = c1`)
- [x] Memory Block Duplication Verification

---

## 🎯 Learning Objectives

- Apply direct structure block assignment `=` between variables of the same structure type.
- Verify that embedded character arrays copy completely during block assignment.

---

## 📁 Folder Contents

- `README.md`: Project specifications and guidelines.
- `main.c`: Starter source code file (contains empty template).

---

## 🔗 Navigation Links

- 🛠️ **[Return to Projects Index (`../`)](../README.md)**
- 🏠 **[Return to Chapter 9 Overview (`../../README.md`)](../../README.md)**
