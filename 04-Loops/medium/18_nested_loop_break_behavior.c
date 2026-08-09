/*
=====================================

Question Number: 18

Title: Nested Loop Break Behavior

Difficulty: Medium

Concepts Used: Nested Loops, Scope of break

Problem Statement:
Create an outer for loop (i from 1 to 3) and an inner for loop (j from 1 to 3). Inside the inner loop, if j == 2, execute break;. Print i and j right before the break check. Observe which loop gets broken.

Sample Input:
(None)

Sample Output:
i=1, j=1
i=2, j=1
i=3, j=1

Constraints:
Use nested for loops.

Hints:
- Hint 1: The break statement only ever destroys the innermost loop it is currently inside.
- Hint 2: When j == 2, the inner loop breaks, but the outer loop moves to the next i.
- Hint 3: Consequently, j will never print 2 or 3.

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
