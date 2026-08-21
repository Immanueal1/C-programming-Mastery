/*
=====================================

Question Number: 25

Title: The Overwrite Proof

Difficulty: Hard

Concepts Used: "w" vs "a" mode mechanics

Problem Statement:
Write a program that strictly demonstrates the danger of "w" mode.
1. Open test.txt in "w" mode, write "First", and close.
2. Open test.txt in "w" mode again, write "Second", and close.
3. Open test.txt in "r" mode, read all characters, and print them to the screen.
The output should just be "Second".

Sample Input:
(No input)

Sample Output:
Second

Constraints:
Follow the exact 3-step sequence.

Hints:
- Hint 1: You will fopen and fclose the same file three times.
- Hint 2: The second fopen in "w" mode will instantly delete the "First" text.
- Hint 3: The third step is your standard EOF reading loop.

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
