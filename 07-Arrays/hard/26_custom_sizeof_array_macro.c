/*
=====================================

Question Number: 26

Title: Custom sizeof Array Macro

Difficulty: Hard

Concepts Used: Preprocessor, sizeof() logic

Problem Statement:
Instead of writing sizeof(arr)/sizeof(arr[0]) every time, write a preprocessor macro #define ARRAY_SIZE(arr) ... that automatically calculates the length of a passed array. Use it in main() to print the length.

Sample Input:
(No input)

Sample Output:
Array length is: 7

Constraints:
Understand macro substitution.

Hints:
- Hint 1: Macros literally replace text before compilation.
- Hint 2: #define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))
- Hint 3: Warning: This still won't work inside functions where the array decays to a pointer!

Source:
Chapter 7 Practice Workbook

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
