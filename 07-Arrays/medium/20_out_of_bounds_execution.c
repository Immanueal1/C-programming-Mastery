/*
=====================================

Question Number: 20

Title: Out-of-Bounds Execution (Safety Test)

Difficulty: Medium

Concepts Used: Array Bounds, Undefined Behavior

Problem Statement:
Declare int arr[3] = {10, 20, 30};. Deliberately write a loop that prints elements from i = 0 to i = 5. Run the program and observe the garbage values printed for indices 3, 4, and 5.

Sample Input:
(No input)

Sample Output:
10
20
30
-8495034 (Garbage)
32767 (Garbage)
0 (Garbage)

Constraints:
Observe why C is a "trust the programmer" language.

Hints:
- Hint 1: C does no automatic bounds checking.
- Hint 2: Accessing memory outside the array reads whatever random binary data was left there by other programs.
- Hint 3: If you attempt to write out of bounds (arr[5] = 99;), you might corrupt another variable or cause a Segmentation Fault.

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
