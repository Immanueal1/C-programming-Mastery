/*
=====================================

Question Number: 22

Title: Deep Execution Tracer

Difficulty: Hard

Concepts Used: Nested Calling, Execution Flow

Problem Statement:
Write functions A(), B(), and C().
main() calls A(). A() prints "A enters", calls B(), then prints "A exits".
B() prints "B enters", calls C(), then prints "B exits".
C() prints "C executes".
Trace and map the exact output.

Sample Input:
(No input)

Sample Output:
A enters
B enters
C executes
B exits
A exits

Constraints:
Strictly follow the calling order.

Hints:
- Hint 1: Function execution uses a Stack (LIFO: Last In, First Out).
- Hint 2: A pauses for B. B pauses for C.
- Hint 3: C finishes first, returning control to B, which finishes and returns control to A.

Source:
Chapter 5 Practice Workbook

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
