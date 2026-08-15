/*
=====================================

Question Number: 22

Title: Array Pointer Decay vs &arr

Difficulty: Hard

Concepts Used: arr vs &arr, Pointer Types

Problem Statement:
Given int arr[5];, both arr and &arr will print the exact same hexadecimal memory address. However, they represent different types. Print the addresses of arr + 1 and &arr + 1. Observe the massive difference in pointer scaling.

Sample Input:
(No input)

Sample Output:
arr + 1: 0x1004 (Base + 4 bytes)
&arr + 1: 0x1014 (Base + 20 bytes)

Constraints:
Understand how pointer scaling maps to types.

Hints:
- Hint 1: arr is a pointer to the first integer. arr + 1 skips 1 integer (4 bytes).
- Hint 2: &arr is a pointer to the entire array of 5 integers.
- Hint 3: &arr + 1 skips the entire array (5 * 4 = 20 bytes).

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
