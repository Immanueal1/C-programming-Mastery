# 🐞 Top 10 Debugging Challenges

> Identify the syntax errors, logical bugs, or undefined behaviors in the following C code snippets.

---

### Challenge 1
```c
for (int i = 1; i <= 10; i--) 
{ 
    printf("%d", i); 
}
```
*(Problem: Infinite loop due to incorrect decrement updation).*

---

### Challenge 2
```c
int x = 1; 
while (x < 5) 
{ 
    printf("%d", x); 
}
```
*(Problem: Unupdated iterator `x` causes infinite loop).*

---

### Challenge 3
```c
int i = 0; 
do 
{ 
    printf("%d", i); 
    i++; 
} while (i < 5)
```
*(Problem: Missing trailing semicolon `;` after `while(i < 5)`).*

---

### Challenge 4
```c
for (int i = 0, i < 5, i++) 
{ 
    printf("Hello"); 
}
```
*(Problem: Commas `,` used as header delimiters instead of semicolons `;`).*

---

### Challenge 5
```c
while (i = 5) 
{ 
    printf("Loop"); 
    break; 
}
```
*(Problem: Assignment operator `=` used inside condition instead of equality comparison `==`).*

---

### Challenge 6
```c
for (float f = 0.0; f != 1.0; f += 0.3) 
{ 
    printf("%f", f); 
}
```
*(Problem: Binary floating-point precision anomaly prevents `f` from exactly matching `1.0`).*

---

### Challenge 7
```c
int i = 1; 
while (i <= 5) 
{ 
    if (i == 3) continue; 
    printf("%d", i); 
    i++; 
}
```
*(Problem: `continue` skips the `i++` updation statement, locking `i` at 3 in an infinite loop).*

---

### Challenge 8
```c
for (int i = 0; i < 5; i++) 
{ 
    int j = 0; 
    break; 
    printf("Test"); 
}
```
*(Problem: `printf("Test")` is dead/unreachable code due to unconditional prior `break`).*

---

### Challenge 9
```c
while (1); 
{ 
    printf("Infinite"); 
}
```
*(Problem: Trailing semicolon right after `while(1)` locks execution in a silent infinite loop).*

---

### Challenge 10
```c
for (int i = 0; i < 3; i++) 
{ 
    break outer; 
}
```
*(Problem: Labeled break syntax like `break outer;` is invalid in C).*
