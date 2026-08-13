/*
=====================================

Question Number: 16

Title: Mutating the Base via **

Difficulty: Medium

Concepts Used: Double Dereferencing Mutation

Problem Statement:
Set up a variable a = 5, a pointer p = &a, and a pointer-to-pointer pp = &p. Without using a or p, change the value of the original integer to 50 using only pp. Print a.

Sample Input:
(No user input)

Sample Output:
Mutated a: 50

Constraints:
Only pp can be used on the left-hand side of the assignment.

Hints:
- Hint 1: pp points to p, and p points to a.
- Hint 2: *pp gives you access to p.
- Hint 3: **pp gives you access to a. Set **pp = 50;.

Source:
Chapter 6 Practice Workbook

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
