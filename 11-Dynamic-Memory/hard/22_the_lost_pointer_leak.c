/*
=====================================

Question Number: 22

Title: The Lost Pointer Leak

Difficulty: Hard

Concepts Used: Memory Leaks, Pointer Reassignment

Problem Statement:
int *p = (int *) malloc(10 * sizeof(int));
p = (int *) malloc(20 * sizeof(int));
free(p);
Identify the severe memory management flaw in this sequence and explain conceptually what happened to the RAM.

Sample Input:
(No input)

Sample Output:
(Explanation of the memory leak)

Constraints:
Focus on the first allocation.

Hints:
- Hint 1: You allocated memory twice but only called free() once.
- Hint 2: When p is reassigned to the second block, the address of the first block is lost forever.
- Hint 3: The first 10 integers are leaked. free(p) only releases the 20-integer block.

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
