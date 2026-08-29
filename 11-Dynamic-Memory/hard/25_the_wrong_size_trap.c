/*
=====================================

Question Number: 25

Title: The Wrong Size Trap

Difficulty: Hard

Concepts Used: sizeof() logic errors

Problem Statement:
A programmer wants memory for 10 double-precision floats (double). They write: double *d = (double *) malloc(10);. Conceptually, if sizeof(double) is 8 bytes, how many complete doubles can actually fit in this allocated memory?

Sample Input:
(No input)

Sample Output:
(Number of doubles)

Constraints:
Show the mathematical flaw.

Hints:
- Hint 1: The programmer requested exactly 10 bytes total.
- Hint 2: One double requires 8 bytes.
- Hint 3: Only 1 complete double fits (using 8 bytes), leaving 2 wasted bytes. It crashes if they try to access the 2nd double.

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
