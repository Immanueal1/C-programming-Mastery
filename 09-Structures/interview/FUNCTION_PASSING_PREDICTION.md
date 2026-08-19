# 🔄 Top 10 Function & Pass-by-Value Prediction Questions

> Predict caller object mutation behaviors, stack memory copying semantics, and operator bugs when passing structures to functions.

---

### Scenario 1
```c
struct pt { int x; };
void f(struct pt p) { p.x = 0; }

int main() {
    struct pt p1 = {10};
    f(p1);
    // Does p1.x change to 0 or remain 10?
}
```

---

### Scenario 2
```c
struct pt { int x; };
void f(struct pt *p) { p->x = 0; }

int main() {
    struct pt p1 = {10};
    f(&p1);
    // Does p1.x change to 0 or remain 10?
}
```

---

### Scenario 3
```c
struct pt { int x; };
void f(struct pt p) { p.x = 0; }
```
*When `p1` is passed to `f(p1)`, is a full physical memory copy of `p1` pushed onto the function call stack?*

---

### Scenario 4
```c
struct pt { int x; };
void f(struct pt *p) { (*p).x = 0; }

int main() {
    struct pt p1 = {10};
    f(&p1);
    // Does p1.x change to 0 or remain 10?
}
```

---

### Scenario 5
```c
struct pt { int x; };
struct pt f(struct pt p) { p.x = 0; return p; }

int main() {
    struct pt p1 = {10};
    p1 = f(p1);
    // Does p1.x change to 0 or remain 10?
}
```

---

### Scenario 6
```c
struct pt { int x, y; };
void f(struct pt p) { p.y = 10; }

int main() {
    struct pt p1 = {5, 20};
    f(p1);
    // Does p1.y become 10 or remain 20?
}
```

---

### Scenario 7
```c
void f(struct pt *p) { p.x = 5; } // Bug!
```
*What operator should be used instead of `.` when parameter `p` is a structure pointer?*

---

### Scenario 8
```c
void f(struct pt p) { p->x = 5; } // Bug!
```
*What operator should be used instead of `->` when parameter `p` is a direct structure object?*

---

### Scenario 9
```c
struct pt { char name[20]; };
void f(struct pt p) { strcpy(p.name, "A"); }

int main() {
    struct pt p1 = {"Original"};
    f(p1);
    // Does p1.name change to "A" or remain "Original"?
}
```

---

### Scenario 10
```c
struct pt { char name[20]; };
void f(struct pt *p) { strcpy(p->name, "A"); }

int main() {
    struct pt p1 = {"Original"};
    f(&p1);
    // Does p1.name change to "A" or remain "Original"?
}
```
