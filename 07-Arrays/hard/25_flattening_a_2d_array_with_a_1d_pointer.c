/*
=====================================

Question Number: 25

Title: Flattening a 2D Array with a 1D Pointer

Difficulty: Hard

Concepts Used: Row-Major Memory, Pointers

Problem Statement:
Declare a 2D array int mat[2][3] = {{1,2,3}, {4,5,6}};. Create a standard 1D integer pointer int *ptr = &mat[0][0];. Traverse the entire 2D matrix using a single for loop from 0 to 5, printing the values via ptr[i].

Sample Input:
(No input)

Sample Output:
1 2 3 4 5 6

Constraints:
Understand that 2D arrays are an illusion in C; memory is fundamentally 1D.

Hints:
- Hint 1: Memory is allocated contiguously for 2D arrays.
- Hint 2: A 1D pointer pointing to the base address can walk linearly through all rows.
- Hint 3: Just loop 6 times: printf("%d ", *(ptr + i));

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
