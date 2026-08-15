/*
=====================================

Question Number: 14

Title: Array Size Parameter Trap

Difficulty: Medium

Concepts Used: Passing Arrays, Array Decay

Problem Statement:
Write a function void printArray(int arr[]). Inside this function, attempt to calculate the number of elements using sizeof(arr) / sizeof(arr[0]) and print it. Call this function from main() where the array is actually size 10. Observe why it fails to print 10.

Sample Input:
(No input)

Sample Output:
Calculated size inside function: 2 (or 1, depending on 64-bit/32-bit pointers)

Constraints:
Understand why array size must be passed manually.

Hints:
- Hint 1: When an array is passed to a function, it "decays" into a pointer.
- Hint 2: The function parameter int arr[] is secretly converted to int *arr by the compiler.
- Hint 3: sizeof(arr) inside the function yields the size of a pointer (usually 8 bytes), not the original array. This is why you MUST pass int n separately.

Source:
Chapter 7 Practice Workbook

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
