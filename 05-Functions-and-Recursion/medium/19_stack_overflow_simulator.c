/*
=====================================

Question Number: 19

Title: Stack Overflow Simulator (Conceptual)

Difficulty: Medium

Concepts Used: Infinite Recursion, Stack Overflow

Problem Statement:
Write a recursive function infinite() that calls itself without any base case. Print "Running" inside it. Call it from main(). Run it and observe what happens to your terminal.

Sample Input:
(No input)

Sample Output:
(Program crashes after printing "Running" many times)

Constraints:
Understand that this causes a Segmentation Fault.

Hints:
- Hint 1: void infinite() { printf("Running\n"); infinite(); }
- Hint 2: Every function call takes up memory on the Call Stack.
- Hint 3: Without a base case to stop the calls, the memory exhausts, crashing the program.

Source:
Chapter 5 Practice Workbook

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
