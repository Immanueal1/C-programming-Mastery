# 🔮 Top 10 Code Output Prediction Questions

> Predict the exact console output for the following C code snippets. Assume standard `#include <stdio.h>` setup for each exercise.

---

### Snippet 1
```c
int arr[3] = {5}; 
printf("%d %d", arr[0], arr[2]);
```

---

### Snippet 2
```c
int arr[] = {1, 2, 3, 4}; 
printf("%ld", sizeof(arr) / sizeof(int));
```

---

### Snippet 3
```c
int arr[5] = {10, 20, 30}; 
int *p = arr; 
printf("%d", *(p + 1));
```

---

### Snippet 4
```c
int arr[4] = {1, 2, 3, 4}; 
arr[2] = arr[0] + arr[1]; 
printf("%d", arr[2]);
```

---

### Snippet 5
```c
int arr[3] = {10, 20, 30}; 
printf("%d", 2[arr]);
```

---

### Snippet 6
```c
void f(int a[]) { 
    a[0] = 99; 
} 

int main() { 
    int arr[3] = {1}; 
    f(arr); 
    printf("%d", arr[0]); 
    return 0; 
}
```

---

### Snippet 7
```c
int mat[2][2] = {{1, 2}, {3, 4}}; 
printf("%d", mat[0][1] + mat[1][0]);
```

---

### Snippet 8
```c
int arr[5] = {5, 4, 3, 2, 1}; 
int *p1 = &arr[1]; 
int *p2 = &arr[4]; 
printf("%ld", p2 - p1);
```

---

### Snippet 9
```c
int arr[3] = {100, 200, 300}; 
int *p = arr; 
p++; 
printf("%d", *p++);
```

---

### Snippet 10
```c
int mat[2][3] = {1, 2, 3, 4, 5, 6}; 
printf("%d", mat[1][2]);
```
