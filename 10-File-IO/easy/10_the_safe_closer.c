/*
=====================================

Question Number: 10

Title: The Safe Closer

Difficulty: Easy

Concepts Used: fclose(), Proper Workflow

Problem Statement:
Write a complete, minimal program that opens safe.txt in read mode, checks if it is NULL, and if it is not NULL, cleanly closes the file.

Sample Input:
(No input)

Sample Output:
(No visible output, but perfectly safe memory behavior)

Constraints:
Include stdio.h and follow the OPEN -> CHECK -> CLOSE workflow.

Hints:
- Hint 1: fclose() requires the file pointer as an argument.
- Hint 2: Place fclose(fptr); at the very end of your main() function, just before return 0;.
- Hint 3: If the file is NULL, you return 1;. Otherwise, proceed to fclose(fptr);.

Source:
Chapter 10 Practice Workbook

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
