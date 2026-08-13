/*
=====================================

Question Number: 12

Title: The Failed Swap Illusion

Difficulty: Medium

Concepts Used: Call by Value Limitation

Problem Statement:
Write a function fakeSwap(int a, int b) that attempts to swap two numbers using pass-by-value. Print the variables inside the function after swapping, and then print them in main().

Sample Input:
x = 5, y = 9

Sample Output:
Inside function: a = 9, b = 5
Inside main: x = 5, y = 9

Constraints:
Demonstrate why this logic fails.

Hints:
- Hint 1: In fakeSwap, standard swap logic (temp = a; a = b; b = temp;) will work for the local copies.
- Hint 2: The original x and y in main() are never touched because no addresses were passed.
- Hint 3: This proves why pointers are mandatory for swapping variables across functions.

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
