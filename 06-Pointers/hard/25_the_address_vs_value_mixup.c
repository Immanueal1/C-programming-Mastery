/*
=====================================

Question Number: 25

Title: The Address vs Value Mix-up (Debugging Concept)

Difficulty: Hard

Concepts Used: Strict Type Matching

Problem Statement:
Suppose you have an integer x = 5. You accidentally write printf("%d", &x); and printf("%p", x);. Write a program doing exactly this. Compile it, ignore the warnings, run it, and observe the chaos. Write a comment in the code explaining why the output looks like random garbage.

Sample Input:
(No user input)

Sample Output:
(Garbage integer, and 0x5 address)

Constraints:
Understand the deep connection between format specifiers and raw RAM data.

Hints:
- Hint 1: &x is a memory address (a huge number). Printing it as %d forces C to interpret a hexadecimal address as a standard integer.
- Hint 2: x is 5. Printing it as %p forces C to format the number 5 as a memory address (e.g., 0x5 or 00000005).
- Hint 3: Type matching is critical in C because C blindly trusts the programmer.

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
