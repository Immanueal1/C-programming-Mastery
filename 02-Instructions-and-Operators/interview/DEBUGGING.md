# 🐞 Top 10 Debugging Challenges

> Identify the syntax errors, logical bugs, or undefined behaviors in the following C code snippets.

---

### Challenge 1
```c
int result = a + b * c;
```
*(Problem: User intended for `a + b` to evaluate first before multiplying by `c`).*

---

### Challenge 2
```c
int x = 5, y = 2; 
float z = x / y; 
printf("%f", z);
```
*(Problem: Outputs `2.000000` instead of `2.500000`. Fix the integer division truncation).*

---

### Challenge 3
```c
int a; 
5 = a;
```

---

### Challenge 4
```c
int power = 5 ^ 2;
```
*(Problem: Intended to calculate 5 squared).*

---

### Challenge 5
```c
float rem = 15.5 % 3.0;
```

---

### Challenge 6
```c
int x = 10; 
if (x = 5) { 
    printf("Five"); 
}
```

---

### Challenge 7
```c
int a = b = c = 10;
```
*(Problem: Assuming `b` and `c` were not previously declared).*

---

### Challenge 8
```c
int a = 5; 
int b = 0; 
printf("%d", a / b);
```

---

### Challenge 9
```c
char c = 'A'; 
printf("%d", c + 1);
```

---

### Challenge 10
```c
int x = 10; 
printf("%d", x < 20 < 30);
```
