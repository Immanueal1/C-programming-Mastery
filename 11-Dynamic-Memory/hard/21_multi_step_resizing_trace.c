/*
=====================================

Question Number: 21

Title: Multi-Step Resizing Trace

Difficulty: Hard

Concepts Used: realloc(), Memory State

Problem Statement:
int *p = (int*) calloc(3, sizeof(int)); (Values are 0, 0, 0).
You assign: 10, 20, 30 to the locations.
p = realloc(p, 5 * sizeof(int));
You assign: 40, 50 to the new locations.
p = realloc(p, 2 * sizeof(int));
What exact values currently reside in the valid allocated memory block?

Sample Input:
(No input)

Sample Output:
(Remaining values)

Constraints:
Trace data preservation through both expansion and shrinking.

Hints:
- Hint 1: Expansion preserves all 3 old values and adds 2 uninitialized slots (which you then filled with 40, 50).
- Hint 2: The block holds 10, 20, 30, 40, 50.
- Hint 3: Shrinking to 2 means only the first two values survive. Result: 10, 20.

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
