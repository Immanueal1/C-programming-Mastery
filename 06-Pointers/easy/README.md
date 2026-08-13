# 🟢 Chapter 6: Easy Practice Problems

> Beginner-friendly C programming challenges focusing on memory address extraction (`&`), pointer declarations (`int *`, `float *`, `char *`), dereference reads/writes (`*`), pointer address formatting (`%p`), and introductory Call by Value vs. Call by Reference mechanics.

---

## 📌 Short Description

This directory contains 10 fundamental practice problems designed to build confidence with physical memory addresses, address-of operator syntax (`&`), pointer variable declarations, value-at-address dereferencing (`*`), pointer address specifiers (`%p`), multi-pointer aliasing, character pointers, and the operational differences between passing copies vs. passing memory addresses.

---

## 📚 Topics Covered

- [x] Memory Address Extraction via Address-of Operator (`&`)
- [x] Pointer Declaration & Initialization (`int *`, `float *`, `char *`)
- [x] Dereferencing Pointers (`*ptr`) to Read Values
- [x] Mutating Variables through Dereferenced Pointers (`*ptr = new_val`)
- [x] Printing Memory Addresses using `%p`
- [x] Call by Value Local Copy Limitations
- [x] Call by Reference Address Passing (`&var` ➜ `int *ptr`)
- [x] Pointer Aliasing (Multiple Pointers pointing to the same address)
- [x] Character Pointers (`char *`)
- [x] The Square Trap (Call by Value vs. Call by Reference Comparison)

---

## 🎯 Learning Objectives

- Extract memory addresses using the address-of operator (`&`).
- Declare and initialize pointers matching variable data types (`int *`, `float *`, `char *`).
- Dereference pointers (`*ptr`) to read and mutate underlying values.
- Print pointer addresses using the `%p` format specifier.
- Contrast Call by Value immutability with Call by Reference address mutation.

---

## 📈 Progress Checklist

- [ ] 01 The Memory Address Revealer
- [ ] 02 The First Pointer
- [ ] 03 The Dereference Discovery
- [ ] 04 The Remote Control Modification
- [ ] 05 The Copy Trap (Call by Value)
- [ ] 06 The True Modifier (Call by Reference)
- [ ] 07 Tracing the Chain
- [ ] 08 Identifying & vs *
- [ ] 09 Pointer to Character
- [ ] 10 The Square Trap

---

## 📁 Folder Contents

| File | Title | Concepts Used |
| :--- | :--- | :--- |
| [`01_the_memory_address_revealer.c`](./01_the_memory_address_revealer.c) | The Memory Address Revealer | Address-of Operator `&`, `%p` Format Specifier |
| [`02_the_first_pointer.c`](./02_the_first_pointer.c) | The First Pointer | Pointer Declaration, Pointer Initialization |
| [`03_the_dereference_discovery.c`](./03_the_dereference_discovery.c) | The Dereference Discovery | Dereference Operator `*` |
| [`04_the_remote_control_modification.c`](./04_the_remote_control_modification.c) | The Remote Control Modification | Modifying Original Variable Through a Pointer |
| [`05_the_copy_trap.c`](./05_the_copy_trap.c) | The Copy Trap (Call by Value) | Call by Value, Effect on Original Variable |
| [`06_the_true_modifier.c`](./06_the_true_modifier.c) | The True Modifier (Call by Reference) | Call by Reference, Passing an Address |
| [`07_tracing_the_chain.c`](./07_tracing_the_chain.c) | Tracing the Chain | Basic Pointer Tracing |
| [`08_identifying_ampersand_vs_asterisk.c`](./08_identifying_ampersand_vs_asterisk.c) | Identifying & vs * | Difference between `&` and `*` |
| [`09_pointer_to_character.c`](./09_pointer_to_character.c) | Pointer to Character | `char` pointers |
| [`10_the_square_trap.c`](./10_the_square_trap.c) | The Square Trap | Call by Value vs Call by Reference |

---

## 📝 Practice Questions

### Question 01: The Memory Address Revealer

- **Difficulty**: Easy
- **Concepts Used**: Address-of Operator `&`, `%p` Format Specifier
- **Problem Statement**:
  Every variable lives on a specific "plot of land" in your computer's memory. Declare an integer variable `age` with a value of 22. Print both its value and its exact memory address.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Value: 22
  Address: 0x7ffeefbff5ac (Note: Address will vary on your machine)
  ```
- **Constraints**: You must use the `%p` format specifier to print the address.
- **Hints**:
  - *Hint 1*: To get the address of a variable, place the ampersand (`&`) before its name.
  - *Hint 2*: The printf format specifier for memory addresses is `%p`.
  - *Hint 3*: `printf("Address: %p", (void *)&age);`

---

### Question 02: The First Pointer

- **Difficulty**: Easy
- **Concepts Used**: Pointer Declaration, Pointer Initialization
- **Problem Statement**:
  Declare a float variable `price = 99.99`. Create a pointer variable that stores the memory address of `price`. Print the memory address stored inside your pointer.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Pointer stores address: 0x16d63b4f8
  ```
- **Constraints**: The pointer must specifically be a `float` pointer (`float *`).
- **Hints**:
  - *Hint 1*: A pointer's data type must match the data type of the variable it points to.
  - *Hint 2*: Use the `*` symbol in the declaration to indicate a pointer.
  - *Hint 3*: `float *ptr = &price;`

---

### Question 03: The Dereference Discovery

- **Difficulty**: Easy
- **Concepts Used**: Dereference Operator `*`
- **Problem Statement**:
  You have an integer `score = 85` and a pointer `ptr` pointing to `score`. Without using the `score` variable in your printf statement, print the value 85 by extracting it through the pointer.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Value extracted via pointer: 85
  ```
- **Constraints**: Use the dereference operator.
- **Hints**:
  - *Hint 1*: The dereference operator allows you to "go to the address" and grab the data inside.
  - *Hint 2*: The dereference operator uses the `*` symbol.
  - *Hint 3*: `printf("%d", *ptr);`

---

### Question 04: The Remote Control Modification

- **Difficulty**: Easy
- **Concepts Used**: Modifying Original Variable Through a Pointer
- **Problem Statement**:
  Declare an integer `speed = 50`. Create a pointer `p` pointing to `speed`. Using only the pointer `p`, change the value of `speed` to 100. Print the `speed` variable to prove it changed.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  New Speed: 100
  ```
- **Constraints**: You cannot write `speed = 100;`. You must mutate it via the pointer.
- **Hints**:
  - *Hint 1*: You can assign a value to a dereferenced pointer.
  - *Hint 2*: Dereference `p` and set it equal to 100.
  - *Hint 3*: `*p = 100;`

---

### Question 05: The Copy Trap (Call by Value)

- **Difficulty**: Easy
- **Concepts Used**: Call by Value, Effect on Original Variable
- **Problem Statement**:
  Write a function `addBonus(int salary)` that adds 5000 to the salary. In `main()`, declare `salary = 10000`, pass it to the function, and print the salary in `main()` after the function call. Observe the output.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Salary in main: 10000
  ```
- **Constraints**: Do not return any value from the function.
- **Hints**:
  - *Hint 1*: C passes arguments by value (as a copy).
  - *Hint 2*: The salary inside the function is a completely different memory location than the salary in main.
  - *Hint 3*: Mutating the copy does nothing to the original.

---

### Question 06: The True Modifier (Call by Reference)

- **Difficulty**: Easy
- **Concepts Used**: Call by Reference, Passing an Address
- **Problem Statement**:
  Rewrite the previous program. This time, create a function `addBonusRef(int *salaryPtr)` that receives a pointer. Add 5000 to the value at that address. Call it from `main()` by passing the address of salary, and print the result in `main()`.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Salary in main after bonus: 15000
  ```
- **Constraints**: You must pass the memory address from `main()`.
- **Hints**:
  - *Hint 1*: Pass the address using `&salary`.
  - *Hint 2*: In the function, use the dereference operator to access the value.
  - *Hint 3*: `*salaryPtr = *salaryPtr + 5000;`

---

### Question 07: Tracing the Chain

- **Difficulty**: Easy
- **Concepts Used**: Basic Pointer Tracing
- **Problem Statement**:
  Declare `int a = 10;`, `int *p1 = &a;`, and `int *p2 = p1;`. Change the value to 20 using `p2`. Print the value of `a`. What happens?
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Value of a: 20
  ```
- **Constraints**: Understand how multiple pointers can point to the same address.
- **Hints**:
  - *Hint 1*: `p1` holds the address of `a`.
  - *Hint 2*: `p2 = p1` means `p2` now holds the exact same address. Both point to `a`.
  - *Hint 3*: `*p2 = 20;` alters the original `a`.

---

### Question 08: Identifying & vs *

- **Difficulty**: Easy
- **Concepts Used**: Difference between `&` and `*`
- **Problem Statement**:
  Declare `int x = 5;` and `int *ptr = &x;`. Print the values of `x`, `&x`, `ptr`, `*ptr`, and `&ptr`. Observe what each represents.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  x: 5
  &x: 0x100
  ptr: 0x100
  *ptr: 5
  &ptr: 0x200
  (Note: Addresses will vary)
  ```
- **Constraints**: Match the correct format specifiers (`%d` vs `%p`).
- **Hints**:
  - *Hint 1*: `x` and `*ptr` are values (`%d`).
  - *Hint 2*: `&x`, `ptr`, and `&ptr` are addresses (`%p`).
  - *Hint 3*: Notice that `ptr` has its own unique memory address (`&ptr`).

---

### Question 09: Pointer to Character

- **Difficulty**: Easy
- **Concepts Used**: `char` pointers
- **Problem Statement**:
  Declare a character `grade = 'B'`. Create a pointer to this character. Using the pointer, upgrade the student's grade to `'A'`. Print the original variable.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  Upgraded Grade: A
  ```
- **Constraints**: Use a `char *`.
- **Hints**:
  - *Hint 1*: `char *p = &grade;`
  - *Hint 2*: Dereference `p` and assign the character `'A'`.
  - *Hint 3*: Remember to use single quotes for characters.

---

### Question 10: The Square Trap

- **Difficulty**: Easy
- **Concepts Used**: Call by Value vs Call by Reference
- **Problem Statement**:
  Write a function `squareValue(int n)` that squares a number, and `squareReference(int *n)` that does the same. Call both from `main()` using a variable `num = 4`, printing `num` after each call.
- **Sample Input**: *(No input)*
- **Sample Output**:
  ```text
  After squareValue: 4
  After squareReference: 16
  ```
- **Constraints**: Observe the difference between modifying a copy and modifying an address.
- **Hints**:
  - *Hint 1*: `squareValue` just changes its local copy.
  - *Hint 2*: `squareReference` takes `&num` and does `*n = *n * *n;`.
  - *Hint 3*: Only passing the address allows the original to be mutated.

---

## 🔗 Navigation Links

- 📋 **[View Complete Practice Workbook (`PRACTICE.md`)](./PRACTICE.md)**
- 🟡 **[Proceed to Medium Practice (`../medium/`)](../medium/)**
- 🔴 **[Proceed to Hard Practice (`../hard/`)](../hard/)**
- 🏠 **[Return to Chapter 6 Overview (`../README.md`)](../README.md)**
