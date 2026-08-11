# 🐞 Top 10 Debugging Challenges

> Identify the syntax errors, logical bugs, or undefined behaviors in the following C code snippets.

---

### Challenge 1
```c
int add(int a, int b) 
{ 
    a + b; 
}
```
*(Problem: Missing `return` keyword in a non-void function).*

---

### Challenge 2
```c
void show() 
{ 
    printf("Hello"); 
    return 0; 
}
```
*(Problem: Return type mismatch — `void` functions cannot return integer expression `0`).*

---

### Challenge 3
```c
int main() 
{ 
    display(); 
} 

void display() 
{ 
    printf("Hi"); 
}
```
*(Problem: Missing function prototype before `display()` call inside `main()`).*

---

### Challenge 4
```c
int multiply(x, y) 
{ 
    return x * y; 
}
```
*(Problem: Missing data type declarations for parameters `x` and `y` in K&R / ANSI C signature).*

---

### Challenge 5
```c
void update(int a) 
{ 
    a = 10; 
} 

int main() 
{ 
    int x = 5; 
    update(x); 
    printf("%d", x); 
}
```
*(Problem: Developer expected `x` to become 10, but pass-by-value passes a copy, leaving `x` as 5).*

---

### Challenge 6
```c
int fact(int n) 
{ 
    return n * fact(n - 1); 
}
```
*(Problem: Infinite recursion due to missing Base Case).*

---

### Challenge 7
```c
int sum(int a, int b) 
{ 
    return a, b; 
}
```
*(Problem: C functions can return only ONE value; comma operator evaluates to `b` only).*

---

### Challenge 8
```c
void loop(int n) 
{ 
    if (n == 0) return 0; 
    loop(n - 1); 
}
```
*(Problem: `void` function returning an integer value `0`).*

---

### Challenge 9
```c
int calc(int n) 
{ 
    if (n == 0) return 1; 
    else return n * calc(n); 
}
```
*(Problem: Recursive step passes `n` instead of `n - 1`, never approaching the base case).*

---

### Challenge 10
```c
int main() 
{ 
    int x = 5; 
    void f(x); 
}
```
*(Problem: Invalid function call syntax — including return type `void` inside a function call).*
