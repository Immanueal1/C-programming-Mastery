# 🔮 Top 10 Output Prediction Questions

> Predict the exact console output for the following C code snippets. Assume standard `#include <stdio.h>` setup for each exercise.

---

### Snippet 1
```c
int x = 10; 
int *p = &x; 
*p = 20; 
printf("%d", x);
```

---

### Snippet 2
```c
int a = 5, b = 5; 
int *p = &a; 
p = &b; 
*p = 10; 
printf("%d %d", a, b);
```

---

### Snippet 3
```c
void modify(int x) { 
    x = 10; 
} 

int main() { 
    int x = 4; 
    modify(x); 
    printf("%d", x); 
    return 0; 
}
```

---

### Snippet 4
```c
void modify(int *p) { 
    *p = 10; 
} 

int main() { 
    int x = 4; 
    modify(&x); 
    printf("%d", x); 
    return 0; 
}
```

---

### Snippet 5
```c
int a = 1; 
int *p1 = &a; 
int **p2 = &p1; 
**p2 = 5; 
printf("%d", a);
```

---

### Snippet 6
```c
int x = 100; 
int *p = &x; 
int y = *p; 
y = 200; 
printf("%d", x);
```

---

### Snippet 7
```c
void swap(int *a, int *b) { 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 

int main() { 
    int x = 1, y = 2; 
    swap(&x, &y); 
    printf("%d %d", x, y); 
    return 0; 
}
```

---

### Snippet 8
```c
void fakeSwap(int a, int b) { 
    int t = a; 
    a = b; 
    b = t; 
} 

int main() { 
    int x = 1, y = 2; 
    fakeSwap(x, y); 
    printf("%d %d", x, y); 
    return 0; 
}
```

---

### Snippet 9
```c
int val = 8; 
int *p = &val; 
printf("%d", *(&val));
```

---

### Snippet 10
```c
int a = 10; 
int *p = &a; 
*p = *p + 5; 
printf("%d", a);
```
