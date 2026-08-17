/*
=====================================

Question Number: 24

Title: Array vs Pointer Mutability Trace

Difficulty: Hard

Concepts Used: char * vs char [] memory locations

Problem Statement:
Conceptually trace this: char arr[] = "Test"; char *ptr = "Test";. You attempt arr[0] = 'B'; and ptr[0] = 'B';. Which one causes a runtime crash (Segmentation Fault) and why? Write a program that only executes the safe one, and prints an explanation for the unsafe one.

Sample Input:
(No input)

Sample Output:
Array updated: Best
Pointer update would crash because string literals are stored in read-only memory.

Constraints:
Understand memory zones.

Hints:
- Hint 1: arr[] allocates its own memory in RAM and copies "Test" into it. It is entirely mutable.
- Hint 2: *ptr points directly to the hardcoded string literal "Test" inside the Read-Only Data Segment of the program.
- Hint 3: You cannot modify read-only memory.

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
