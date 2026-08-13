# 🐞 Top 10 Debugging Challenges

> Identify the syntax errors, logical bugs, or undefined behaviors in the following C code snippets.

---

### Challenge 1
```c
int x = 5; 
int *p = x;
```
*(Problem: Type mismatch — assigning an integer value `5` directly to a pointer without the address-of operator `&`).*

---

### Challenge 2
```c
int x = 10; 
int *p = &x; 
printf("%d", p);
```
*(Problem: Incorrect format specifier — `%d` is for integers; memory pointer `p` requires `%p`).*

---

### Challenge 3
```c
int a = 5; 
int *p; 
*p = 10;
```
*(Problem: Wild pointer dereference — `p` is uninitialized, dereferencing it causes undefined behavior or a fatal Segmentation Fault crash).*

---

### Challenge 4
```c
void swap(int a, int b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
}
```
*(Problem: Parameter type error — `a` and `b` are plain `int` variables, not pointers (`int *a, int *b`), making dereferencing `*a` invalid).*

---

### Challenge 5
```c
void update(int *p) { 
    *p = 20; 
} 

int main() { 
    int x = 10; 
    update(x); 
}
```
*(Problem: Forgotten address operator `&` — passing `x` instead of `&x` to a function expecting `int *p`).*

---

### Challenge 6
```c
int a = 5; 
int *p = &a; 
int **pp = p;
```
*(Problem: Double pointer assignment mismatch — `pp` requires the address of `p` (`&p`), not `p`).*

---

### Challenge 7
```c
int x = 10; 
printf("%p", *x);
```
*(Problem: Invalid dereference — `x` is a standard `int`, not a pointer; the `*` operator cannot be applied to non-pointers).*

---

### Challenge 8
```c
void calc(int *sum) 
{ 
    sum = 10; 
}
```
*(Problem: Reassigning pointer address instead of target value — should be `*sum = 10;`).*

---

### Challenge 9
```c
int a = 5; 
int *p = &a; 
*p++;
```
*(Problem: Operator precedence bug — postfix `++` has higher precedence than `*`, incrementing the address `p` instead of the value `*p`. Should be `(*p)++;`).*

---

### Challenge 10
```c
int x = 5; 
int p = &x; 
*p = 10;
```
*(Problem: Variable declaration type bug — `p` is declared as plain `int` instead of `int *`, making `*p` invalid).*
