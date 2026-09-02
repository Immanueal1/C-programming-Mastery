# Basic CSV Row Parser

**Difficulty**: Easy  
**Objective**: Tokenize a comma-separated text row into individual field strings.

## Problem Statement
Build a CSV row parsing tool that takes a single comma-delimited string (e.g. '101,John Doe,Software Engineer,75000'), splits the row by commas, and prints each field with its column index.

## Concepts Used
- Strings
- Pointers
- Loops
- Character Arrays

## Requirements
- Read comma-separated input string.
- Scan string for comma ',' delimiters.
- Extract individual field tokens into field array/buffers.
- Display field index and extracted string value.

## Input / Output
Input: String 'col1,col2,col3'.
Output: Column 0: col1, Column 1: col2, Column 2: col3.

## Edge Cases
- Empty field between commas ('101,,75000').
- Trailing comma ('101,John,').
- String with no commas.

## Suggested Functions
- `parse_csv_row(const char *row, char fields[][64], int max_fields)`

## Testing Checklist
- Test standard row 'A,B,C,D'.
- Test row with empty field '1,,3'.
- Test single value row without comma.

## Learning Outcomes
- String parsing without relying on external libraries.
- Handling positional token boundaries.

## Builds On
- Chapter 08 / Project 04 (simple_string_comparison_utility) - Adds comma delimiter parsing and field extraction.

## Hints
- **Hint 1**: Iterate character by character, copying characters to a field buffer until ',' or '\0' is hit.
- **Hint 2**: Null-terminate each extracted field buffer before moving to the next column.
- **Hint 3**: Increment field_count whenever a comma or end-of-string is processed.

## Completion Criteria
- Correctly tokenizes CSV fields, handles empty intermediate fields, and prevents buffer out-of-bounds writes.
