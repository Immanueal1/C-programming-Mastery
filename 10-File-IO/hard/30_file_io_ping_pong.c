/*
=====================================

Question Number: 30

Title: File I/O Ping-Pong

Difficulty: Hard

Concepts Used: Memory and File Direction flow

Problem Statement:
Write a program that takes an integer from the user via scanf (Keyboard -> RAM). Writes it to temp.txt using fprintf (RAM -> Disk). Closes the file. Opens it again, reads the integer using fscanf (Disk -> RAM) into a NEW variable. Multiplies that new variable by 2, and prints it to the screen via printf (RAM -> Screen).

Sample Input:
25

Sample Output:
Final result: 50

Constraints:
Must strictly follow the data path described.

Hints:
- Hint 1: You are demonstrating the full life-cycle of persistent data.
- Hint 2: Phase 1: scanf, fopen("w"), fprintf, fclose.
- Hint 3: Phase 2: fopen("r"), fscanf, calculate, printf, fclose.

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
