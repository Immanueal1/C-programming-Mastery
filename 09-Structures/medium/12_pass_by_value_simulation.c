/*
=====================================

Question Number: 12

Title: Pass By Value Simulation

Difficulty: Medium

Concepts Used: Passing Structures to Functions, Pass-by-value

Problem Statement:
Define struct gadget { int power; };. Initialize a gadget g1 with power 50 in main(). Write a function void overcharge(struct gadget g) that takes the structure and sets g.power = 200;. Call overcharge(g1); and then print g1.power inside main().

Sample Input:
(None)

Sample Output:
Power: 50

Constraints:
Understand why it prints 50 and not 200.

Hints:
- Hint 1: When you pass a structure directly into a function, C creates a complete physical copy of it.
- Hint 2: Changing g.power inside the function only changes the copy.
- Hint 3: The original g1.power in main() remains completely untouched.

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
