/*
=====================================

Question Number: 26

Title: Tracing Pass-By-Value Memory

Difficulty: Hard

Concepts Used: Logical Tracing, Pass-by-Value

Problem Statement:
Trace this logically:

struct obj { int x; };
void f1(struct obj o) { o.x = 10; }
void f2(struct obj *o) { o->x = 20; }
int main() {
    struct obj myObj = {5};
    f1(myObj);
    f2(&myObj);
    printf("%d", myObj.x);
}

Recreate this program and predict the exact output. Explain conceptually why f1 failed to change it to 10.

Sample Input:
(None)

Sample Output:
20

Constraints:
Do not alter the function signatures.

Hints:
- Hint 1: myObj starts as 5.
- Hint 2: f1 takes a copy. It changes the copy's x to 10. The original myObj.x remains 5.
- Hint 3: f2 takes the address. It follows the pointer to the original memory and changes it to 20.

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
