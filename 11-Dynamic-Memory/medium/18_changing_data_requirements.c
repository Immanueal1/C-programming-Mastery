/*
=====================================

Question Number: 18

Title: Changing Data Requirements

Difficulty: Medium

Concepts Used: malloc vs calloc Choice

Problem Statement:
Scenario A: You are building a high-speed buffer where data will be immediately overwritten by a file download. Scenario B: You are building a counter system where every slot must start at zero. Which DMA function is most appropriate for each scenario and why?

Sample Input:
(No input)

Sample Output:
(Scenario choices)

Constraints:
Relate the function's internal behavior to the scenario.

Hints:
- Hint 1: One function is faster because it skips initialization. The other is safer for counters.
- Hint 2: malloc leaves garbage values. calloc zeroes them out.
- Hint 3: Scenario A: malloc (speed). Scenario B: calloc (zero initialization).

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
