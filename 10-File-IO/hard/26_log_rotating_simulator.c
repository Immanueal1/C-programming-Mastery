/*
=====================================

Question Number: 26

Title: Log Rotating Simulator

Difficulty: Hard

Concepts Used: Mixed Modes, State Management

Problem Statement:
Simulate a log file.
1. Open log.txt in "w" mode to start fresh and write "Session 1\n". Close it.
2. Open it in "a" mode, append "Session 2\n", and close it.
3. Open it in "r" mode and print the entire file to the console.

Sample Input:
(No input)

Sample Output:
Session 1
Session 2

Constraints:
Use fprintf for the writing and appending phases.

Hints:
- Hint 1: This proves how appending preserves the old data.
- Hint 2: Use three distinct Open -> Work -> Close blocks.
- Hint 3: The read phase uses the while(1) EOF loop with fgetc.

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
