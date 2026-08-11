/*
=====================================

Question Number: 28

Title: Shadowing and Pass-by-Value

Difficulty: Hard

Concepts Used: Parameter Scope

Problem Statement:
In main(), declare int a = 5;. Pass it to a function void change(int a). Inside change, declare ANOTHER block { int a = 10; }. Print a inside the block, outside the block but inside the function, and finally back in main().

Sample Input:
(No input)

Sample Output:
Inner block: 10
Function scope: 5
Main scope: 5

Constraints:
Understand variable scope boundaries.

Hints:
- Hint 1: The a inside { int a = 10; } shadows the parameter a.
- Hint 2: Once that block ends, the parameter a (which is 5) is visible again.
- Hint 3: Finally, main()'s a was never touched because of pass-by-value.

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
