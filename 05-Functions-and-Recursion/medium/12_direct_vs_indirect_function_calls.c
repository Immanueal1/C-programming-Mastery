/*
=====================================

Question Number: 12

Title: Direct vs Indirect Function Calls

Difficulty: Medium

Concepts Used: Execution Flow, Indirect Calls

Problem Statement:
Write three functions: main(), funcA(), and funcB(). main() should call funcA(). funcA() should print "Inside A" and then call funcB(). funcB() should print "Inside B".

Sample Input:
(No input)

Sample Output:
Inside A
Inside B

Constraints:
main() must NOT call funcB() directly.

Hints:
- Hint 1: This demonstrates an indirect function call.
- Hint 2: Ensure funcB() is declared before funcA() calls it, or use prototypes.
- Hint 3: Execution goes: main -> funcA -> funcB -> back to funcA -> back to main.

Source:
Chapter 5 Practice Workbook

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
