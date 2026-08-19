# 📊 Top 10 Array of Structures Prediction Questions

> Predict the member values, updated array indices, pointer element references, and operator precedence for Array of Structures operations.

---

### Snippet 1
```c
struct emp { int id; }; 
struct emp e[5]; 
e[2].id = 1;
```
*Which specific element index in array `e` was updated?*

---

### Snippet 2
```c
struct pt { int x; int y; }; 
struct pt arr[2] = {{1, 2}, {3, 4}}; 
printf("%d", arr[1].x);
```

---

### Snippet 3
```c
struct data { char msg[10]; }; 
struct data d[2]; 
strcpy(d[0].msg, "A");
```
*Which structure element and string member was populated?*

---

### Snippet 4
```c
struct test { int a; }; 
struct test t[10] = {0}; 
printf("%d", t[9].a);
```

---

### Snippet 5
```c
struct box { int w; }; 
struct box arr[3]; 
arr[0].w = 5; 
arr[1] = arr[0]; 
printf("%d", arr[1].w);
```

---

### Snippet 6
```c
struct inv { int id; }; 
struct inv store[5]; 
int i = 3; 
store[i].id = 99;
```
*Which inventory item in the array was updated?*

---

### Snippet 7
```c
struct A { int v; }; 
struct A arr[2]; 
struct A *p = &arr[0]; 
p->v = 5;
```
*Which array element's member was modified?*

---

### Snippet 8
```c
struct B { int x; }; 
struct B arr[2]; 
arr[0].x = 10; 
arr[1].x = 20; 
printf("%d", arr[0].x + arr[1].x);
```

---

### Snippet 9
```c
struct C { int id; }; 
struct C arr[2] = {{1}, {2}}; 
struct C temp = arr[0]; 
arr[0] = arr[1]; 
arr[1] = temp;
```
*What integer value is stored in `arr[0].id` after swapping?*

---

### Snippet 10
```c
struct D { float f; }; 
struct D arr[2]; 
arr[1].f = 3.14;
```
*Which operator is evaluated first in `arr[1].f`: the array subscript operator `[]` or the dot operator `.`?*
