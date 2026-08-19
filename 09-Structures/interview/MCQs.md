# 📝 Top 10 Multiple Choice Questions (MCQs)

> Test your technical understanding of Chapter 9 structure definitions, member access operators, pointers, function passing, and `typedef` aliases.

---

### Question 1
What is required at the end of every C structure definition statement?
- A) `:`
- B) `.`
- C) `;`
- D) `,`

---

### Question 2
Which operator accesses a member of a direct, standard structure variable?
- A) `->`
- B) `.`
- C) `*`
- D) `&`

---

### Question 3
If `p` is a pointer to a structure, which is the correct, clean way to access member `x`?
- A) `p.x`
- B) `*p.x`
- C) `p->x`
- D) `&p.x`

---

### Question 4
What does `struct student s = {0};` do?
- A) Sets only the first member to 0.
- B) Zero-initializes all members of the structure to 0, 0.0, or null state.
- C) Causes a compilation syntax error.
- D) Converts the structure into a null pointer.

---

### Question 5
How are members of an array of structures `arr` indexed correctly?
- A) `arr.member[0]`
- B) `arr[0].member`
- C) `arr[0]->member`
- D) `arr->member[0]`

---

### Question 6
When a structure variable is passed to a function by value, what happens?
- A) The original structure in the caller function is modified in-place.
- B) The function receives a complete independent copy of the structure on the stack.
- C) A pointer address is implicitly passed by the compiler.
- D) The compiler throws a warning.

---

### Question 7
To permanently modify the original structure object inside a function, you must pass:
- A) The structure variable directly
- B) The structure's alias name
- C) The memory address of the structure (`&s1`)
- D) A typedef copy

---

### Question 8
What does the `typedef` keyword do in C?
- A) Defines a new variable in memory
- B) Creates a custom type alias (nickname) for an existing data type
- C) Allocates dynamic heap memory for a structure
- D) Imports an external library header

---

### Question 9
`(*ptr).member` is 100% syntactically equivalent to:
- A) `ptr.member`
- B) `*ptr->member`
- C) `ptr->member`
- D) `ptr[member]`

---

### Question 10
Why is `strcpy()` required when populating character array members of a structure after declaration?
- A) Because the dot operator `.` does not support character types.
- B) Because character arrays in C are non-modifiable lvalues and cannot be reassigned using `=` after declaration.
- C) Because structures cannot store arrays natively.
- D) It is not required; `=` works perfectly.
