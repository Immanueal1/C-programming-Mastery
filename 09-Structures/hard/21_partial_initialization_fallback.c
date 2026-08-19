/*
=====================================

Question Number: 21

Title: Partial Initialization Fallback

Difficulty: Hard

Concepts Used: Initialization Order, Missing Values

Problem Statement:
Define struct config { int id; float threshold; char mode[20]; };. Initialize a variable c1 with only {1}. What happens to threshold and mode? Print all three members. Explain the behavior conceptually.

Sample Input:
(None)

Sample Output:
ID: 1, Threshold: 0.000000, Mode Length: 0

Constraints:
Omit the remaining initialization values.

Hints:
- Hint 1: Initialization matches members in strict declaration order.
- Hint 2: 1 is assigned to id.
- Hint 3: Any members left uninitialized in the {} list are automatically zero-initialized by the C compiler!

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
