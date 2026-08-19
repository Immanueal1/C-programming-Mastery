/*
=====================================

Question Number: 13

Title: Pass By Address (Modifying Originals)

Difficulty: Medium

Concepts Used: Passing Structure Addresses, Arrow Operator

Problem Statement:
Fix the program from the previous question. Change the function signature to void trueOvercharge(struct gadget *g). Call it from main() by passing the address of g1. Modify the power to 200 inside the function using the proper operator, and print it in main().

Sample Input:
(None)

Sample Output:
Power: 200

Constraints:
Use the arrow operator inside the function.

Hints:
- Hint 1: Call the function using trueOvercharge(&g1);.
- Hint 2: Inside the function, g is now a pointer to the original structure in main.
- Hint 3: Use g->power = 200; to modify the original value.

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
