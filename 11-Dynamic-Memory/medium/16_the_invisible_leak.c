/*
=====================================

Question Number: 16

Title: The Invisible Leak

Difficulty: Medium

Concepts Used: Memory Leaks

Problem Statement:
Consider the following pseudo-logic: Allocate memory for ptr. Use it. Then assign ptr = NULL;. Did this release the memory? What is this specific problem called?

Sample Input:
(No input)

Sample Output:
(Explanation of the memory leak)

Constraints:
Differentiate between pointer reassignment and memory releasing.

Hints:
- Hint 1: No, setting a pointer to NULL does not free the memory.
- Hint 2: It simply makes you lose the address of the allocated memory, making it impossible to ever free it.
- Hint 3: This causes a permanent Memory Leak until the program terminates.

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
