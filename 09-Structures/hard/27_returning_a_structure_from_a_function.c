/*
=====================================

Question Number: 27

Title: Returning a Structure from a Function

Difficulty: Hard

Concepts Used: Struct Return Types, Copying

Problem Statement:
Functions can pass structures by value, but they can also return structures by value! Write a function struct point createPoint(int x, int y) that creates a local struct point, assigns x and y to its members, and returns the whole structure object. In main(), catch it in a new variable and print it.

Sample Input:
(None)

Sample Output:
Returned Point: (7, 14)

Constraints:
The function must return a struct, not a pointer.

Hints:
- Hint 1: The return type of the function is struct point.
- Hint 2: Inside the function: struct point temp; temp.x = x; temp.y = y; return temp;
- Hint 3: In main: struct point p1 = createPoint(7, 14); (This safely copies the entire memory block back to main).

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
