/*
=====================================

Question Number: 22

Title: Array of Structures Pass-by-Address

Difficulty: Hard

Concepts Used: Functions, Arrays, Structure pointers

Problem Statement:
Define struct item { int cost; };. Create an array inventory[3] = {{10}, {20}, {30}};.
Write a function void applyDiscount(struct item *arr, int size) that reduces every item's cost by 5. Call it from main() and print the updated array.

Sample Input:
(None)

Sample Output:
Cost 1: 5
Cost 2: 15
Cost 3: 25

Constraints:
Combine array indexing with structure pointers.

Hints:
- Hint 1: Passing inventory passes the base address of the array of structures.
- Hint 2: Inside the function, arr acts as an array of structures. You can simply use arr[i].cost -= 5;.
- Hint 3: The . operator is used here because arr[i] inherently dereferences the pointer to yield a direct structure object!

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
