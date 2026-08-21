# 📋 Top 10 File Mode & File Content Prediction Questions

> Predict the final file state, file pointer behavior, and text contents on disk based on the initial state and access mode used.

---

### Scenario 1
- **Initial State**: File `a.txt` is empty.
- **Action**: `FILE *f = fopen("a.txt", "w"); fprintf(f, "A"); fclose(f);`
- **Predict**: *What is the final content of `a.txt`?*

---

### Scenario 2
- **Initial State**: File `a.txt` contains `"Hello"`.
- **Action**: `FILE *f = fopen("a.txt", "w"); fprintf(f, "B"); fclose(f);`
- **Predict**: *What is the final content of `a.txt`? (Does `"Hello"` remain?)*

---

### Scenario 3
- **Initial State**: File `a.txt` contains `"Hello"`.
- **Action**: `FILE *f = fopen("a.txt", "a"); fprintf(f, "B"); fclose(f);`
- **Predict**: *What is the final content of `a.txt`?*

---

### Scenario 4
- **Initial State**: File `a.txt` does NOT exist.
- **Action**: `FILE *f = fopen("a.txt", "r");`
- **Predict**: *Is `a.txt` created on disk? What value is assigned to `f`?*

---

### Scenario 5
- **Initial State**: File `a.txt` does NOT exist.
- **Action**: `FILE *f = fopen("a.txt", "a"); fprintf(f, "X"); fclose(f);`
- **Predict**: *Is `a.txt` created on disk? What content does it contain?*

---

### Scenario 6
- **Initial State**: File `a.txt` contains `"123"`.
- **Action**: `FILE *f = fopen("a.txt", "r"); int num; fscanf(f, "%d", &num); fclose(f);`
- **Predict**: *Does reading from `a.txt` modify or delete the contents of `a.txt` on disk?*

---

### Scenario 7
- **Initial State**: File `a.txt` contains `"Data"`.
- **Action**: `FILE *f = fopen("a.txt", "w"); fclose(f);`
- **Predict**: *What is the final state and content of `a.txt` on disk?*

---

### Scenario 8
- **Initial State**: File `a.txt` contains `"Hi"`.
- **Action**: `FILE *f = fopen("a.txt", "wb"); fputc('Z', f); fclose(f);`
- **Predict**: *What happens to `"Hi"` when opening in binary write mode `"wb"`? What is stored?*

---

### Scenario 9
- **Initial State**: File `a.txt` contains `"A"`.
- **Action**: 
  ```c
  FILE *f = fopen("a.txt", "a"); fputc('B', f); fclose(f);
  f = fopen("a.txt", "a"); fputc('C', f); fclose(f);
  ```
- **Predict**: *What is the final text content of `a.txt`?*

---

### Scenario 10
- **Initial State**: File `a.txt` contains `"X"`.
- **Action**: 
  ```c
  FILE *f = fopen("a.txt", "w"); fputc('Y', f); fclose(f);
  f = fopen("a.txt", "w"); fputc('Z', f); fclose(f);
  ```
- **Predict**: *What is the final text content of `a.txt`?*
