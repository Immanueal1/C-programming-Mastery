/*
=====================================

Question Number: 14

Title: Data Preservation During Shrink

Difficulty: Medium

Concepts Used: realloc() Shrinking, Data Preservation Rule

Problem Statement:
An allocated block holds the integers 10, 20, 30, 40, 50. You execute ptr = realloc(ptr, 2 * sizeof(int));. What exact values remain available in the newly sized memory block?

Sample Input:
(No input)

Sample Output:
(Remaining values)

Constraints:
Apply the minimum(old size, new size) preservation rule.

Hints:
- Hint 1: Shrinking memory chops off data from the end.
- Hint 2: The new size is 2 integers.
- Hint 3: Only the first two integers (10 and 20) are preserved.

Source:
Chapter 11 Practice Workbook

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
