# 📌 Top 10 File Pointer & `fopen()` Prediction Questions

> Predict pointer values (`NULL` vs valid handle), execution safety, file creation rules, and uninitialized pointer behavior.

---

### Scenario 1
```c
FILE *fptr = fopen("missing_file.txt", "r");
```
*Assuming `missing_file.txt` is absent from disk, what value is assigned to `fptr`?*

---

### Scenario 2
```c
FILE *fptr = fopen("missing_file.txt", "w");
```
*Assuming `missing_file.txt` is absent from disk, does `fopen()` return `NULL` or a valid pointer handle?*

---

### Scenario 3
```c
FILE *fptr = fopen("existing_file.txt", "r");
```
*Assuming `existing_file.txt` exists and is readable, what does `fopen()` return?*

---

### Scenario 4
```c
FILE *fptr = fopen("existing_file.txt", "a");
```
*Assuming `existing_file.txt` exists, does `fopen()` preserve existing contents or erase them?*

---

### Scenario 5
```c
FILE *fptr; 
fclose(fptr);
```
*What happens when `fclose()` is called on an uninitialized file pointer `fptr` containing random stack garbage?*

---

### Scenario 6
```c
FILE *fptr = fopen("data.txt", "wb");
```
*Does `"wb"` open `data.txt` in human-readable text mode or raw binary mode?*

---

### Scenario 7
```c
FILE *fptr = NULL; 
if (fptr == NULL) { 
    printf("Handled"); 
}
```
*Does the `if` block condition evaluate to true and print `"Handled"`?*

---

### Scenario 8
```c
FILE *fptr = fopen("missing.txt", "r"); 
int num; 
fscanf(fptr, "%d", &num);
```
*Assuming `missing.txt` does NOT exist and `fptr` becomes `NULL`, what happens when `fscanf()` attempts to dereference `fptr`?*

---

### Scenario 9
```c
FILE *fptr = fopen("new.txt", "a");
```
*If `new.txt` is missing from disk, does `fopen()` in append mode `"a"` return `NULL` or create a new file?*

---

### Scenario 10
```c
FILE *fptr = fopen("data.txt", "w"); 
fprintf(fptr, "Hello"); 
// Missing fclose(fptr);
```
*Is `fclose(fptr)` mandatory to guarantee that cached RAM stream buffers are flushed to physical disk storage before program termination?*
