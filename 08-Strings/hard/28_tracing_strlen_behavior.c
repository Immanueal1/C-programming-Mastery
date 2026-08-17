/*
=====================================

Question Number: 28

Title: Tracing strlen Behavior

Difficulty: Hard

Concepts Used: Custom \0 injection

Problem Statement:
Declare char text[50] = "Computer Science";. Print its length. Then, set text[8] = '\0';. Print the string using %s, and print its length again. Observe how the string functions react.

Sample Input:
(No input)

Sample Output:
Original Length: 16
Modified String: Computer
Modified Length: 8

Constraints:
Modify the array directly.

Hints:
- Hint 1: Index 8 corresponds to the space character.
- Hint 2: Overwriting it with \0 truncates the string.
- Hint 3: All <string.h> functions treat the first \0 as the absolute end of the string.

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
