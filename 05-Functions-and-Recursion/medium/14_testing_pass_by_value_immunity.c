/*
=====================================

Question Number: 14

Title: Testing Pass-By-Value Immunity

Difficulty: Medium

Concepts Used: Pass by Value, Variable Scope

Problem Statement:
In main(), declare int salary = 50000;. Pass it to a function applyBonus(int salary). Inside the function, add 10000 to salary and print "Salary with bonus: [value]". Back in main(), print "Original salary: [value]".

Sample Input:
(No input)

Sample Output:
Salary with bonus: 60000
Original salary: 50000

Constraints:
Use the exact same variable name salary in both functions.

Hints:
- Hint 1: Even if the parameter has the same name as the argument, they are stored in entirely different memory locations.
- Hint 2: Modifying the parameter salary only affects the copy inside applyBonus.
- Hint 3: main()'s salary remains untouched.

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
