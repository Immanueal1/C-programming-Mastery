/*
=====================================

Question Number: 29

Title: Swapping Structures in an Array

Difficulty: Hard

Concepts Used: Array of Structures, Complete Struct Assignment

Problem Statement:
You have an array struct player team[2];. team[0] is {10, "Alice"}. team[1] is {20, "Bob"}. Swap the two players completely in the array using a temporary structure variable. Print the updated array.

Sample Input:
(None)

Sample Output:
Index 0: Bob (20)
Index 1: Alice (10)

Constraints:
Do not swap individual members (like score and name). Swap the entire structure at once.

Hints:
- Hint 1: Declare a temporary structure: struct player temp;.
- Hint 2: temp = team[0];
- Hint 3: team[0] = team[1]; team[1] = temp; (This copies all bytes, including the strings, instantly!).

Source:
Chapter 9 Practice Workbook

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
