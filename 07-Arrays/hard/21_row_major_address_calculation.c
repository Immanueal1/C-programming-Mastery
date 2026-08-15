/*
=====================================

Question Number: 21

Title: Row-Major Address Calculation

Difficulty: Hard

Concepts Used: 2D Array Memory Mapping

Problem Statement:
You have a 2D array int mat[3][4]. The base address (&mat[0][0]) is 1000. Assuming sizeof(int) is 4 bytes, calculate purely via mathematics the memory address of mat[2][1]. Write a C program to simulate and verify this calculation.

Sample Input:
(No input)

Sample Output:
Theoretical Address Offset: 36 bytes
Verified via C pointers.

Constraints:
Understand row-major layout.

Hints:
- Hint 1: Formula: Base + (row * total_cols + col) * sizeof(type).
- Hint 2: For mat[2][1], we skip 2 full rows (2 * 4 = 8 elements) and 1 column (1 element) = 9 elements total.
- Hint 3: 9 elements * 4 bytes = 36 bytes offset from base address.

Source:
Chapter 7 Practice Workbook

Author:
Immanueal

Repository:
C-Programming-Mastery

=====================================
*/

#include <stdio.h>

int main()
{
    // =====================================
    // TODO:
    // Solve this problem yourself.
    // =====================================

    return 0;
}
