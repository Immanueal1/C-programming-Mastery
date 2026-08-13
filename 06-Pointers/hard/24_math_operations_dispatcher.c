/*
=====================================

Question Number: 24

Title: Math Operations Dispatcher

Difficulty: Hard

Concepts Used: Returning multiple conditional values

Problem Statement:
Write a function compute(int a, int b, int *add, int *sub, int *mul, float *div, int *isValid).
Calculate the addition, subtraction, and multiplication, and store them in the pointers. If b != 0, calculate division, store it in div, and set *isValid = 1. If b == 0, set *isValid = 0.
Call this function from main() and conditionally print the division result based on isValid.

Sample Input:
10, 0

Sample Output:
Add: 10, Sub: 10, Mul: 0
Div: Error (Div by Zero)

Constraints:
Handle the division by zero safely using the status pointer.

Hints:
- Hint 1: You are passing 5 memory addresses to this function!
- Hint 2: Always assign *add = a + b, etc.
- Hint 3: Use an if-else block inside the function to manage *div and *isValid.

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
