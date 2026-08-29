/*
=====================================

Question Number: 26

Title: Dangling Pointer Danger

Difficulty: Hard

Concepts Used: free() consequences

Problem Statement:
int *ptr = (int *) malloc(sizeof(int));
/* Value 100 stored here */
free(ptr);
/* Later in code */
/* ptr used again */
Conceptually, what is ptr pointing to after free(ptr) is executed? Why is using it dangerous?

Sample Input:
(No input)

Sample Output:
(Explanation of dangling pointer)

Constraints:
Explain memory ownership.

Hints:
- Hint 1: free() tells the operating system "I am done with this memory".
- Hint 2: However, free() does not automatically change the address stored inside ptr.
- Hint 3: ptr becomes a "Dangling Pointer", pointing to memory your program no longer owns. Accessing it causes Undefined Behavior.

Source:
Chapter 11 Practice Workbook

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
