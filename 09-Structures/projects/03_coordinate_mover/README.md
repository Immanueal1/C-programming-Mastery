# 📍 Project 03: Coordinate Mover (Pass by Address)

> Mutate structure objects in-place across function call frames using structure pointers and arrow operators.

---

## 📌 Short Description

Define a `Point` structure containing integer coordinates `x` and `y`. Initialize `p1 = {10, 20}` in `main()`. Write a function `void movePoint(Point *p)` that adds 5 to `p->x` and subtracts 5 from `p->y`. Pass `&p1` to the function and print the updated coordinates inside `main()`.

---

## 📚 Topics Covered

- [x] Passing Structure Addresses (`&p1`)
- [x] Structure Pointer Parameters (`Point *p`)
- [x] In-Place Object Mutation via Arrow Operator (`p->x += 5`)

---

## 🎯 Learning Objectives

- Use structure pointers to mutate caller objects permanently.
- Apply Arrow Operator (`->`) shorthand syntax inside functions.

---

## 📁 Folder Contents

- `README.md`: Project specifications and guidelines.
- `main.c`: Starter source code file (contains empty template).

---

## 🔗 Navigation Links

- 🛠️ **[Return to Projects Index (`../`)](../README.md)**
- 🏠 **[Return to Chapter 8 Overview (`../../README.md`)](../../README.md)**
