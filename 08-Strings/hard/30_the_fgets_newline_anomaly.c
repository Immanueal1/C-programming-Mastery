/*
=====================================

Question Number: 30

Title: The fgets Newline Anomaly (Conceptual Test)

Difficulty: Hard

Concepts Used: fgets internal behavior

Problem Statement:
When you use fgets(str, 100, stdin); and type "Hi", then press Enter, fgets often captures the Enter key as a newline character ('\n'). Write a program that reads input with fgets and prints its strlen(). Notice that "Hi" outputs length 3, not 2.

Sample Input:
Hi

Sample Output:
Length: 3

Constraints:
Understand stream reading.

Hints:
- Hint 1: The input stream receives 'H', 'i', and '\n' (the Enter key).
- Hint 2: fgets reads the newline and stores it right before the \0.
- Hint 3: The string looks like: {'H', 'i', '\n', '\0'}.

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
