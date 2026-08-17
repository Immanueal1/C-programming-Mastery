# 🧠 Top 10 Memory & String-Layout Prediction Questions

> Predict the memory state, byte sizes, index contents, address offsets, and buffer limits based on string memory layout rules.

---

### Problem 1
You declare `char str[] = "Data";`. How many bytes are reserved in contiguous RAM memory?

---

### Problem 2
If `char arr[10] = "Hi";`, what character is stored at index 2? What character is stored at index 9?

---

### Problem 3
Given `char s[5]; fgets(s, 5, stdin);`. If the user types `"Program"`, what characters are stored at indices 0, 1, 2, 3, and 4 of array `s`?

---

### Problem 4
What is the decimal integer (ASCII) value of the Null Character `'\0'`?

---

### Problem 5
Given `char str[] = {'C', '\0', 'D', 'E'};`. If you call `strlen(str)`, what number is returned?

---

### Problem 6
If the base address (`&str[0]`) of `char str[] = "Test";` is `1000`, what is the memory address of the terminating `'\0'` character?

---

### Problem 7
You execute `char *ptr = "Code";`. Does variable `ptr` store an array of characters or a memory address pointer?

---

### Problem 8
Given `char s1[10] = "A"; char s2[] = "B"; strcat(s1, s2);`. What character is stored at `s1[2]`?

---

### Problem 9
Given `char pass[5] = "1234";`. Is this declaration safe for general string functions? Why or why not?

---

### Problem 10
`char name[20];`. The user inputs `"Alice Bob"` via `scanf("%s", name);`. What is stored at index `name[5]` (a space `' '`, a null character `'\0'`, or garbage)?
