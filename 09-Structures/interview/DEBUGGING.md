# 🐞 Top 10 Debugging Challenges

> Identify the syntax errors, logical bugs, type mismatches, or operator misuse in the following C code snippets.

---

### Challenge 1
```c
struct A { int x; }
```
*(Problem: Missing mandatory semicolon `;` after the closing brace `}` of the structure definition).*

---

### Challenge 2
```c
struct B { int x; }; 
B b1;
```
*(Problem: Missing `struct` keyword — `B` alone is not a valid type name without `typedef`; declare using `struct B b1;`).*

---

### Challenge 3
```c
typedef struct C { int x; }; 
C c1;
```
*(Problem: Missing `typedef` alias name before the semicolon — syntax requires `typedef struct C { int x; } AliasName;`).*

---

### Challenge 4
```c
struct D { char name[20]; }; 
struct D d1; 
d1.name = "John";
```
*(Problem: Invalid array assignment via `=` — character array members are non-modifiable lvalues; use `strcpy(d1.name, "John")`).*

---

### Challenge 5
```c
struct E { int x; }; 
struct E e1 = {1}; 
struct E *p = &e1; 
*p.x = 2;
```
*(Problem: Missing precedence parentheses — `*p.x` is evaluated as `*(p.x)` because `.` has higher precedence than `*`; write `(*p).x = 2` or `p->x = 2`).*

---

### Challenge 6
```c
struct F { int x; }; 
struct F f1 = {1}; 
f1->x = 2;
```
*(Problem: Operator mismatch on direct object — `f1` is a direct structure variable, not a pointer; use the Dot operator `f1.x = 2`).*

---

### Challenge 7
```c
struct G { int x; }; 
struct G g1 = {1}; 
struct G *p = &g1; 
p.x = 2;
```
*(Problem: Operator mismatch on pointer variable — `p` is a structure pointer; use the Arrow operator `p->x = 2` or dereference `(*p).x = 2`).*

---

### Challenge 8
```c
struct H { int x; }; 
void modify(struct H h) { h.x = 2; } 
int main() { 
    struct H h1 = {1}; 
    modify(h1); 
}
```
*(Problem: Logic bug in caller mutation — structures are passed by value by default, so `modify` alters a local stack copy; pass address `modify(&h1)` with parameter `struct H *h`).*

---

### Challenge 9
```c
struct I { int arr[3]; }; 
struct I i1; 
i1.arr = {1, 2, 3};
```
*(Problem: Invalid array member aggregate assignment after declaration — curly-brace list initialization `{1, 2, 3}` is valid only at declaration time; assign elements individually `i1.arr[0] = 1;`).*

---

### Challenge 10
```c
struct J { int x; int y; }; 
struct J j1 = {1, 2, 3};
```
*(Problem: Too many positional initializers — `struct J` contains only 2 members (`x`, `y`), but 3 initializers are provided).*
