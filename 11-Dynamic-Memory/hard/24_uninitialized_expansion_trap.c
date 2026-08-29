/*
=====================================

Question Number: 24

Title: Uninitialized Expansion Trap

Difficulty: Hard

Concepts Used: realloc() initialization behavior

Problem Statement:
ptr = (int *) calloc(3, sizeof(int)); (Values: 0, 0, 0).
ptr = realloc(ptr, 5 * sizeof(int));
Are the 4th and 5th integers guaranteed to be 0? Explain why or why not.

Sample Input:
(No input)

Sample Output:
(Explanation of realloc initialization)

Constraints:
Contrast realloc behavior with calloc.

Hints:
- Hint 1: realloc expands the memory block, but does it clean the new memory?
- Hint 2: No, realloc behaves like malloc for the newly added space.
- Hint 3: The 4th and 5th integers will contain uninitialized garbage values, not zeros.

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
