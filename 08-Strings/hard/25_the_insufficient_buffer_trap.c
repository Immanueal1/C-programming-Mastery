/*
=====================================

Question Number: 25

Title: The Insufficient Buffer Trap

Difficulty: Hard

Concepts Used: Destination Capacity, Buffer Overflow

Problem Statement:
Declare char tiny[3] = "Hi";. Use strcat(tiny, " Programmer");. Compile and run the code. Observe the potential crash or garbage behavior. Explain the memory concept of Buffer Overflow in a printf statement.

Sample Input:
(No input)

Sample Output:
A Buffer Overflow occurs when strcat writes past the end of the allocated array memory.

Constraints:
Observe undefined behavior.

Hints:
- Hint 1: tiny only has 3 bytes of RAM allocated to it ('H', 'i', '\0').
- Hint 2: strcat blindly overwrites memory starting at the '\0'.
- Hint 3: It writes into unallocated RAM, corrupting the stack!

Source:
Chapter 8 Practice Workbook

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
