/*
=====================================

Question Number: 14

Title: Array Immutability Trap

Difficulty: Medium

Concepts Used: Array non-reassignment

Problem Statement:
Declare char name[] = "Hello";. Try to reassign it by writing name = "World";. Notice the compiler error. Write a comment explaining why this fails, and fix the code to update the string contents to "World" properly using a library function.

Sample Input:
(No input)

Sample Output:
Updated name: World

Constraints:
Use the proper <string.h> function to bypass the reassignment restriction.

Hints:
- Hint 1: An array name acts as a constant pointer to its base address. You cannot reassign the base address.
- Hint 2: To change the contents of a character array, you must copy new characters into it.
- Hint 3: Use strcpy(name, "World");.

Source:
Chapter 8 Practice Workbook

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
