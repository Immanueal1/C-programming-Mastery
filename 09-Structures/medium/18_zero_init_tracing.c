/*
=====================================

Question Number: 18

Title: Zero Init Tracing

Difficulty: Medium

Concepts Used: {0} Initialization, String Arrays

Problem Statement:
Declare struct database { int id; char hash[10]; float version; };. Initialize a variable db1 with {0}. Print db1.id, db1.version, and use a strlen() to print the length of db1.hash. What happens to the character array when zero-initialized?

Sample Input:
(None)

Sample Output:
ID: 0, Version: 0.000000, Hash Length: 0

Constraints:
Include <string.h>.

Hints:
- Hint 1: {0} sets all integers to 0 and floats to 0.0.
- Hint 2: For character arrays, it fills the array with the '\0' (Null) character.
- Hint 3: Since the very first character is '\0', strlen() immediately evaluates the string length as 0.

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
