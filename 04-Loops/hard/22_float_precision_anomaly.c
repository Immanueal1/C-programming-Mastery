/*
=====================================

Question Number: 22

Title: Float Precision Anomaly

Difficulty: Hard

Concepts Used: Float Iterators, Precision Traps

Problem Statement:
Write a loop: for(float f = 0.0; f != 1.0; f += 0.1). Inside, print f. Also, put an emergency break: if(f > 2.0) break;. Note: You will notice the loop doesn't stop at 1.0 and triggers the emergency break instead! Write the program, run it, and conceptually understand why floats are dangerous in exact != loop conditions.

Sample Input:
(None)

Sample Output:
(It will print 0.0 to 2.0+ and hit the emergency break)

Constraints:
Run the exact loop specified.

Hints:
- Hint 1: Computers store floats in binary, which cannot represent 0.1 perfectly.
- Hint 2: Adding 0.1 ten times yields something like 1.0000001, which is != 1.0.
- Hint 3: Lesson: Never use == or != with float iterators. Always use <= or >=.

Source:
Chapter 4 Practice Workbook

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
