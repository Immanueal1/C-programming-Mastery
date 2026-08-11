/*
=====================================

Question Number: 27

Title: Recursive Even/Odd Check

Difficulty: Hard

Concepts Used: Mutual Recursion (Conceptual)

Problem Statement:
Write two functions: isEven(int n) and isOdd(int n).
If n == 0, isEven returns 1, isOdd returns 0.
For other numbers, isEven(n) returns isOdd(n-1), and isOdd(n) returns isEven(n-1). Call isEven(4) from main().

Sample Input:
4

Sample Output:
Is 4 Even? 1

Constraints:
Functions must call each other. Use prototypes.

Hints:
- Hint 1: You must prototype both functions at the top so they can "see" each other.
- Hint 2: This is Mutual Recursion.
- Hint 3: isEven(4) -> isOdd(3) -> isEven(2) -> isOdd(1) -> isEven(0) -> returns 1.

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
