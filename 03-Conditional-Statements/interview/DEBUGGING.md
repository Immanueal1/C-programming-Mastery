# 🐞 Top 10 Debugging Challenges

> Identify the syntax errors, logical bugs, or undefined behaviors in the following C code snippets.

---

### Challenge 1
```c
if (a = b) 
{ 
    printf("Equal"); 
}
```
*(Problem: Intended to check equality between `a` and `b`).*

---

### Challenge 2
```c
switch (grade) 
{ 
    case "A": 
        printf("Excellent"); 
        break; 
}
```
*(Problem: String literal `"A"` vs character literal `'A'`).*

---

### Challenge 3
```c
int x = 10; 
if (x > 5) 
    printf("Big") 
else 
    printf("Small");
```
*(Problem: Missing semicolon before `else`).*

---

### Challenge 4
```c
switch (num) 
{ 
    case 1.5: 
        printf("One point five"); 
        break; 
}
```
*(Problem: Floating-point constant in `case` label).*

---

### Challenge 5
```c
int a = 5, b = 10; 
int max = (a > b) ? return a : return b;
```
*(Problem: Statement vs expression usage in ternary operator).*

---

### Challenge 6
```c
if (x == 5); 
{ 
    printf("x is five"); 
}
```
*(Problem: Prints `"x is five"` even when `x` is 6).*

---

### Challenge 7
```c
if x > 10 
    printf("Greater");
```
*(Problem: Missing parentheses around condition).*

---

### Challenge 8
```c
int b = 1; 
switch (a) 
{ 
    case b: 
        printf("One"); 
}
```
*(Problem: Variable `b` used as case label instead of integer constant).*

---

### Challenge 9
```c
if (a > 10) 
{ 
    printf("A"); 
} 
else if (a > 5) 
{ 
    printf("B"); 
} 
else (a < 5) 
{ 
    printf("C"); 
}
```
*(Problem: Syntax error on final `else` clause).*

---

### Challenge 10
```c
int age = 20; 
if (18 <= age <= 30) 
    printf("Young");
```
*(Problem: Chained relational comparison evaluates as `(18 <= age) <= 30`).*
