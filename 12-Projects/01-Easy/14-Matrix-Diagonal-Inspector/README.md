# Matrix Diagonal Inspector

**Difficulty**: Easy  
**Objective**: Extract and sum primary and secondary diagonals of a 2D matrix.

## Problem Statement
Develop a matrix analysis tool that takes a 3x3 square integer matrix, extracts elements along the primary diagonal (top-left to bottom-right) and secondary diagonal (top-right to bottom-left), and calculates their sums.

## Concepts Used
- 2D Arrays
- Nested Loops
- Index Mathematics
- Functions

## Requirements
- Input or initialize a 3x3 integer matrix.
- Extract primary diagonal elements (where row == col).
- Extract secondary diagonal elements (where row + col == N - 1).
- Print diagonal elements and compute their respective sums.

## Input / Output
Input: 3x3 integer matrix.
Output: Primary diagonal sum, Secondary diagonal sum.

## Edge Cases
- Matrix with all zero values.
- Matrix with negative integers.
- Center element counting in both diagonals for 3x3.

## Suggested Functions
- `sum_primary_diagonal(int m[3][3])`
- `sum_secondary_diagonal(int m[3][3])`

## Testing Checklist
- Test identity matrix (Primary sum = 3, Secondary sum = 1).
- Test matrix with sequential numbers 1 to 9.
- Test matrix with negative values.

## Learning Outcomes
- 2D array index relationships.
- Algorithmic traversal of matrix structures.

## Builds On
- Chapter 07 / Project 02 (matrix_addition_utility) - Adds diagonal coordinate index inspection.

## Hints
- **Hint 1**: Primary diagonal elements are at m[i][i].
- **Hint 2**: Secondary diagonal elements are at m[i][N - 1 - i].
- **Hint 3**: Use a single for loop from 0 to N-1 to extract diagonal values.

## Completion Criteria
- Accurately computes primary and secondary diagonal sums using 2D array coordinate indexing.
