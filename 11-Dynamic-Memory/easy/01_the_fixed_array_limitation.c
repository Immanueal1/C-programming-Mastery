/*
=====================================

Question Number: 01

Title: The Fixed Array Limitation

Difficulty: Easy

Concepts Used: Compile-Time vs Run-Time Memory

Problem Statement:
You are writing a program to store test scores, but you do not know how many students will take the test until the user types the number. Conceptually explain why int scores[30]; is a bad approach and why Dynamic Memory Allocation is required.

Sample Input:
(No input)

Sample Output:
(Explanation of static vs dynamic memory)

Constraints:
Focus on the limitation of compile-time allocation.

Hints:
- Hint 1: When the compiler sees int scores[30];, it locks that size forever.
- Hint 2: If 50 students show up, the program crashes or loses data. If 2 students show up, memory is wasted.
- Hint 3: Dynamic memory allows the program to wait until the user inputs the number of students, and then requests the exact amount of memory needed at run time.

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
