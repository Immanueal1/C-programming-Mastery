/*
=====================================

Question Number: 30

Title: Complex Pre/Post Tracing Puzzle

Difficulty: Hard

Concepts Used: Increment/Decrement evaluation chains

Problem Statement:
Initialize int a = 2, b = 2;. Write a while loop with the exact condition: while (a-- > 0 && ++b < 5). Inside the loop, print "Looping". Outside the loop, print the final values of a and b. Predict and trace the logic.

Sample Input:
(None)

Sample Output:
Looping
Looping
Final: a=-1, b=4

Constraints:
Write the exact syntax requested and observe C's internal evaluation rules.

Hints:
- Hint 1: Iteration 1: a-- > 0 checks 2 > 0 (True), a becomes 1. ++b < 5 checks 3 < 5 (True). Body runs.
- Hint 2: Iteration 2: a-- > 0 checks 1 > 0 (True), a becomes 0. ++b < 5 checks 4 < 5 (True). Body runs.
- Hint 3: Iteration 3: a-- > 0 checks 0 > 0 (False), a becomes -1. Short-circuit kicks in: ++b is NEVER evaluated! Loop terminates.

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
