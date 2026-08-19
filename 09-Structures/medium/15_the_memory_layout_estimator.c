/*
=====================================

Question Number: 15

Title: The Memory Layout Estimator

Difficulty: Medium

Concepts Used: Structure Memory Layout

Problem Statement:
Assume int is 4 bytes, float is 4 bytes, and a char array is strictly 1 byte per character. If you define struct profile { char name[50]; int age; float height; };, conceptually, how many total bytes will one struct profile variable occupy in memory? Write a small printf statement printing your calculated answer.

Sample Input:
(None)

Sample Output:
Conceptual Memory Size: 58 bytes

Constraints:
Ignore structure padding/alignment theory for this exercise; just sum the raw member sizes.

Hints:
- Hint 1: name takes 50 * 1 bytes.
- Hint 2: age takes 4 bytes. height takes 4 bytes.
- Hint 3: 50 + 4 + 4 = 58 bytes physically reserved for one structure object.

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
