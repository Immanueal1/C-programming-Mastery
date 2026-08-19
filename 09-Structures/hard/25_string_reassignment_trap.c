/*
=====================================

Question Number: 25

Title: String Reassignment Trap (Debug/Fix)

Difficulty: Hard

Concepts Used: strcpy, Character Array rules

Problem Statement:
A junior developer wrote:
typedef struct { char role[20]; } User; User u1; u1.role = "Admin";
This fails to compile. Write a program that correctly creates the user and assigns "Admin" to the role member without changing the structure definition.

Sample Input:
(None)

Sample Output:
Role: Admin

Constraints:
Include <string.h>.

Hints:
- Hint 1: u1.role is an array base address, which is a constant pointer. You cannot reassign it.
- Hint 2: You must copy the string literal into the array's memory space.
- Hint 3: strcpy(u1.role, "Admin");

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
