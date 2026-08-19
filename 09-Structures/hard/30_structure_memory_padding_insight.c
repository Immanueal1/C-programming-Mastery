/*
=====================================

Question Number: 30

Title: Structure Memory Padding Insight (Conceptual Check)

Difficulty: Hard

Concepts Used: sizeof() on Structures

Problem Statement:
Define struct block { char c; int i; };. Conceptually, a char is 1 byte and an int is 4 bytes, totaling 5 bytes. Write a program that prints sizeof(struct block). Notice that the output is likely 8, not 5. Add a comment explaining this phenomenon (called Structure Padding).

Sample Input:
(None)

Sample Output:
Size: 8 bytes

Constraints:
Use sizeof().

Hints:
- Hint 1: The CPU prefers to read memory in even chunks (like 4-byte or 8-byte blocks) for performance.
- Hint 2: After placing the 1-byte char, the compiler inserts 3 "empty/wasted" bytes (padding) so the int can start on a clean 4-byte boundary.
- Hint 3: 1 (char) + 3 (padding) + 4 (int) = 8 bytes.

Source:
Chapter 9 Practice Workbook

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
