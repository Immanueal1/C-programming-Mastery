# ⚖️ Top 10 `malloc()` vs `calloc()` Comparison Questions

> Analyze function selection tradeoffs, parameter structures, memory initialization differences, and equivalence expressions.

---

### Scenario 1
You require heap memory for 1,000 integers as fast as possible, and the values will immediately be overwritten by a database query. Which function (`malloc` or `calloc`) is best suited, and why?

---

### Scenario 2
You require an array of 50 integer counters where every element must start at strictly `0`. Which function (`malloc` or `calloc`) is best suited, and why?

---

### Scenario 3
Which function (`malloc` or `calloc`) accepts **exactly 2 parameters**?

---

### Scenario 4
Which function uses the signature syntax: `(type *) function(total_bytes);`?

---

### Scenario 5
Which function uses the signature syntax: `(type *) function(num_items, size_of_item);`?

---

### Scenario 6
If you need space for 5 `float` values, what is the exact single argument expression passed into `malloc()`?

---

### Scenario 7
If you need space for 5 `float` values, what are the exact two argument expressions passed into `calloc()`?

---

### Scenario 8
Does `malloc(10 * sizeof(int))` allocate the exact same total byte count on the heap as `calloc(10, sizeof(int))`?

---

### Scenario 9
If `malloc(10 * sizeof(int))` fails and returns `NULL` due to RAM exhaustion, can `calloc(10, sizeof(int))` succeed for the exact same request?

---

### Scenario 10
Is `calloc(1, 10 * sizeof(int))` syntactically valid in C? Does it allocate the same number of bytes as `malloc(10 * sizeof(int))`?
