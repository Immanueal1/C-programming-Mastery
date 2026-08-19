# 🛠️ Chapter 9: Portfolio Mini Projects

> Practical, hands-on mini projects built entirely using Chapter 9 concepts: Structures, Dot/Arrow operators, Arrays of Structures, Pointers, Pass-by-Value/Address, and `typedef` Aliases.

---

## 📌 Short Description

This directory contains 5 portfolio mini projects designed to apply single student ID card manager formatting with `typedef`, multi-employee roster search algorithms across arrays of structures, 2D coordinate displacement via pass-by-pointer functions, zero-initialization testing, and complete structure-to-structure direct memory block copying.

---

## 📚 Topics Covered

- [x] Student Information Manager with `typedef` & Pass-by-Value Output (`01_student_information_manager`)
- [x] Employee Roster & Maximum Salary Search across Structure Arrays (`02_employee_roster`)
- [x] 2D Coordinate Mover via Pass-by-Pointer In-Place Mutation (`03_coordinate_mover`)
- [x] Book Inventory Zero-State Testing & Dot Operator Updates (`04_book_inventory_zero_init_test`)
- [x] Vehicle Registration Direct Memory Block Assignment & String Copy (`05_vehicle_registration_copy`)

---

## 🎯 Learning Objectives

- Define custom aliased structures using `typedef struct { ... } student;`.
- Read and manage multiple entity records in an Array of Structures.
- Mutate structure objects in-place using pass-by-address pointer function calls (`p->x += 5;`).
- Verify zero-initialization `{0}` memory states.
- Demonstrate direct structure block copying (`c2 = c1;`) including string members.

---

## 📁 Folder Contents

| Project Directory | Title | Core Objective |
| :--- | :--- | :--- |
| [`01_student_information_manager/`](./01_student_information_manager/) | Student Information Manager | `typedef` student structure (Name, Roll, CGPA), input values, pass by value to `printCard(student s)`. |
| [`02_employee_roster/`](./02_employee_roster/) | Employee Roster (Array of Structures) | Array of 3 Employee structures (ID, Salary), loop input, find & print highest salary employee ID. |
| [`03_coordinate_mover/`](./03_coordinate_mover/) | Coordinate Mover (Pass by Address) | Point structure (x, y), `movePoint(Point *p)` adds 5 to x and subtracts 5 from y via pointer `p->x`. |
| [`04_book_inventory_zero_init_test/`](./04_book_inventory_zero_init_test/) | Book Inventory Zero-Init Test | Book structure (Pages, Price), zero-init `{0}`, verify zeros, update via `.` operator, reprint. |
| [`05_vehicle_registration_copy/`](./05_vehicle_registration_copy/) | Vehicle Registration Copy | Car structure (Model string, Year), set `c1` with `strcpy`, execute `c2 = c1;`, print `c2`. |

---

## 🔗 Navigation Links

- 🟢 **[Easy Practice (`../easy/`)](../easy/)**
- 🟡 **[Medium Practice (`../medium/`)](../medium/)**
- 🔴 **[Hard Practice (`../hard/`)](../hard/)**
- 🏠 **[Return to Chapter 9 Overview (`../README.md`)](../README.md)**
