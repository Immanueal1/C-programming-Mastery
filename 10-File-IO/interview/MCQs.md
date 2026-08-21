# 📝 Top 10 Multiple Choice Questions (MCQs)

> Test your technical understanding of C File I/O libraries, file access modes, pointer safety, stream directions, and character/formatted I/O.

---

### Question 1
Which standard C header library is required to use `fopen()` and `fclose()`?
- A) `<stdlib.h>`
- B) `<file.h>`
- C) `<stdio.h>`
- D) `<io.h>`

---

### Question 2
What happens when you open an existing file in `"w"` (write) mode?
- A) New data is appended to the end of the file.
- B) The existing file contents are safely preserved.
- C) The existing data is completely erased (overwritten).
- D) `fopen()` returns `NULL`.

---

### Question 3
What does `fopen()` return if it fails to open a missing file in `"r"` mode?
- A) `0`
- B) `-1`
- C) `EOF`
- D) `NULL`

---

### Question 4
Which file access mode should be used to add new data to the end of an existing text file without deleting old contents?
- A) `"w"`
- B) `"r+"`
- C) `"a"`
- D) `"e"`

---

### Question 5
What is the correct syntax to close an opened file stream?
- A) `file.close();`
- B) `fclose(fptr);`
- C) `close(fptr);`
- D) `stop(fptr);`

---

### Question 6
Which function reads a single character from an opened file stream?
- A) `fgetc()`
- B) `fputc()`
- C) `fscanf()`
- D) `getchar()`

---

### Question 7
In the context of C File I/O, what does `EOF` stand for?
- A) End Of Format
- B) Execute On File
- C) End Of File
- D) Error On Fetch

---

### Question 8
Why are standard program variables (like `int age`) considered volatile in C?
- A) They change values frequently during loop iterations.
- B) They are stored in volatile RAM and disappear when the program terminates.
- C) They are stored permanently on the physical hard disk.
- D) They cannot be written to files.

---

### Question 9
`fscanf(fptr, "%d", &num);` moves data from:
- A) RAM ──► Hard Disk
- B) Keyboard ──► RAM
- C) Hard Disk (File) ──► RAM (Program Variable)
- D) Screen ──► File

---

### Question 10
What is a binary file in C programming?
- A) A text file containing only the characters '0' and '1' typed out.
- B) A human-readable text file editable in standard text editors.
- C) A file containing raw machine data processed natively by computer systems (e.g., `.jpg`, `.exe`).
- D) A file type that cannot be opened by `fopen()`.
