# 🏹 Top 10 Pointer & Arrow Operator Prediction Questions

> Evaluate the validity, syntax precedence, pointer mutation behavior, and console output for structure pointers and arrow operator expressions.

---

### Snippet 1
```c
struct T { int x; }; 
struct T t1 = {5}; 
struct T *p = &t1; 
printf("%d", p->x);
```

---

### Snippet 2
```c
struct T { int x; }; 
struct T t1 = {5}; 
struct T *p = &t1; 
printf("%d", *p.x);
```
*Is `*p.x` valid syntax or a compilation error? Explain why.*

---

### Snippet 3
```c
struct T { int x; }; 
struct T t1 = {5}; 
struct T *p = &t1; 
printf("%d", (*p).x);
```
*Is `(*p).x` valid C syntax? What is printed?*

---

### Snippet 4
```c
struct T { int x; }; 
struct T t1 = {5}; 
printf("%d", t1->x);
```
*Is `t1->x` valid syntax when `t1` is a direct structure variable? Explain why.*

---

### Snippet 5
```c
struct T { int x; }; 
struct T t1 = {5}; 
struct T *p = &t1; 
p->x = 10; 
printf("%d", t1.x);
```

---

### Snippet 6
```c
struct T { int x; }; 
struct T t1 = {5}; 
struct T *p = &t1; 
(*p).x = 20; 
printf("%d", t1.x);
```

---

### Snippet 7
```c
struct T { int x; }; 
struct T t1 = {5}; 
printf("%d", (&t1)->x);
```
*Is `(&t1)->x` valid syntax? What is printed?*

---

### Snippet 8
```c
typedef struct { int v; } obj; 
obj o1 = {1}; 
obj *ptr = &o1; 
ptr->v = 2; 
printf("%d", o1.v);
```

---

### Snippet 9
```c
struct U { char n[5]; }; 
struct U u1; 
struct U *p = &u1; 
strcpy(p->n, "Hi"); 
printf("%s", u1.n);
```

---

### Snippet 10
```c
struct W { int a; }; 
struct W w1 = {10}; 
struct W *p1 = &w1; 
struct W *p2 = p1; 
p2->a = 99; 
printf("%d", p1->a);
```
