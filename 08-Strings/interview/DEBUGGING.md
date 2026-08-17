# 🐞 Top 10 Debugging Challenges

> Identify the syntax errors, logical bugs, type mismatches, or undefined behaviors in the following C code snippets.

---

### Challenge 1
```c
char name[5] = "Shradha";
```
*(Problem: Array capacity buffer overflow — `"Shradha"` requires 8 bytes (`7` chars $+ 1$ byte `'\0'`), exceeding the 5-byte array capacity).*

---

### Challenge 2
```c
char str[20]; 
str = "Hello";
```
*(Problem: Array lvalue reassignment syntax error — an array name `str` is an unmodifiable constant pointer; use `strcpy(str, "Hello")`).*

---

### Challenge 3
```c
char ch = "A";
```
*(Problem: Type mismatch quote error — double quotes `"A"` declare a string literal (`char *`), which cannot be assigned to a single `char ch` variable; use `'A'`).*

---

### Challenge 4
```c
char word[] = {'W', 'o', 'r', 'd'}; 
printf("%s", word);
```
*(Problem: Missing null terminator `'\0'` — `word` is a plain char array, not a valid string; `printf("%s")` will read adjacent garbage RAM).*

---

### Challenge 5
```c
char s1[10] = "Hi", s2[10] = "There"; 
s1 = s1 + s2;
```
*(Problem: Illegal array addition operator — arrays cannot be concatenated using the `+` operator in C; use `strcat(s1, s2)`).*

---

### Challenge 6
```c
char name[20]; 
scanf("%s", &name);
```
*(Problem: Redundant ampersand `&` — the array name `name` automatically decays to `&name[0]`; passing `&name` passes `char (*)[20]` instead of `char *`).*

---

### Challenge 7
```c
if (str1 == str2) { 
    printf("Equal"); 
}
```
*(Problem: Memory pointer address comparison bug — `str1 == str2` compares physical RAM addresses, not string text contents; use `strcmp(str1, str2) == 0`).*

---

### Challenge 8
```c
char s1[5] = "A", s2[] = "BCD"; 
strcat(s1, s2);
```
*(Problem: Destination capacity overflow risk — `"A"` ($2$ bytes) $+`"BCD"` ($4$ bytes) $= 5$ bytes. If `s2` is any larger (e.g., `"BCDE"`), `strcat` overflows `s1[5]`).*

---

### Challenge 9
```c
char buffer[50];
gets(buffer);
```
*(Problem: Unsafe function usage — `gets()` lacks buffer bounds checking and causes stack buffer overflow vulnerabilities; use `fgets(buffer, 50, stdin)`).*

---

### Challenge 10
```c
int len = strlen('A');
```
*(Problem: Type argument mismatch — `strlen()` expects a character pointer (`char *`), not a single `char` byte `'A'` (which decays to integer ASCII 65)).*
