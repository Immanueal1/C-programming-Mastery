/*
=====================================

Question Number: 22

Title: The Capitalizer

Difficulty: Hard

Concepts Used: fgetc(), ASCII Logic, fputc()

Problem Statement:
Write a program that reads a text file lower.txt character by character. If a character is a lowercase letter ('a' to 'z'), convert it to uppercase. Write the resulting characters to a new file upper.txt.

Sample Input:
(Inside lower.txt)
hello world!

Sample Output:
(Inside upper.txt)
HELLO WORLD!

Constraints:
Use ASCII arithmetic (subtract 32) to convert cases.

Hints:
- Hint 1: Set up an EOF loop reading from the source file.
- Hint 2: Before writing to the destination file, check if (ch >= 'a' && ch <= 'z').
- Hint 3: If true, ch = ch - 32;. Then fputc(ch, fptr_dest);.

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
