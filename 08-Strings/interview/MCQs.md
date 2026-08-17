# 📝 Top 10 Multiple Choice Questions (MCQs)

> Test your technical understanding of Chapter 8 string mechanics, memory layout, I/O functions, pointer vs. array rules, and `<string.h>` utilities.

---

### Question 1
Which character automatically terminates every valid string in C?
- A) `\n`
- B) `\0`
- C) `\t`
- D) `.`

---

### Question 2
What is the total memory occupied by `char str[] = "Hi";`?
- A) 2 bytes
- B) 3 bytes
- C) 4 bytes
- D) 8 bytes

---

### Question 3
Why does `scanf("%s", str)` fail to read the full input `"New York"`?
- A) C strings cannot contain uppercase letters.
- B) `%s` stops reading input at the first whitespace character (space/tab/newline).
- C) The memory buffer automatically overflows.
- D) You forgot to write the ampersand `&` operator.

---

### Question 4
Which function safely reads a multi-word string with spaces using a strict buffer size limit?
- A) `gets()`
- B) `scanf()`
- C) `fgets()`
- D) `puts()`

---

### Question 5
What is the key difference between `char *p = "A";` and `char a[] = "A";`?
- A) Pointer `p` cannot be reassigned.
- B) Array name `a` cannot be reassigned to point to a new string literal.
- C) `p` allocates more memory for the text characters.
- D) There is no difference in C.

---

### Question 6
Which `<string.h>` function calculates the number of visible text characters in a string, excluding `'\0'`?
- A) `sizeof()`
- B) `strcount()`
- C) `strlen()`
- D) `strlength()`

---

### Question 7
If `strcmp("Box", "Apple")` is executed, the return value will be:
- A) `0`
- B) Positive integer ($> 0$)
- C) Negative integer ($< 0$)
- D) `18`

---

### Question 8
What happens if you execute `strcat(dest, src)` but the destination array `dest` is too small?
- A) Compilation Syntax Error
- B) Buffer Overflow / Memory Corruption
- C) The string is automatically truncated safely
- D) `strcat` returns `NULL`

---

### Question 9
In password salting security applications, what is a "salt"?
- A) An RSA encryption key
- B) An extra character sequence appended to the password before processing
- C) A cryptographic hashing algorithm
- D) A masked `'\0'` character

---

### Question 10
What does `puts("Hello")` do that `printf("Hello")` does not do automatically?
- A) Prints text in uppercase letters
- B) Returns the visible string length
- C) Automatically appends a newline `\n` to the output stream
- D) Ignores the terminating null character
