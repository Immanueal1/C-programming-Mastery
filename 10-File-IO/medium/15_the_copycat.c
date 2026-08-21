/*
=====================================

Question Number: 15

Title: The Copycat

Difficulty: Medium

Concepts Used: Reading and Writing simultaneously, fgetc(), fputc()

Problem Statement:
Write a program that copies the exact contents of source.txt into a new file called destination.txt.

Sample Input:
(Inside source.txt)
Copy me!

Sample Output:
(Inside destination.txt)
Copy me!

Constraints:
You will need TWO file pointers.

Hints:
- Hint 1: Open source.txt in "r" mode and destination.txt in "w" mode.
- Hint 2: Inside your EOF loop, after fgetc() from the source, use fputc() to write that character to the destination.
- Hint 3: ch = fgetc(fptr_src); if(ch == EOF) break; fputc(ch, fptr_dest);

Source:
Chapter 10 Practice Workbook

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
