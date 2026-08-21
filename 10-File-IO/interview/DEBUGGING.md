# 🐞 Top 10 Debugging Challenges

> Identify the syntax errors, logical bugs, parameter mismatches, or missing safety checks in the following C File I/O code snippets.

---

### Challenge 1
```c
FILE fptr = fopen("data.txt", "r");
```
*(Problem: Missing pointer asterisk — `FILE` is a structure type; declare as a file pointer `FILE *fptr`).*

---

### Challenge 2
```c
fptr = fopen(data.txt, "w");
```
*(Problem: Missing double quotes around filename — string literal required `"data.txt"`).*

---

### Challenge 3
```c
fptr = fopen("data.txt", r);
```
*(Problem: Missing double quotes around mode parameter — mode string required `"r"`).*

---

### Challenge 4
```c
fprintf("%d", 10, fptr);
```
*(Problem: Inverted argument order — `fprintf` requires the file pointer as its first argument: `fprintf(fptr, "%d", 10)`).*

---

### Challenge 5
```c
fscanf(fptr, "%d", num);
```
*(Problem: Missing Address-of operator `&` — `fscanf` requires a pointer destination: `fscanf(fptr, "%d", &num)`).*

---

### Challenge 6
```c
fptr = fopen("missing.txt", "r"); 
fscanf(fptr, "%d", &num);
```
*(Problem: Missing `NULL` safety guard — if `missing.txt` is absent, `fptr` is `NULL`, causing `fscanf` to crash with a segmentation fault).*

---

### Challenge 7
```c
while (1) {
    ch = fgetc(fptr);
    printf("%c", ch);
    if (ch == EOF) 
        break;
}
```
*(Problem: Pre-break printing logic bug — `printf()` executes before the `EOF` check, printing a garbage character when `EOF` is reached).*

---

### Challenge 8
```c
fptr = fopen("data.txt", "w"); 
fputc(fptr, 'A');
```
*(Problem: Inverted `fputc()` argument order — `fputc` signature is `fputc(character, file_pointer)`; write `fputc('A', fptr)`).*

---

### Challenge 9
```c
fclose();
```
*(Problem: Missing file pointer parameter — `fclose` requires the target stream pointer: `fclose(fptr)`).*

---

### Challenge 10
```c
fptr = fopen("data.txt", "a"); 
fscanf(fptr, "%d", &n);
```
*(Problem: Mode conflict — `"a"` (Append mode) is strictly for writing output to the end of a file; use `"r"` mode for reading input with `fscanf()`).*
