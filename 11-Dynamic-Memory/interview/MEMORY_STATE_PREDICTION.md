# 🧠 Top 10 Memory-State Prediction Questions

> Predict the exact conceptual memory state, block byte sizes, initialization contents, and pointer safety outcomes for the following code snippets.

---

### Snippet 1
```c
int *p = (int *) malloc(2 * sizeof(int));
```
*Are the initial values stored inside this allocated block guaranteed to be `0`? Explain why or why not.*

---

### Snippet 2
```c
int *p = (int *) calloc(3, sizeof(int));
```
*What exact values reside inside the 3 element slots immediately after `calloc()` executes?*

---

### Snippet 3
```c
int *p = (int *) calloc(2, sizeof(int)); // Holds: 0, 0
p = (int *) realloc(p, 3 * sizeof(int));
```
*What value is stored in the newly added 3rd integer slot? Is it guaranteed to be `0`?*

---

### Snippet 4
```c
int *p = (int *) calloc(4, sizeof(int)); // Holds: 0, 0, 0, 0
p = (int *) realloc(p, 2 * sizeof(int));
```
*How many `0` values remain in the valid allocated memory block after shrinking?*

---

### Snippet 5
```c
int *p; // Uninitialized local pointer variable
free(p);
```
*What happens when `free()` is called on an uninitialized pointer `p` containing random stack garbage?*

---

### Snippet 6
```c
int *p = (int *) malloc(sizeof(int));
free(p);
free(p); // Executed again!
```
*What fatal memory management error occurs on the second `free(p)` call?*

---

### Snippet 7
```c
int *p = (int *) malloc(100);
```
*How many total bytes of memory were requested from the heap?*

---

### Snippet 8
```c
int *p = (int *) malloc(sizeof(char));
```
*How many bytes of heap memory were allocated? (Hint: `sizeof(char)` is always 1 byte).*

---

### Snippet 9
```c
char *c = (char *) calloc(5, sizeof(char));
```
*What character character-literal mathematically corresponds to the zero-initialized byte value `0`?*

---

### Snippet 10
```c
void *p = malloc(10);
int *ip = (int *) p;
```
*Does typecasting `p` to `(int *)` change the total number of bytes allocated on the heap?*
