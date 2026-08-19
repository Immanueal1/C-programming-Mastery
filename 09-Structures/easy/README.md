# 🟢 Chapter 9: Easy Practice Problems

> Beginner-friendly C programming challenges focusing on structure definitions, mandatory closing semicolon `};` syntax, dot operator (`.`) member access, positional initialization, zero initialization `{0}`, string array member assignment using `strcpy()`, arrays of structures, structure pointers, dereferencing syntax `(*ptr).member`, the arrow operator (`->`), and `typedef` aliases.

---

## 📌 Short Description

This directory contains 10 fundamental practice problems designed to build core confidence with `struct` definitions, mandatory semicolon `};` rules, structure member assignment via the dot operator (`.`), curly-brace list initialization, zero-filling (`{0}`), character array string copy requirements (`strcpy`), array indexing of structures (`arr[i].member`), pointer dereferencing precedence (`(*ptr).member`), shorthand arrow operator (`->`) access, and type aliasing using `typedef`.

---

## 📚 Topics Covered

- [x] Defining Structure Blueprints with mandatory closing semicolon `};`
- [x] Declaring Structure Variables & Dot Operator (`.`) Member Access
- [x] Positional Structure Initialization matching member declaration order
- [x] Zero Initialization using `struct S s = {0};`
- [x] Assigning String Array Members safely using `strcpy()` from `<string.h>`
- [x] Array of Structures Declaration & Indexed Member Access (`arr[i].member`)
- [x] Structure Pointer Declarations (`struct S *ptr = &s1;`)
- [x] Pointer Dereferencing Precedence (`(*ptr).member`)
- [x] Arrow Operator (`->`) Shorthand Pointer Access
- [x] Creating Type Aliases using `typedef`

---

## 🎯 Learning Objectives

- Define custom `struct` definitions with mandatory closing semicolon `};` syntax.
- Declare structure variables and access members using the Dot Operator (`.`).
- Initialize structure variables positionally and via zero-initialization (`{0}`).
- Assign string array members safely using `strcpy()`.
- Create and manipulate Arrays of Structures (`arr[i].member`).
- Use structure pointers, dereference syntax `(*ptr).member`, and the Arrow Operator (`->`).
- Create shorter custom type aliases using `typedef`.

---

## 📈 Progress Checklist

- [ ] 01 The Real-World Entity
- [ ] 02 Accessing the Blueprint
- [ ] 03 Aggregate Initialization
- [ ] 04 The Zero State
- [ ] 05 The String Member Trap
- [ ] 06 Array of Entities
- [ ] 07 Structure Pointer Declaration
- [ ] 08 Dereferencing the Clunky Way
- [ ] 09 The Elegant Arrow
- [ ] 10 The Alias Maker

---

## 📁 Folder Contents

| File | Title | Concepts Used |
| :--- | :--- | :--- |
| [`01_the_real_world_entity.c`](./01_the_real_world_entity.c) | The Real-World Entity | User-Defined Data Types, Structure Definition, Mandatory Semicolon |
| [`02_accessing_the_blueprint.c`](./02_accessing_the_blueprint.c) | Accessing the Blueprint | Structure Variable Declaration, Dot Operator (`.`) |
| [`03_aggregate_initialization.c`](./03_aggregate_initialization.c) | Aggregate Initialization | Structure Initialization (Declaration Order) |
| [`04_the_zero_state.c`](./04_the_zero_state.c) | The Zero State | Zero Initialization |
| [`05_the_string_member_trap.c`](./05_the_string_member_trap.c) | The String Member Trap | String Members, `#include <string.h>`, `strcpy()` |
| [`06_array_of_entities.c`](./06_array_of_entities.c) | Array of Entities | Array of Structures |
| [`07_structure_pointer_declaration.c`](./07_structure_pointer_declaration.c) | Structure Pointer Declaration | Pointers to Structures, Address-of Operator `&` |
| [`08_dereferencing_the_clunky_way.c`](./08_dereferencing_the_clunky_way.c) | Dereferencing the Clunky Way | `(*ptr).member`, Parentheses Requirement |
| [`09_the_elegant_arrow.c`](./09_the_elegant_arrow.c) | The Elegant Arrow | Arrow Operator (`->`) |
| [`10_the_alias_maker.c`](./10_the_alias_maker.c) | The Alias Maker | `typedef` Keyword |

---

## 📝 Practice Questions

### Question 01: The Real-World Entity

- **Difficulty**: Easy
- **Concepts Used**: User-Defined Data Types, Structure Definition, Mandatory Semicolon
- **Problem Statement**:
  Define a structure named `employee` that groups together three pieces of information: an integer `emp_id`, a floating-point `salary`, and a character array `department` of size 50. Do not write a `main()` function; just write the proper structure definition.
- **Sample Input**: *(None)*
- **Sample Output**: *(No console output, valid C structure definition)*
- **Constraints**: The definition must be syntactically perfect, including the closing syntax.
- **Hints**:
  - *Hint 1*: Use the `struct` keyword followed by the name `employee`.
  - *Hint 2*: Enclose the three members inside curly braces `{}`.
  - *Hint 3*: Never forget the mandatory semicolon `;` after the closing brace!

---

### Question 02: Accessing the Blueprint

- **Difficulty**: Easy
- **Concepts Used**: Structure Variable Declaration, Dot Operator (`.`)
- **Problem Statement**:
  Assume a `struct car { int year; float price; };` is defined. Inside `main()`, declare a structure variable named `myCar`. Assign the year `2024` and the price `15000.50` to its members using the appropriate operator. Print the values.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  Car Year: 2024
  Car Price: 15000.50
  ```
- **Constraints**: Assign the values one by one after declaration.
- **Hints**:
  - *Hint 1*: Declare the variable using `struct car myCar;`.
  - *Hint 2*: To access a member of a standard structure variable, use the dot operator (`.`).
  - *Hint 3*: `myCar.year = 2024;`

---

### Question 03: Aggregate Initialization

- **Difficulty**: Easy
- **Concepts Used**: Structure Initialization (Declaration Order)
- **Problem Statement**:
  Assume a `struct point { int x; int y; int z; };` is defined. Declare a variable `p1` and initialize all three members to 10, 20, and 30 respectively in a single line during declaration. Print the coordinates.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  Point: (10, 20, 30)
  ```
- **Constraints**: Do not use the dot operator for initialization.
- **Hints**:
  - *Hint 1*: You can initialize a structure just like an array using curly braces `{}`.
  - *Hint 2*: The values must perfectly match the order of the members in the struct definition.
  - *Hint 3*: `struct point p1 = {10, 20, 30};`

---

### Question 04: The Zero State

- **Difficulty**: Easy
- **Concepts Used**: Zero Initialization
- **Problem Statement**:
  Assume `struct account { int acc_no; float balance; };`. Declare a variable `user1` and initialize it entirely to its zero/null state using the shortest possible syntax. Print both members to prove they are zero.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  Account: 0, Balance: 0.00
  ```
- **Constraints**: Do not write `{0, 0.0}`.
- **Hints**:
  - *Hint 1*: C provides a shortcut to zero-out all members of an array or structure.
  - *Hint 2*: Use curly braces with a single zero inside.
  - *Hint 3*: `struct account user1 = {0};`

---

### Question 05: The String Member Trap

- **Difficulty**: Easy
- **Concepts Used**: String Members, `#include <string.h>`, `strcpy()`
- **Problem Statement**:
  Assume `struct book { int pages; char title[100]; };`. Declare a variable `b1`. Assign 300 to `pages`. Attempting to write `b1.title = "C Programming";` will cause a compilation error. Correctly assign the string to the structure member and print it.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  Book: C Programming (300 pages)
  ```
- **Constraints**: You must include the correct standard library to handle the string.
- **Hints**:
  - *Hint 1*: Arrays in C cannot be reassigned using the `=` operator after they are declared.
  - *Hint 2*: You must use the string copy function from `<string.h>`.
  - *Hint 3*: `strcpy(b1.title, "C Programming");`

---

### Question 06: Array of Entities

- **Difficulty**: Easy
- **Concepts Used**: Array of Structures
- **Problem Statement**:
  Assume `struct player { int score; };`. Declare an array named `team` capable of holding 11 players. Set the score of the very first player to 50 and the very last player to 99. Print both scores.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  Player 1 Score: 50
  Player 11 Score: 99
  ```
- **Constraints**: Remember zero-based indexing.
- **Hints**:
  - *Hint 1*: Declare the array just like a normal int array, but use `struct player` as the data type.
  - *Hint 2*: The first player is at index 0, the last is at index 10.
  - *Hint 3*: `team[0].score = 50;`

---

### Question 07: Structure Pointer Declaration

- **Difficulty**: Easy
- **Concepts Used**: Pointers to Structures, Address-of Operator `&`
- **Problem Statement**:
  Declare a `struct box { int weight; };`. Create a variable `b1` and initialize its weight to 10. Declare a structure pointer `ptr` and store the address of `b1` in it.
- **Sample Input**: *(None)*
- **Sample Output**: *(No output required, purely syntax setup)*
- **Constraints**: The pointer must be of the correct user-defined type.
- **Hints**:
  - *Hint 1*: A pointer's type must exactly match the data type it points to.
  - *Hint 2*: The data type is `struct box`.
  - *Hint 3*: `struct box *ptr = &b1;`

---

### Question 08: Dereferencing the Clunky Way

- **Difficulty**: Easy
- **Concepts Used**: `(*ptr).member`, Parentheses Requirement
- **Problem Statement**:
  Using the `ptr` from the previous question (pointing to `b1` with weight 10), print the weight using the pointer and the dot operator. You must use parentheses correctly to avoid compilation errors.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  Weight: 10
  ```
- **Constraints**: Do NOT use the arrow operator (`->`).
- **Hints**:
  - *Hint 1*: If you write `*ptr.weight`, the compiler thinks you are trying to dereference a member called `weight` (because `.` has higher precedence than `*`).
  - *Hint 2*: You must force the pointer to dereference first.
  - *Hint 3*: `printf("%d", (*ptr).weight);`

---

### Question 09: The Elegant Arrow

- **Difficulty**: Easy
- **Concepts Used**: Arrow Operator (`->`)
- **Problem Statement**:
  Rewrite the print statement from the previous question. This time, access the `weight` member through the pointer `ptr` using the cleaner arrow operator.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  Weight: 10
  ```
- **Constraints**: Use the `->` operator.
- **Hints**:
  - *Hint 1*: The arrow operator replaces the clunky `(*ptr).member` syntax.
  - *Hint 2*: It is typed using a hyphen `-` and a greater-than sign `>`.
  - *Hint 3*: `printf("%d", ptr->weight);`

---

### Question 10: The Alias Maker

- **Difficulty**: Easy
- **Concepts Used**: `typedef` Keyword
- **Problem Statement**:
  You have a structure: `struct UnnecessarilyLongName { int id; };`. Use the `typedef` keyword to create an alias named `uln`. Then, declare a variable of this structure using only the short alias, set its `id` to 1, and print it.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  ID: 1
  ```
- **Constraints**: Do not use the word `struct` when declaring the final variable.
- **Hints**:
  - *Hint 1*: `typedef` creates a nickname for a data type.
  - *Hint 2*: The syntax is `typedef [existing_type] [alias_name];`.
  - *Hint 3*: `typedef struct UnnecessarilyLongName uln; uln var1; var1.id = 1;`

---

## 🔗 Navigation Links

- 📋 **[View Complete Practice Workbook (`PRACTICE.md`)](./PRACTICE.md)**
- 🟡 **[Proceed to Medium Practice (`../medium/`)](../medium/)**
- 🔴 **[Proceed to Hard Practice (`../hard/`)](../hard/)**
- 🏠 **[Return to Chapter 9 Overview (`../README.md`)](../README.md)**
