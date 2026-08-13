/*
=====================================

Question Number: 21

Title: Multi-Level Pointer Tracing

Difficulty: Hard

Concepts Used: Pointer-to-Pointer Chain Tracing

Problem Statement:
Declare x = 5. Point p1 to x. Point p2 to p1 (pointer-to-pointer). Point p3 to p2 (pointer-to-pointer-to-pointer).
Increment x by 1 using x.
Increment x by 1 using p1.
Increment x by 1 using p2.
Increment x by 1 using p3.
Print x.

Sample Input:
(No user input)

Sample Output:
x is: 9

Constraints:
Understand how to stack asterisks based on depth.

Hints:
- Hint 1: p2 is type int **. p3 is type int ***.
- Hint 2: Using p2 requires **p2 += 1.
- Hint 3: Using p3 requires ***p3 += 1.

Source:
Chapter 6 Practice Workbook

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
