# 🔮 Top 10 Code Output Prediction Questions

> Predict the exact console output for the following C code snippets. Assume standard `#include <stdio.h>` and `#include <string.h>` setup for each exercise.

---

### Snippet 1
```c
struct node { int a; }; 
struct node n1 = {5}; 
struct node n2 = n1; 
printf("%d", n2.a);
```

---

### Snippet 2
```c
struct pt { int x, y; }; 
struct pt p = {10}; 
printf("%d %d", p.x, p.y);
```

---

### Snippet 3
```c
struct st { char c[10]; int a; }; 
struct st s1 = {0}; 
printf("%d", s1.c[0]); // (Hint: integer ASCII value of null char)
```

---

### Snippet 4
```c
struct t { int x; }; 
void f(struct t temp) { temp.x = 99; } 

int main() { 
    struct t myT = {1}; 
    f(myT); 
    printf("%d", myT.x); 
}
```

---

### Snippet 5
```c
struct A { int v; }; 
struct A a1 = {10}; 
struct A *p = &a1; 
printf("%d", p->v + 5);
```

---

### Snippet 6
```c
typedef struct { int code; } Item; 
Item i = {404}; 
printf("%d", i.code);
```

---

### Snippet 7
```c
struct B { int arr[3]; }; 
struct B b1 = {{1, 2, 3}}; 
printf("%d", b1.arr[1]);
```

---

### Snippet 8
```c
struct box { int h; }; 
struct box b[2] = {{10}, {20}}; 
printf("%d", b[1].h);
```

---

### Snippet 9
```c
struct c { int z; }; 
struct c c1 = {5}; 
struct c *p = &c1; 
(*p).z = 8; 
printf("%d", c1.z);
```

---

### Snippet 10
```c
struct X { int v; }; 
struct X arr[2]; 
arr[0].v = 1; 
arr[1] = arr[0]; 
printf("%d", arr[1].v);
```
