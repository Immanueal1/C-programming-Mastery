/*
=====================================

Question Number: 24

Title: Typedef Alias Shadowing (Debugging Concept)

Difficulty: Hard

Concepts Used: typedef syntax mastery

Problem Statement:
Consider the following: typedef struct data { int val; } data;. Here, the structure tag is data, and the alias is also data. Is this allowed in C? Write a program that implements this, declares a variable data d1;, sets val = 42, and prints it.

Sample Input:
(None)

Sample Output:
Val: 42

Constraints:
Understand C's namespace rules.

Hints:
- Hint 1: In C, structure tags (the name after struct) and typedef aliases live in different "namespaces".
- Hint 2: Therefore, struct data and data (the alias) do not conflict!
- Hint 3: This is highly common in real-world C code to avoid typing struct everywhere.

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
