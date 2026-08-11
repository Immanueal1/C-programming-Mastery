# 🔮 Top 10 Output Prediction Questions

> Predict the exact console output for the following C code snippets. Assume standard `#include <stdio.h>` setup for each exercise.

---

### Snippet 1
```c
void f() { 
    printf("A "); 
} 

int main() { 
    f(); 
    f(); 
    return 0; 
}
```

---

### Snippet 2
```c
int calc(int x) { 
    return x + 5; 
} 

int main() { 
    int x = 10; 
    calc(x); 
    printf("%d", x); 
    return 0; 
}
```

---

### Snippet 3
```c
int fun(int n) { 
    if (n == 0) return 1; 
    return 2 * fun(n - 1); 
} 
// Called in main(): printf("%d", fun(3));
```

---

### Snippet 4
```c
void test(int n) { 
    if (n > 0) { 
        test(n - 1); 
        printf("%d ", n); 
    } 
} 
// Called in main(): test(3);
```

---

### Snippet 5
```c
void test(int n) { 
    if (n > 0) { 
        printf("%d ", n); 
        test(n - 1); 
    } 
} 
// Called in main(): test(3);
```

---

### Snippet 6
```c
int f(int a, int b) { 
    return a * b; 
} 

int main() { 
    printf("%d", f(2, f(3, 4))); 
    return 0; 
}
```

---

### Snippet 7
```c
void a() { 
    printf("1 "); 
} 

void b() { 
    a(); 
    printf("2 "); 
} 

int main() { 
    b(); 
    return 0; 
}
```

---

### Snippet 8
```c
int get() { 
    return 5; 
    return 10; 
} 

int main() { 
    printf("%d", get()); 
    return 0; 
}
```

---

### Snippet 9
```c
void check(int n) { 
    if (n < 5) return; 
    printf("Done"); 
} 
// Called in main(): check(3);
```

---

### Snippet 10
```c
int f(int n) { 
    if (n == 1) return 1; 
    return n + f(n - 1); 
} 
// Called in main(): printf("%d", f(4));
```
