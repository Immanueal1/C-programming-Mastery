/*
=====================================

Question Number: 29

Title: Realloc Failure Safety (Conceptual)

Difficulty: Hard

Concepts Used: realloc and NULL

Problem Statement:
If realloc() fails to find enough contiguous memory to expand your block, it returns NULL. If you write ptr = realloc(ptr, HUGE_SIZE);, and it fails, what happens to your original pointer and the data it held?

Sample Input:
(No input)

Sample Output:
(Explanation of the realloc overwrite trap)

Constraints:
Understand why overwriting the original pointer immediately is dangerous.

Hints:
- Hint 1: realloc returns NULL on failure, but the original memory block is not destroyed.
- Hint 2: By writing ptr = realloc(ptr, ...), you overwrite ptr with NULL.
- Hint 3: You lose the address to your original data, causing a memory leak! (Safe practice uses a temporary pointer first).

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
