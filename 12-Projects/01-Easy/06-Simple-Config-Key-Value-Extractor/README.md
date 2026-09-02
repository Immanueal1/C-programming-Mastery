# Simple Config Key-Value Extractor

**Difficulty**: Easy  
**Objective**: Extract key and value strings from KEY=VALUE formatted lines.

## Problem Statement
Write a configuration parsing utility that receives a single configuration string line (e.g., 'PORT=8080' or 'TIMEOUT=30'), parses the key and value across the '=' delimiter, and stores them in separate buffers.

## Concepts Used
- Strings
- Pointers
- String Searching (strchr)
- Functions

## Requirements
- Accept a string formatted as KEY=VALUE.
- Locate the '=' character using strchr or loop scanner.
- Extract KEY into key_buffer and VALUE into value_buffer.
- Trim leading/trailing spaces around key and value.

## Input / Output
Input: String 'KEY=VALUE'.
Output: Key: 'KEY', Value: 'VALUE'.

## Edge Cases
- Missing '=' delimiter in input.
- Empty key or empty value ('=8080' or 'PORT=').
- Multiple '=' characters ('URL=http://example.com?a=1').

## Suggested Functions
- `extract_key_value(const char *input, char *key, char *value)`

## Testing Checklist
- Test valid 'DB_HOST=localhost'.
- Test missing delimiter 'INVALID_LINE' (expect return error).
- Test spaced input ' MAX_USER = 50 '.

## Learning Outcomes
- Parsing string delimiters using pointers.
- Buffer safety when copying string substrings.

## Builds On
- Chapter 08 / Project 05 (string_copy_and_concatenation_tool) - Adds key-value delimiter splitting logic.

## Hints
- **Hint 1**: Use strchr(input, '=') to find the delimiter address.
- **Hint 2**: Calculate key length using pointer subtraction: delimiter_ptr - input_ptr.
- **Hint 3**: Use strncpy() to copy key and strcpy() to copy value after the delimiter.

## Completion Criteria
- Safely splits key and value, handles missing delimiter errors, and prevents buffer overflow.
