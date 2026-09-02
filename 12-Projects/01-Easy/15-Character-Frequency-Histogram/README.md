# Character Frequency Histogram

**Difficulty**: Easy  
**Objective**: Calculate ASCII character frequency histogram for a text string.

## Problem Statement
Build a text analytics tool that reads a string input, calculates the frequency distribution of alphabetic letters (a-z, case-insensitive), and prints a visual text histogram (e.g. 'a: **** (4)').

## Concepts Used
- Strings
- Arrays (Frequency Table)
- Character Indexing
- Loops

## Requirements
- Read text string from user input.
- Initialize frequency array of size 26 to zero.
- Convert letters to lowercase and increment frequency[ch - 'a'].
- Print horizontal bar chart (* symbols) for letters with frequency > 0.

## Input / Output
Input: String text.
Output: Letter frequency counts and ASCII bar histogram.

## Edge Cases
- String with no alphabetic characters ('123!@#').
- Empty input string.
- Mixed uppercase and lowercase string ('Hello World').

## Suggested Functions
- `compute_frequency(const char *text, int freq[26])`
- `display_histogram(const int freq[26])`

## Testing Checklist
- Test string 'aabbcc' (a:2, b:2, c:2).
- Test string with numbers and punctuation.
- Test uppercase string 'ABC' (maps to a:1, b:1, c:1).

## Learning Outcomes
- Using character math (ch - 'a') as array lookup indices.
- Generating graphical text visualizations from frequency tables.

## Builds On
- Chapter 08 / Project 01 (string_information_analyzer) - Adds frequency array indexing and visual bar display.

## Hints
- **Hint 1**: Use tolower() from <ctype.h> to normalize characters before indexing.
- **Hint 2**: Check if character is alpha with isalpha() before computing array index.
- **Hint 3**: Use an inner loop to print '*' characters equal to the frequency count.

## Completion Criteria
- Accurately counts letter occurrences case-insensitively and displays a clear text histogram.
