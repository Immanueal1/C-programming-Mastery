/*
=====================================

Question Number: 23

Title: The "Double Break" Flag Technique

Difficulty: Hard

Concepts Used: Nested Loops, Breaking Outer Loops

Problem Statement:
You have nested loops: i from 1 to 5, and j from 1 to 5. You want to stop both loops completely when i == 3 && j == 3. Since a simple break only exits the inner loop, use a "flag" variable (an integer acting as true/false) to break the outer loop as well.

Sample Input:
(None)

Sample Output:
i=1, j=1
...
i=3, j=2
Terminated both loops.

Constraints:
You must use a flag variable to trigger the outer break.

Hints:
- Hint 1: Declare int flag = 0; before the outer loop.
- Hint 2: In the inner loop, if the condition is met, set flag = 1; and then break;.
- Hint 3: Immediately inside the outer loop (but after the inner loop finishes), check if(flag == 1) break;.

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
