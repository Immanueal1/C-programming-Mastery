/*
=====================================

Question Number: 22

Title: The Dangling Swap Trick

Difficulty: Hard

Concepts Used: Swapping Local Pointers

Problem Statement:
Write a function swapPointers(int *p1, int *p2) that swaps the pointers themselves (i.e., int *temp = p1; p1 = p2; p2 = temp;) without dereferencing them. Call this from main() using the addresses of x = 10 and y = 20. Print x and y in main(). Does the swap work? Why or why not?

Sample Input:
(No user input)

Sample Output:
x = 10, y = 20

Constraints:
Demonstrate why swapping pointer addresses by value fails.

Hints:
- Hint 1: The function receives copies of the addresses.
- Hint 2: Swapping the local copies of the addresses inside the function does not change where the pointers in main() point to.
- Hint 3: It also doesn't change the actual integer values in RAM because * (dereference) was never used.

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
