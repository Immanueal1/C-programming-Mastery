/*
=====================================

Question Number: 26

Title: Pre-Call vs Post-Call Recursion

Difficulty: Hard

Concepts Used: Stack Winding and Unwinding

Problem Statement:
Write a recursive function mystery(int n). First, call mystery(n-1). THEN, print n. If n==0, return. Call mystery(3) from main(). Observe how it prints in reverse!

Sample Input:
(No input)

Sample Output:
1
2
3

Constraints:
The printf MUST be after the recursive call.

Hints:
- Hint 1: This is called "Head Recursion" or stack unwinding.
- Hint 2: The print statements are deferred (paused) until the base case is reached.
- Hint 3: As the functions return from the base case, they resume and print from the bottom up (1, then 2, then 3).

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
