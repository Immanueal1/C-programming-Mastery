# 📥 Top 10 String I/O Prediction Questions

> Predict the exact execution output, input buffer state, or runtime failure for specific string input and output stream operations.

---

### Scenario 1
- **User Input**: `John Doe`
- **Code Executed**: `scanf("%s", name);`
- **Question**: What string content is stored inside the `name` array?

---

### Scenario 2
- **User Input**: `A B C`
- **Code Executed**: `fgets(str, 10, stdin);`
- **Question**: Does the `str` array contain spaces, or does it stop at the first space?

---

### Scenario 3
- **User Input**: `Hello`
- **Code Executed**: `puts("Hello"); puts("World");`
- **Question**: Are `"Hello"` and `"World"` printed on the same line or on separate lines?

---

### Scenario 4
- **User Input**: `1234567890`
- **Code Executed**: `fgets(str, 5, stdin);`
- **Question**: What exact sequence of characters is stored inside array `str`?

---

### Scenario 5
- **User Input**: `\n` *(User presses Enter without typing any letters)*
- **Code Executed**: `scanf("%s", name);`
- **Question**: What happens to the input execution stream?

---

### Scenario 6
- **User Input**: `Cat` *(followed by Enter key)*
- **Code Executed**: `fgets(str, 10, stdin);`
- **Question**: What exact character is stored in `str` immediately preceding the terminating `'\0'`?

---

### Scenario 7
- **Code Executed**: `printf("%s", "A\0B");`
- **Question**: What exact text outputs to the console window?

---

### Scenario 8
- **Code Executed**: `char *s = "Hi"; scanf("%s", s);`
- **User Input**: `Space`
- **Question**: What runtime behavior occurs when `scanf` attempts to write into `s`?

---

### Scenario 9
- **Code Executed**: `char s[5]; gets(s);`
- **User Input**: `VeryLongWord`
- **Question**: What critical security and memory failure occurs during execution?

---

### Scenario 10
- **Code Executed**: `char s[] = ""; printf("%d", strlen(s));`
- **Question**: What integer value is output by `strlen(s)`?
