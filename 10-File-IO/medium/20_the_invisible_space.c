/*
=====================================

Question Number: 20

Title: The Invisible Space

Difficulty: Medium

Concepts Used: fgetc() vs fscanf() behavior

Problem Statement:
A file contains "A B". If you read it using two fscanf(fptr, "%c", &ch) calls, it ignores the space. Write a program using fgetc() to read and print all 3 characters (including the space) to prove fgetc reads everything literally.

Sample Input:
(Inside file.txt)
A B

Sample Output:
Char 1: A
Char 2:  
Char 3: B

Constraints:
Call fgetc three times sequentially.

Hints:
- Hint 1: fgetc does not skip whitespace like formatted reading sometimes does.
- Hint 2: Just assign ch = fgetc(fptr); three times in a row.
- Hint 3: Print each character immediately after fetching it.

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
