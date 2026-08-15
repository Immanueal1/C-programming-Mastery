/*
=====================================

Question Number: 27

Title: The Off-By-One Debug Trace

Difficulty: Hard

Concepts Used: Array Bounds, Undefined Behavior

Problem Statement:
Consider: int arr[5] = {1,2,3,4,5}; for(int i=1; i<=5; i++) { arr[i] = 0; }. Without running it, trace exactly what happens to the array and system memory.

Sample Input:
(No input)

Sample Output:
(Explanation)

Constraints:
Focus on the logical failure.

Hints:
- Hint 1: i starts at 1, so arr[0] (the value 1) is never touched.
- Hint 2: The loop goes up to i=5. arr[5] does not exist!
- Hint 3: Writing 0 to arr[5] corrupts adjacent memory, potentially altering another variable or causing a segfault.

Source:
Chapter 7 Practice Workbook

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
