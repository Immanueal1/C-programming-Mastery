# 🔮 Top 10 Output Prediction Questions

> Predict the exact console output for the following C code snippets. Assume standard `#include <stdio.h>` and `int main()` setup for each exercise.

---

### Snippet 1
```c
for (int i = 0; i < 3; i++); 
    printf("%d", i);
```
*(Hint: Look closely at the semicolon right after the `for` loop header).*

---

### Snippet 2
```c
int i = 5; 
while (i--) 
{ 
    printf("%d ", i); 
}
```

---

### Snippet 3
```c
int x = 0; 
do 
{ 
    x++; 
} while (x < 0); 
printf("%d", x);
```

---

### Snippet 4
```c
for (int i = 1; i <= 5; i++) 
{ 
    if (i == 3) continue; 
    printf("%d", i); 
}
```

---

### Snippet 5
```c
int a = 1; 
while (++a < 4) 
{ 
    printf("A"); 
}
```

---

### Snippet 6
```c
int b = 1; 
while (b++ < 4) 
{ 
    printf("B"); 
}
```

---

### Snippet 7
```c
for (int i = 0; i < 5; i += 2) 
{ 
    printf("%d", i); 
}
```

---

### Snippet 8
```c
int i = 0; 
while (1) 
{ 
    if (i == 2) break; 
    i++; 
    printf("%d", i); 
}
```

---

### Snippet 9
```c
for (char c = 'C'; c >= 'A'; c--) 
{ 
    printf("%c", c); 
}
```

---

### Snippet 10
```c
int i = 1, j = 1; 
while (i <= 3) 
{ 
    while (j <= 3) 
    { 
        break; 
        j++; 
    } 
    i++; 
} 
printf("%d %d", i, j);
```
