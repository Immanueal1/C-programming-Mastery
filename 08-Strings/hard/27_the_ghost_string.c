/*
=====================================

Question Number: 27

Title: The Ghost String (Memory Alignment)

Difficulty: Hard

Concepts Used: Missing \0 consequence

Problem Statement:
Declare char broken[3] = {'B', 'u', 'g'}; (Notice the lack of \0). Print it using %s. Note that it prints "Bug" followed by garbage characters. Write a program to demonstrate this, and then fix it in a separate array fixed[4] = {'F', 'i', 'x', '\0'}; and print that.

Sample Input:
(No input)

Sample Output:
Broken: Bug@#$^% (Garbage varies)
Fixed: Fix

Constraints:
Trace exactly how %s works.

Hints:
- Hint 1: %s keeps printing characters in RAM until it hits a byte containing 0 (\0).
- Hint 2: If you don't provide \0, it reads adjacent memory blocks containing random garbage data.
- Hint 3: Always ensure arrays are large enough to hold the Null Character.

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
