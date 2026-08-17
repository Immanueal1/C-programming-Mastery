/*
=====================================

Question Number: 21

Title: Bounded Input Truncation

Difficulty: Hard

Concepts Used: fgets() buffer limits, String Memory

Problem Statement:
Declare an array char limitStr[5];. Use fgets(limitStr, 5, stdin); to read user input. Input a word that is 10 characters long, like "HelloWorld". Print the string and its length. Observe exactly how many characters were read and why.

Sample Input:
HelloWorld

Sample Output:
String: Hell
Length: 4

Constraints:
Understand why 4 characters were read when the size is 5.

Hints:
- Hint 1: fgets reads at most size - 1 characters.
- Hint 2: It forces the very last byte (index 4) to be the '\0' character to guarantee string safety.
- Hint 3: Therefore, "Hell" takes 4 bytes, plus '\0' takes the 5th byte.

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
