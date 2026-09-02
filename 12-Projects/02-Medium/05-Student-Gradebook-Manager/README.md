# Student Gradebook Manager

**Difficulty**: Medium  
**Project Type**: Record Management  
**Estimated Time**: 4 - 5 hours  

## Objective
Manage student academic records, calculate weighted GPAs, rank students, and persist data.

## Problem Statement
Create a multi-subject gradebook management system that handles student enrollment, records assignment and exam scores, computes weighted GPAs, ranks class standings, and saves records to a binary data file.

## Why Build This?
Combines struct array modeling, sorting algorithms, multi-file program structure, and binary file persistence into a complete academic record system.

## Concepts Used
- Struct Arrays & Nested Structs
- Sorting Algorithms (Selection/Bubble)
- Binary File I/O (fread, fwrite)
- Multi-file Architecture

## Prerequisites
Chapter 07 (Arrays), Chapter 09 (Structures), Chapter 10 (File I/O).

## Requirements
- **Requirement 1**: Define `struct Student` (id, name, marks[5], gpa, rank).
- **Requirement 2**: Calculate weighted GPA from 5 subject marks.
- **Requirement 3**: Sort student roster by GPA in descending order to assign class ranks.
- **Requirement 4**: Save and load student records from `gradebook.dat` binary file.

## Functional Requirements
- **Input**: Student details, subject marks.
- **Output**: Ranked class summary table, persistent binary data file.
- **Validation**: Validate marks are between 0 and 100. Prevent duplicate student IDs.
- **Edge Cases**: Empty gradebook.
Tied GPAs between students.
Corrupted gradebook.dat binary file.

## Suggested Program Structure
```text
05-Student-Gradebook-Manager/
├── README.md
├── src/
│   ├── main.c
│   ├── gradebook.c
│   └── gradebook.h
└── tests/
    └── test_gradebook.c
```

## Suggested Functions
- `int add_student(const char *name, const float marks[5]);`
- `void calculate_gpas_and_ranks();`
- `int save_gradebook(const char *filename);`
- `int load_gradebook(const char *filename);`

## Data Structures
```c
struct Student { int id; char name[64]; float marks[5]; float gpa; int rank; };
struct Gradebook { struct Student students[100]; int count; };
```

## File Handling
Save and load entire student struct array using binary fread and fwrite.

## Memory Considerations
Static struct array allocation with capacity checking (max 100 students).

## Error Handling
Validate student array bounds and handle binary file read errors.

## Testing Checklist
- [ ] Verify GPA calculation matches weighted mark average.
- [ ] Verify student sorting correctly assigns rank 1 to highest GPA.
- [ ] Verify binary save/load restores student records accurately.

## Expected Learning Outcomes
- Integrating multi-subject data models with sorting algorithms.
- Binary file serialization for C structs.

## Industry Relevance
Demonstrates record management, ranking algorithms, and binary data storage.

## Interview Relevance
Standard data structure and array sorting interview problem.

## Portfolio Value
Well-structured C portfolio project showcasing struct arrays and binary persistence.

## Builds On
- Chapter 09 / Project 01 (student_information_manager) - Adds multi-subject grade weighting, sorting algorithms, and file persistence.

## Hints
- **Hint 1**: Hint 1: Use a simple selection or bubble sort to sort students by GPA before assigning ranks.
- **Hint 2**: Hint 2: Write binary file records directly using fwrite(&gradebook, sizeof(gradebook), 1, fp).
- **Hint 3**: Hint 3: Validate individual subject marks before updating student record.

## Optional Extensions
- Add PDF or HTML report export.
- Add search student by name function.

## Completion Criteria
- Accurately computes GPAs, ranks students correctly, and preserves records across application restarts.
