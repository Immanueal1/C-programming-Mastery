# 🔢 Top 10 `fscanf()` & `fprintf()` Prediction Questions

> Predict stream data directions, formatted string output, cursor progression, address-of `&` bugs, and `stdout` stream targets.

---

### Scenario 1
```c
fscanf(fptr, "%d", &x);
```
*Does `fscanf()` transfer data from RAM to Disk or from Disk (File) to RAM (Program)?*

---

### Scenario 2
```c
fprintf(fptr, "Value: %d", 50);
```
*What exact string is written into the destination file?*

---

### Scenario 3
A file contains `"10 20"`. A program executes `fscanf(fptr, "%d", &x);`. What integer value is stored in `x`?

---

### Scenario 4
A file contains `"10 20"`. A program executes two sequential calls: `fscanf(fptr, "%d", &x);` and `fscanf(fptr, "%d", &y);`. What value is stored in `y`?

---

### Scenario 5
Is `fprintf(fptr, "%c", 'Z');` functionally equivalent to `fputc('Z', fptr);`?

---

### Scenario 6
```c
int x = 5; 
fprintf(fptr, "%d", &x); // Bug!
```
*What logical bug occurs in this `fprintf()` statement?*

---

### Scenario 7
```c
int x; 
fscanf(fptr, "%d", x); // Bug!
```
*What syntax bug occurs in this `fscanf()` call?*

---

### Scenario 8
A file contains `"A B"` (with a space between A and B). A program executes `fscanf(fptr, "%c", &ch1);` followed by `fscanf(fptr, "%c", &ch2);`. What character is stored in `ch2`?

---

### Scenario 9
```c
fprintf(fptr, "Hello\nWorld");
```
*How many total lines of text are written to the destination file?*

---

### Scenario 10
```c
fprintf(stdout, "Hi");
```
*Where does this `fprintf()` statement output its text? (Hint: `stdout` is standard output).*
