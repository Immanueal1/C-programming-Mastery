/*
=====================================

Question Number: 13

Title: Expanding the Capacity

Difficulty: Medium

Concepts Used: realloc() Expansion

Problem Statement:
ptr points to 3 allocated integers. You resize it: ptr = realloc(ptr, 5 * sizeof(int));. Conceptually, how many new uninitialized integer slots have been added to the end of your block?

Sample Input:
(No input)

Sample Output:
(Number of new slots)

Constraints:
Understand that realloc defines the total new size, not the amount to add.

Hints:
- Hint 1: The original size was 3. The new total size is 5.
- Hint 2: It preserves the first 3 and adds the difference.
- Hint 3: 5 total - 3 existing = 2 new slots.

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
