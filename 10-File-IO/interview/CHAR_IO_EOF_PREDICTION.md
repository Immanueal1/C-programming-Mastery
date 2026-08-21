# 🔤 Top 10 Character I/O & EOF Prediction Questions

> Evaluate character stream reading (`fgetc()`), character writing (`fputc()`), pre-break `printf()` output traps, empty file behavior, and `EOF` macro type requirements.

---

### Scenario 1
A file contains `"AB"`. A program calls `fgetc(fptr)` three sequential times. What exact values are returned by the 1st, 2nd, and 3rd calls?

---

### Scenario 2
A file contains `"123"`. A program runs a standard `while(1)` EOF loop. How many times does the check `if (ch == EOF)` evaluate to FALSE?

---

### Scenario 3
```c
while (1) {
    ch = fgetc(f);
    if (ch == EOF) 
        break;
    printf("%c", ch);
}
```
*Assuming file `f` contains `"Hi"`, what exact string prints to the console?*

---

### Scenario 4
```c
while (1) {
    ch = fgetc(f);
    printf("%c", ch); // Bug: Print before EOF check!
    if (ch == EOF) 
        break;
}
```
*Assuming file `f` contains `"Hi"`, what prints to the console? (Hint: Notice the `printf` executes before the `break`!).*

---

### Scenario 5
An empty file `empty.txt` (0 bytes) is opened. The standard EOF loop runs. Does the console print any character?

---

### Scenario 6
A file contains `"A B"` (with a space between A and B). How many total characters are read by `fgetc()` before reaching `EOF`?

---

### Scenario 7
```c
fputc('A', f);
fputc('B', f);
```
*What exact character sequence is written into destination file `f`?*

---

### Scenario 8
```c
char ch = fgetc(f); // f is an empty file
```
*What numerical value is assigned to `ch` upon executing `fgetc()` on an empty file?*

---

### Scenario 9
A file contains a single newline character `\n`. Does `fgetc()` read `\n` as a valid character or treat it as `EOF`?

---

### Scenario 10
Why must the variable capturing `fgetc()` (e.g., `int ch;`) be capable of storing integer values, and why is `EOF` commonly defined as `-1`?
