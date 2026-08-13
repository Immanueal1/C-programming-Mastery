/*
=====================================

Question Number: 26

Title: The ** Reassignment Function

Difficulty: Hard

Concepts Used: Modifying a Pointer inside a Function

Problem Statement:
You have a pointer int *p in main() pointing to a = 10. You want a function changePointer(...) to make p point to b = 20 instead. How do you pass p to the function so that the function can permanently change where p points?

Sample Input:
(No user input)

Sample Output:
Value p points to after function: 20

Constraints:
You must pass a pointer-to-pointer to the function.

Hints:
- Hint 1: If you pass p (Call by Value), the function gets a copy of the address. Modifying the copy won't change p in main.
- Hint 2: You must pass the address of the pointer: &p.
- Hint 3: The function must accept an int **ptrRef. Inside, write *ptrRef = &b;.

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
