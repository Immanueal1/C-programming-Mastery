# Matrix Math Library CLI

**Difficulty**: Medium  
**Project Type**: Algorithms & Logic / CLI Tool  
**Estimated Time**: 4 - 5 hours  

## Objective
Build a multi-file matrix mathematics library supporting addition, transpose, multiplication, and file loading.

## Problem Statement
Create a multi-file matrix mathematics library and CLI application supporting matrix creation, transpose, addition, dot-product multiplication, 2x2/3x3 determinants, and loading/saving matrices from text files.

## Why Build This?
Combines 2D array operations, dynamic/static allocation, linear algebra algorithms, multi-file modular design, and file stream matrix loading.

## Concepts Used
- 2D Array Algorithms
- Pointers & Matrix Operations
- Linear Algebra Computation
- File Matrix Loading

## Prerequisites
Chapter 07 (Arrays), Chapter 09 (Structures), Chapter 10 (File I/O).

## Requirements
- **Requirement 1**: Define `struct Matrix` (rows, cols, data[][]).
- **Requirement 2**: Implement matrix_add(), matrix_transpose(), matrix_multiply().
- **Requirement 3**: Implement determinant calculation for 2x2 and 3x3 matrices.
- **Requirement 4**: Load and save matrices from space-separated text files.

## Functional Requirements
- **Input**: Matrix dimensions, matrix elements or file paths.
- **Output**: Result matrix output, determinant scalar, output matrix text file.
- **Validation**: Validate matrix dimension compatibility for addition (same dim) and multiplication (cols A == rows B).
- **Edge Cases**: Incompatible matrix dimensions for multiplication.
Determinant requested for non-square matrix.

## Suggested Program Structure
```text
18-Matrix-Math-Library-CLI/
├── README.md
├── src/
│   ├── main.c
│   ├── matrix.c
│   └── matrix.h
└── tests/
    └── test_matrix.c
```

## Suggested Functions
- `struct Matrix matrix_create(int rows, int cols);`
- `int matrix_add(const struct Matrix *a, const struct Matrix *b, struct Matrix *out);`
- `int matrix_multiply(const struct Matrix *a, const struct Matrix *b, struct Matrix *out);`
- `double matrix_determinant(const struct Matrix *m);`

## Data Structures
```c
struct Matrix { int rows; int cols; double data[10][10]; };
```

## File Handling
Read matrix row by row from file using fscanf or fgets.

## Memory Considerations
Static 2D array bounds checking.

## Error Handling
Return status codes for ERR_DIM_MISMATCH, ERR_NOT_SQUARE.

## Testing Checklist
- [ ] Verify matrix addition adds corresponding elements correctly.
- [ ] Verify matrix multiplication computes correct dot products.
- [ ] Verify matrix transpose swaps rows and columns.

## Expected Learning Outcomes
- Implementing linear algebra algorithms in procedural C.
- Validating mathematical matrix dimension constraints.

## Industry Relevance
Fundamental algorithms used in computer graphics, game physics, robotics, and machine learning libraries.

## Interview Relevance
Matrix multiplication and transpose are classic computer science interview problems.

## Portfolio Value
Solid mathematics library project for GitHub showcase.

## Builds On
- Chapter 07 / Project 02 (matrix_addition_utility) - Adds matrix multiplication, determinant logic, and file matrix stream loading.

## Hints
- **Hint 1**: Hint 1: Matrix multiplication result dimensions are (rowsA x colsB).
- **Hint 2**: Hint 2: Triple nested loops are required for matrix multiplication: i (rowsA), j (colsB), k (colsA).
- **Hint 3**: Hint 3: 2x2 det = a*d - b*c; 3x3 det uses cofactor expansion across row 0.

## Optional Extensions
- Add 4x4 matrix inverse calculation.
- Add dynamic 2D array allocation for arbitrary matrix sizes.

## Completion Criteria
- Correctly computes matrix addition, transpose, multiplication, and determinants while enforcing dimension compatibility.
