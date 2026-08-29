# 🔄 Top 10 `realloc()` Resizing Prediction Questions

> Predict dynamic memory block expansion, shrinking, data preservation rules, special argument cases, and address relocation behavior.

---

### Scenario 1
A pointer `ptr` references a block of 3 integers. You execute `ptr = realloc(ptr, 6 * sizeof(int));`. Did the memory allocation expand or shrink?

---

### Scenario 2
A pointer `ptr` references a block of 10 integers. You execute `ptr = realloc(ptr, 4 * sizeof(int));`. Did the memory allocation expand or shrink?

---

### Scenario 3
Original dynamic memory contents: `1, 2, 3`. The block is resized to hold 5 integers using `realloc()`. What exact values reside in the first 3 element slots?

---

### Scenario 4
Original dynamic memory contents: `5, 4, 3, 2, 1`. The block is resized to hold 2 integers using `realloc()`. What exact values remain available in the valid block?

---

### Scenario 5
What is the first argument passed into `realloc(ptr, new_size)`?

---

### Scenario 6
Does the second parameter of `realloc(ptr, size)` represent the additional memory to add, or the **new total byte size** of the entire allocation block?

---

### Scenario 7
`ptr = realloc(ptr, 0);` — What standard DMA function behavior does passing a new size of `0` to `realloc()` mimic?

---

### Scenario 8
`ptr = realloc(NULL, 5 * sizeof(int));` — What standard DMA function behavior does passing a `NULL` original pointer to `realloc()` mimic?

---

### Scenario 9
If `realloc()` expands a block from 3 integers to 6 integers, are the newly created 4th, 5th, and 6th slots zero-initialized or uninitialized garbage?

---

### Scenario 10
If physical memory contiguous space behind `ptr` is occupied and `realloc()` must relocate the data block to a new RAM location, what value does `realloc()` return?
