/*
=====================================

Question Number: 19

Title: Formatted Data Merger

Difficulty: Medium

Concepts Used: Multiple fscanf(), fprintf()

Problem Statement:
A file prices.txt contains two integers: 150 and 250. Write a program that reads both integers, calculates their sum, and appends the sum to the end of the same file.

Sample Input:
(Inside prices.txt)
150 250

Sample Output:
(Inside prices.txt after running)
150 250 400

Constraints:
You must open the file in "r" mode, read the data, close it, and then reopen it in "a" mode.

Hints:
- Hint 1: You cannot easily read and append simultaneously with basic modes. Do it in two phases.
- Hint 2: Phase 1: fopen with "r", fscanf twice, fclose.
- Hint 3: Phase 2: fopen with "a", fprintf the sum, fclose.

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
