/*
=====================================

Question Number: 19

Title: Pointer to Same Type Alias

Difficulty: Medium

Concepts Used: Value Tracing

Problem Statement:
Declare int val = 42. Create a pointer p1 pointing to val. Create another pointer p2 and assign p1 to it (i.e., p2 = p1). Modify the value to 99 using p2. Print the value using *p1.

Sample Input:
(No user input)

Sample Output:
*p1 shows: 99

Constraints:
Understand pointer aliasing (multiple pointers looking at the same address).

Hints:
- Hint 1: p1 holds the address of val.
- Hint 2: Setting p2 = p1 copies the address, so p2 also looks at val.
- Hint 3: Changing *p2 changes val, so *p1 will reflect that change.

Source:
Chapter 6 Practice Workbook

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
