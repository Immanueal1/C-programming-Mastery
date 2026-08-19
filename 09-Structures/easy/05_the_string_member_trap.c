/*
=====================================

Question Number: 05

Title: The String Member Trap

Difficulty: Easy

Concepts Used: String Members, #include <string.h>, strcpy()

Problem Statement:
Assume struct book { int pages; char title[100]; };. Declare a variable b1. Assign 300 to pages. Attempting to write b1.title = "C Programming"; will cause a compilation error. Correctly assign the string to the structure member and print it.

Sample Input:
(None)

Sample Output:
Book: C Programming (300 pages)

Constraints:
You must include the correct standard library to handle the string.

Hints:
- Hint 1: Arrays in C cannot be reassigned using the = operator after they are declared.
- Hint 2: You must use the string copy function from <string.h>.
- Hint 3: strcpy(b1.title, "C Programming");

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
