/*
=====================================

Question Number: 30

Title: Complete DMA Trace

Difficulty: Hard

Concepts Used: Allocate -> Use -> Resize -> Free

Problem Statement:
Determine the final active memory state:
p = calloc(2, sizeof(int));
p[0] = 5; p[1] = 10; (Conceptually storing values)
p = realloc(p, 4 * sizeof(int));
p = realloc(p, 1 * sizeof(int));
free(p);
How many bytes of dynamically allocated memory does the program own at the very end of step 5?

Sample Input:
(No input)

Sample Output:
0 bytes

Constraints:
Trace to the absolute end.

Hints:
- Hint 1: Step 1: Owns 8 bytes.
- Hint 2: Step 3: Owns 16 bytes. Step 4: Owns 4 bytes.
- Hint 3: Step 5 releases everything. The program owns 0 bytes.

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
