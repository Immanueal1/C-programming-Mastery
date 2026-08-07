# 🔮 Top 10 Output Prediction Questions

> Predict the exact console output for the following C code snippets. Assume standard `#include <stdio.h>` and `int main()` setup for each exercise.

---

### Snippet 1
```c
int x = 0; 
if (x++) 
    printf("True"); 
else 
    printf("False");
```
*(Hint: Post-increment uses the current value first before incrementing).*

---

### Snippet 2
```c
int x = 10; 
if (x == 10) 
    printf("A"); 
    printf("B"); 
else 
    printf("C");
```
*(Hint: Check syntax error due to unbraced multi-statement before else).*

---

### Snippet 3
```c
int x = 5; 
if (x = 0) 
    printf("Zero"); 
else 
    printf("Non-Zero");
```

---

### Snippet 4
```c
int a = 1; 
switch (a) 
{ 
    case 1: printf("One"); 
    case 2: printf("Two"); 
    default: printf("End"); 
}
```

---

### Snippet 5
```c
int x = 5, y = 10; 
int max = x > y ? x++ : y++; 
printf("%d", y);
```

---

### Snippet 6
```c
if (!printf("Hello")) 
    printf("World"); 
else 
    printf("C");
```
*(Hint: `printf()` returns the number of characters printed).*

---

### Snippet 7
```c
int a = 2; 
switch (a) 
{ 
    case 1: printf("1"); break; 
    default: printf("D"); 
    case 2: printf("2"); 
}
```

---

### Snippet 8
```c
if (5 > 4 > 3) 
    printf("Yes"); 
else 
    printf("No");
```
*(Hint: `5 > 4` evaluates to 1. Is `1 > 3`?).*

---

### Snippet 9
```c
int x = 10; 
if (x == 10); 
{ 
    printf("Hello"); 
}
```
*(Hint: Note the trailing semicolon right after `if(x == 10)`).*

---

### Snippet 10
```c
int a = -5; 
if (a) 
    printf("True"); 
else 
    printf("False");
```
