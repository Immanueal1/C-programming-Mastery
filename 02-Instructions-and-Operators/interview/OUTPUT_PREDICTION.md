# 🔮 Top 10 Output Prediction Questions

> Predict the exact console output for the following C code snippets. Assume standard `#include <stdio.h>` and `int main()` setup for each exercise.

---

### Snippet 1
```c
printf("%d", 2 * 3 / 4 * 5);
```

---

### Snippet 2
```c
int a = (int) 3.9999; 
printf("%d", a);
```

---

### Snippet 3
```c
printf("%d", 5 > 4 > 3);
```
*(Hint: Evaluates left to right. Is `5 > 4` true? Then evaluate `result > 3`).*

---

### Snippet 4
```c
int x = 5; 
x += x -= x *= 2; 
printf("%d", x);
```
*(Hint: Right-to-Left associativity for assignment operators).*

---

### Snippet 5
```c
printf("%d", -15 % 4);
```

---

### Snippet 6
```c
printf("%d", 15 % -4);
```

---

### Snippet 7
```c
int a = 10, b = 20; 
printf("%d", a == b);
```

---

### Snippet 8
```c
printf("%f", 5 / 2);
```

---

### Snippet 9
```c
printf("%d", 0 || 5 && 0);
```
*(Hint: Precedence of `&&` over `||`).*

---

### Snippet 10
```c
int a = 2, b = 2; 
printf("%d", a ^ b);
```
