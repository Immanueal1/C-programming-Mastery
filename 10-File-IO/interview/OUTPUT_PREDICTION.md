# 🔮 Top 10 Output & File Behavior Prediction Questions

> Predict the exact console output and final disk file contents for the following C File I/O code snippets. Assume standard `#include <stdio.h>` setup for each exercise.

---

### Snippet 1
```c
FILE *f = fopen("new.txt", "w"); 
fprintf(f, "123"); 
fclose(f);
```
*What file is created on disk, and what exact content does it contain?*

---

### Snippet 2
```c
FILE *f = fopen("missing.txt", "r"); 
if (f == NULL) 
    printf("X"); 
else 
    printf("Y");
```
*Assuming `missing.txt` does NOT exist on disk, what character prints to the console?*

---

### Snippet 3
```c
FILE *f = fopen("log.txt", "a"); 
fprintf(f, "A"); 
fclose(f);
```
*If this exact program is executed twice in sequence, what exact text does `log.txt` contain?*

---

### Snippet 4
```c
FILE *f = fopen("data.txt", "w"); 
fputc('A', f); 
fputc('B', f); 
fclose(f);
```
*What exact characters are stored in `data.txt`?*

---

### Snippet 5
```c
FILE *f = fopen("num.txt", "w"); 
fprintf(f, "%d", 10 + 20); 
fclose(f);
```
*What exact string is written into `num.txt`: `"10+20"` or `"30"`?*

---

### Snippet 6
```c
int x; 
FILE *f = fopen("val.txt", "r"); 
fscanf(f, "%d", &x); 
printf("%d", x * 2);
```
*Assuming `val.txt` contains `5`, what integer prints to the console screen?*

---

### Snippet 7
```c
FILE *f = fopen("file.txt", "w"); 
fprintf(f, "Hello"); 
fclose(f); 
f = fopen("file.txt", "w"); 
fprintf(f, "Hi"); 
fclose(f);
```
*What is the final text content of `file.txt` after both blocks execute?*

---

### Snippet 8
```c
char c; 
FILE *f = fopen("abc.txt", "r"); 
c = fgetc(f); 
printf("%c", c);
```
*Assuming `abc.txt` contains `"XYZ"`, what single character prints to the console screen?*

---

### Snippet 9
```c
FILE *f = fopen("bin.dat", "wb"); 
if (f != NULL) 
    printf("Success");
```
*What prints to the console? Is `bin.dat` created on disk in binary write mode?*

---

### Snippet 10
```c
FILE *f = fopen("data.txt", "w"); 
fclose(f);
```
*Does this code alter the file system? What is created on disk?*
