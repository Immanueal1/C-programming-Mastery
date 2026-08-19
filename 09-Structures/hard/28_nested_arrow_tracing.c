/*
=====================================

Question Number: 28

Title: Nested Arrow Tracing (Conceptual)

Difficulty: Hard

Concepts Used: (*ptr).member vs -> deeply

Problem Statement:
Assume struct box { int w; }; and struct box b1 = {100};.
You have struct box *p1 = &b1;.
Is (*(&b1)).w valid syntax? Is (&b1)->w valid syntax? Write a program that prints the weight using both of these exact, weird expressions.

Sample Input:
(None)

Sample Output:
Expr 1: 100
Expr 2: 100

Constraints:
Understand how & creates a temporary pointer.

Hints:
- Hint 1: &b1 yields a pointer to b1.
- Hint 2: Therefore, *(&b1) dereferences it back to b1, making .w valid.
- Hint 3: Since &b1 is a pointer, you can use the arrow operator directly on it: (&b1)->w. Both are perfectly valid!

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
