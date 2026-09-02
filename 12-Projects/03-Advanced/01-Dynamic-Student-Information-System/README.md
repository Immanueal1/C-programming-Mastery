# Dynamic Student Information System

**Difficulty**: Advanced  
**Project Type**: Record Management / Mini Database  
**Estimated Time**: 6 - 8 hours  

## Objective
Build a dynamic student database with dynamic array growth, binary persistence, and CSV exports.

## Problem Statement
Construct a full-featured student database system using dynamic memory allocation (`realloc` dynamic growth), multi-field sorting, filtering, binary file persistence (`fread`/`fwrite`), and CSV exporting.

## Why Build This?
Combines dynamic memory management, binary serialization, array sorting, and multi-file architecture into an expandable record database system.

## Concepts Used
- Dynamic Memory Resizing (realloc)
- Binary Serialization (fread/fwrite)
- Array Sorting & Searching
- Multi-file C Architecture

## Prerequisites
Chapter 09 (Structures), Chapter 10 (File I/O), Chapter 11 (Dynamic Memory).

## Requirements
- **Requirement 1**: Dynamically allocate and expand student array using realloc when capacity is reached.
- **Requirement 2**: Implement multi-field searching (by ID, Name, Grade Range).
- **Requirement 3**: Implement binary file serialization and deserialization (`students.bin`).
- **Requirement 4**: Export filtered dataset to CSV report.

## Functional Requirements
- **Input**: Student records, search queries, file paths.
- **Output**: Dynamic roster queries, binary data file, exported CSV report.
- **Validation**: Check realloc pointer allocation success. Prevent duplicate IDs.
- **Edge Cases**: Heap allocation failure.
Corrupted binary file loading.
Deleting records (array compaction).

## Suggested Program Structure
```text
01-Dynamic-Student-Information-System/
├── README.md
├── src/
│   ├── main.c
│   ├── student_db.c
│   └── student_db.h
└── tests/
    └── test_student_db.c
```

## Suggested Functions
- `int db_init(size_t initial_capacity);`
- `int db_add_student(const char *name, float gpa);`
- `int db_save_binary(const char *filename);`
- `int db_export_csv(const char *filename);`
- `void db_free();`

## Data Structures
```c
struct Student { int id; char name[64]; float gpa; };
struct StudentDB { struct Student *records; size_t count; size_t capacity; };
```

## File Handling
Read/write binary files with fread/fwrite and write CSV files with fprintf.

## Memory Considerations
Dynamic array expansion (`realloc`), element deletion compaction, explicit `free()` memory cleanup.

## Error Handling
Return error codes for memory allocation failure and file read errors.

## Testing Checklist
- [ ] Verify dynamic array doubles capacity when initial limit is exceeded.
- [ ] Verify binary save and load restores student records accurately.
- [ ] Verify db_free deallocates heap array without leaks.

## Expected Learning Outcomes
- Dynamic array capacity scaling in procedural C.
- Binary data serialization and file exporting.

## Industry Relevance
Demonstrates core database record management and dynamic heap storage techniques.

## Interview Relevance
Classic technical interview topic covering realloc dynamic arrays and binary I/O.

## Portfolio Value
High value portfolio project demonstrating advanced C data structures and dynamic memory.

## Builds On
- Chapter 12 / Medium Project 05 (Student-Gradebook-Manager) - Adds dynamic heap array expansion/compaction, binary I/O, and CSV export engine.

## Hints
- **Hint 1**: Hint 1: Use temp = realloc(db->records, new_cap * sizeof(struct Student)) to expand safely.
- **Hint 2**: Hint 2: Store record count at the beginning of binary file for easy deserialization.
- **Hint 3**: Hint 3: Shift array elements left when deleting a record to keep data contiguous.

## Optional Extensions
- Add multi-field indexing.
- Add interactive CLI search shell.

## Completion Criteria
- Dynamically scales heap array, saves/loads binary database state, and frees memory without leaks.
