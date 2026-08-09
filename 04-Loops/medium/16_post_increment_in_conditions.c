/*
=====================================

Question Number: 16

Title: Post-Increment in Conditions

Difficulty: Medium

Concepts Used: Post-Increment in while() Condition

Problem Statement:
Write a program that initializes int i = 0;. Use the condition while(i++ < 3). Inside the loop, print the value of i. Observe carefully what gets printed and figure out why.

Sample Input:
(None)

Sample Output:
Inside loop: 1
Inside loop: 2
Inside loop: 3

Constraints:
No manual updation inside the loop body. The updation is in the condition itself.

Hints:
- Hint 1: i++ evaluates the condition using the old value of i, but increments i immediately after checking.
- Hint 2: On the first check, it checks 0 < 3 (True), then i becomes 1. So inside the loop, 1 is printed.
- Hint 3: Trace this step-by-step up to 3.

Source:
Chapter 4 Practice Workbook

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
