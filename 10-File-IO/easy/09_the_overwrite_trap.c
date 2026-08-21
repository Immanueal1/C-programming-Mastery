/*
=====================================

Question Number: 09

Title: The Overwrite Trap

Difficulty: Easy

Concepts Used: "w" mode behavior

Problem Statement:
A file notes.txt contains the word "Important". Write a program that opens notes.txt in "w" mode, writes the number 5, and closes the file. Open the file manually afterwards to observe what happened to the word "Important".

Sample Input:
(No input)

Sample Output:
(Inside notes.txt)
5

Constraints:
Observe that "Important" is completely deleted.

Hints:
- Hint 1: The "w" mode stands for Write + Overwrite.
- Hint 2: As soon as fopen() executes with "w", the file is wiped clean.
- Hint 3: Just fopen with "w", fprintf the 5, and fclose.

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
