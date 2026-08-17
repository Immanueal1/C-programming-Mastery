# 🔐 Project 03: Password Salting Demonstrator

> Implement industrial password salting logic by appending a secret salt to user passwords before storage.

---

## 📌 Short Description

Prompt the user to enter a password string. Copy the password into a large database destination buffer `storedPass[100]` using `strcpy()`. Define a salt string `salt[] = "XYZ99"`. Append the salt onto the password using `strcat()`. Print the final salted password record.

---

## 📚 Topics Covered

- [x] String Copying (`strcpy()`)
- [x] String Concatenation (`strcat()`)
- [x] Real-World Application: Password Salting Logic

---

## 🎯 Learning Objectives

- Chain `<string.h>` functions to construct salted security strings.
- Validate destination buffer capacity requirements during string manipulation.

---

## 📁 Folder Contents

- `README.md`: Project specifications and guidelines.
- `main.c`: Starter source code file (contains empty template).

---

## 🔗 Navigation Links

- 🛠️ **[Return to Projects Index (`../`)](../README.md)**
- 🏠 **[Return to Chapter 8 Overview (`../../README.md`)](../../README.md)**
