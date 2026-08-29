/*
=====================================

Question Number: 28

Title: Null Check Positioning

Difficulty: Hard

Concepts Used: NULL checking workflow

Problem Statement:
A programmer writes:
int *p = (int *) malloc(500000000000 * sizeof(int));
/* Assume allocation fails */
free(p);
if (p == NULL) { exit(1); }
Identify the catastrophic workflow error in this sequence.

Sample Input:
(No input)

Sample Output:
(Explanation of workflow failure)

Constraints:
Understand execution order.

Hints:
- Hint 1: Look at where the NULL check is located.
- Hint 2: They attempt to free(p) before checking if the allocation succeeded.
- Hint 3: Passing a NULL pointer to free() or attempting to use it before checking it will cause the program to behave unpredictably or crash. The check must happen immediately after allocation.

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
