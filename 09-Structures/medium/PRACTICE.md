# 🟡 Chapter 9 Medium Practice Workbook

> Practice workbook containing 10 intermediate problems focusing on traversing arrays of structures, pass-by-value vs. pass-by-pointer function calls, inline `typedef struct` definitions, raw structure memory size calculations, string input into structure arrays, context-aware Dot (`.`) vs. Arrow (`->`) usage, `{0}` zero-fill effects on strings, direct structure-to-structure block copying (`r2 = r1`), and array of structures search logic.

---

## 🎯 Learning Objectives

- Traverse Arrays of Structures using loops and `arr[i].member` syntax.
- Understand why passing structures to functions by value creates local stack copies that leave caller objects untouched.
- Pass structure addresses (`&s1`) to function pointer parameters (`struct S *ptr`) to mutate original objects using `ptr->member`.
- Combine `typedef` directly with `struct` definitions (`typedef struct { ... } Alias;`).
- Estimate raw structure byte layouts without hardware padding.
- Input strings safely into structure array elements (`scanf("%s", arr[i].name)`).
- Apply direct block assignment (`r2 = r1`) between structures of identical types.
- Perform search algorithms (such as finding maximum values) across Arrays of Structures.

---

## 📊 Section Metadata

- **Estimated Difficulty**: 🟡 Medium
- **Total Problems**: 10 Questions
- **Topic Focus**: Array Traversal, Pass-by-Value Copying, Pass-by-Pointer Mutation, Combined `typedef`, Memory Layout Calculation, Array String Input, Dot vs Arrow Context, `{0}` Tracing, Direct Struct Copy (`r2 = r1`), Search Algorithms

---

## 📈 Progress Checklist

- [ ] 11 Traversing an Array of Structures
- [ ] 12 Pass By Value Simulation
- [ ] 13 Pass By Address (Modifying Originals)
- [ ] 14 Typedef at Definition
- [ ] 15 The Memory Layout Estimator
- [ ] 16 Reading Strings into Array of Structures
- [ ] 17 Dot vs Arrow Identifier
- [ ] 18 Zero Init Tracing
- [ ] 19 Structure Assignment
- [ ] 20 Finding the Highest CGPA

---

## 📝 Practice Questions

### Question 11: Traversing an Array of Structures

- **Difficulty**: Medium
- **Concepts Used**: Array of Structures, Loops, Dot Operator
- **Problem Statement**:
  Define a `struct student { int roll; };`. Declare an array `class_batch[5]`. Write a `for` loop to initialize the roll numbers from 1 to 5 sequentially. Write a second `for` loop to print them out.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  Roll: 1
  Roll: 2
  Roll: 3
  Roll: 4
  Roll: 5
  ```
- **Constraints**: Initialization must happen dynamically inside the loop using `class_batch[i].roll`.
- **Hints**:
  - *Hint 1*: Use a standard `for` loop from `i = 0` to `i < 5`.
  - *Hint 2*: Combine array indexing with the dot operator.
  - *Hint 3*: `class_batch[i].roll = i + 1;`

---

### Question 12: Pass By Value Simulation

- **Difficulty**: Medium
- **Concepts Used**: Passing Structures to Functions, Pass-by-value
- **Problem Statement**:
  Define `struct gadget { int power; };`. Initialize a gadget `g1` with power 50 in `main()`. Write a function `void overcharge(struct gadget g)` that takes the structure and sets `g.power = 200;`. Call `overcharge(g1);` and then print `g1.power` inside `main()`.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  Power: 50
  ```
- **Constraints**: Understand why it prints 50 and not 200.
- **Hints**:
  - *Hint 1*: When you pass a structure directly into a function, C creates a complete physical copy of it.
  - *Hint 2*: Changing `g.power` inside the function only changes the copy.
  - *Hint 3*: The original `g1.power` in `main()` remains completely untouched.

---

### Question 13: Pass By Address (Modifying Originals)

- **Difficulty**: Medium
- **Concepts Used**: Passing Structure Addresses, Arrow Operator
- **Problem Statement**:
  Fix the program from the previous question. Change the function signature to `void trueOvercharge(struct gadget *g)`. Call it from `main()` by passing the address of `g1`. Modify the power to 200 inside the function using the proper operator, and print it in `main()`.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  Power: 200
  ```
- **Constraints**: Use the arrow operator inside the function.
- **Hints**:
  - *Hint 1*: Call the function using `trueOvercharge(&g1);`.
  - *Hint 2*: Inside the function, `g` is now a pointer to the original structure in `main`.
  - *Hint 3*: Use `g->power = 200;` to modify the original value.

---

### Question 14: Typedef at Definition

- **Difficulty**: Medium
- **Concepts Used**: `typedef` with Structure Definition
- **Problem Statement**:
  Instead of writing `typedef` on a separate line, write a single block of code that defines a structure with an `int code` and directly applies a `typedef` alias `Item` to it. Declare an `Item i1;` in `main()` to verify it works.
- **Sample Input**: *(None)*
- **Sample Output**: *(No output required)*
- **Constraints**: Use the combined `typedef struct { ... } alias;` syntax.
- **Hints**:
  - *Hint 1*: Start the definition with the `typedef` keyword.
  - *Hint 2*: Put the alias name `Item` immediately before the mandatory semicolon at the end.
  - *Hint 3*: `typedef struct { int code; } Item;`

---

### Question 15: The Memory Layout Estimator

- **Difficulty**: Medium
- **Concepts Used**: Structure Memory Layout
- **Problem Statement**:
  Assume `int` is 4 bytes, `float` is 4 bytes, and a `char` array is strictly 1 byte per character. If you define `struct profile { char name[50]; int age; float height; };`, conceptually, how many total bytes will one `struct profile` variable occupy in memory? Write a small `printf` statement printing your calculated answer.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  Conceptual Memory Size: 58 bytes
  ```
- **Constraints**: Ignore structure padding/alignment theory for this exercise; just sum the raw member sizes.
- **Hints**:
  - *Hint 1*: `name` takes `50 * 1` bytes.
  - *Hint 2*: `age` takes 4 bytes. `height` takes 4 bytes.
  - *Hint 3*: `50 + 4 + 4 = 58` bytes physically reserved for one structure object.

---

### Question 16: Reading Strings into Array of Structures

- **Difficulty**: Medium
- **Concepts Used**: Array of Structures, `scanf`, String Members
- **Problem Statement**:
  Assume `struct user { char username[20]; };`. Create an array of 2 users. Ask the user to input two usernames via console. Use a loop and `scanf` to read the names, then use another loop to print them.
- **Sample Input**:
  ```text
  Alice
  Bob
  ```
- **Sample Output**:
  ```text
  User 1: Alice
  User 2: Bob
  ```
- **Constraints**: Combine array indexing, the dot operator, and `%s`.
- **Hints**:
  - *Hint 1*: Arrays decay to pointers, so `user.username` does not need the `&` operator in `scanf`.
  - *Hint 2*: Your `scanf` will look like `scanf("%s", arr[i].username);`.
  - *Hint 3*: Use a simple `for` loop traversing 0 and 1.

---

### Question 17: Dot vs Arrow Identifier

- **Difficulty**: Medium
- **Concepts Used**: Identifying `.` vs `->` context
- **Problem Statement**:
  Declare `struct point { int x; int y; };`. Declare `struct point p1 = {5, 10};`. Declare `struct point *ptr = &p1;`. Write two `printf` statements: one printing `x` using `p1`, and one printing `y` using `ptr`. You must use the correct operators.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  X: 5
  Y: 10
  ```
- **Constraints**: Use `.` for the variable, and `->` for the pointer.
- **Hints**:
  - *Hint 1*: `p1` is a direct variable.
  - *Hint 2*: `ptr` is a pointer.
  - *Hint 3*: `p1.x` and `ptr->y`.

---

### Question 18: Zero Init Tracing

- **Difficulty**: Medium
- **Concepts Used**: `{0}` Initialization, String Arrays
- **Problem Statement**:
  Declare `struct database { int id; char hash[10]; float version; };`. Initialize a variable `db1` with `{0}`. Print `db1.id`, `db1.version`, and use a `strlen()` to print the length of `db1.hash`. What happens to the character array when zero-initialized?
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  ID: 0, Version: 0.000000, Hash Length: 0
  ```
- **Constraints**: Include `<string.h>`.
- **Hints**:
  - *Hint 1*: `{0}` sets all integers to 0 and floats to 0.0.
  - *Hint 2*: For character arrays, it fills the array with the `'\0'` (Null) character.
  - *Hint 3*: Since the very first character is `'\0'`, `strlen()` immediately evaluates the string length as 0.

---

### Question 19: Structure Assignment

- **Difficulty**: Medium
- **Concepts Used**: Direct Structure Copying
- **Problem Statement**:
  Define `struct rect { int l; int w; };`. Create `r1 = {10, 5};`. Create an uninitialized `r2`. Can you copy all data from `r1` to `r2` using a simple assignment operator (`r2 = r1`)? Write the code, assign it, and print `r2`'s values to verify.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  R2 Length: 10, Width: 5
  ```
- **Constraints**: Do not manually assign members (`r2.l = r1.l`).
- **Hints**:
  - *Hint 1*: Unlike standard arrays, structures of the exact same type CAN be copied directly using `=`.
  - *Hint 2*: `struct rect r2 = r1;`
  - *Hint 3*: This copies the entire memory block of `r1` into `r2`.

---

### Question 20: Finding the Highest CGPA

- **Difficulty**: Medium
- **Concepts Used**: Array of Structures, Traversal logic
- **Problem Statement**:
  Assume `struct student { int roll; float cgpa; };`. Create an array of 3 students. Initialize them with CGPAs 8.5, 9.8, and 7.4. Write a loop to find and print the highest CGPA in the array.
- **Sample Input**: *(None)*
- **Sample Output**:
  ```text
  Highest CGPA: 9.80
  ```
- **Constraints**: Use a max variable logic inside a `for` loop.
- **Hints**:
  - *Hint 1*: Declare `float max = students[0].cgpa;`.
  - *Hint 2*: Loop from `i = 1` to `2`.
  - *Hint 3*: `if(students[i].cgpa > max) { max = students[i].cgpa; }`
