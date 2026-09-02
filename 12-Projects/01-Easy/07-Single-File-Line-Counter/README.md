# Single File Line Counter

**Difficulty**: Easy  
**Objective**: Count total lines, non-empty lines, and total bytes in a text file.

## Problem Statement
Create a file analysis utility that opens a specified text file, counts total lines, non-blank lines, and total byte size, and displays summary statistics.

## Concepts Used
- File I/O (fopen, fgetc, fclose)
- Loops
- Character Checking

## Requirements
- Open text file in read mode ('r').
- Read character by character until EOF.
- Track total lines ('\n'), blank lines, and total bytes.
- Print file analysis report and close file.

## Input / Output
Input: File path string.
Output: Total lines, blank lines, non-empty lines, byte size.

## Edge Cases
- File does not exist or access denied.
- Empty file (0 bytes).
- File ending without a final newline character.

## Suggested Functions
- `analyze_file(const char *filename)`

## Testing Checklist
- Test with existing sample text file.
- Test with non-existent file path (expect clean error message).
- Test with empty 0-byte file.

## Learning Outcomes
- Safe file stream handling using fopen and fclose.
- Character stream processing and EOF detection.

## Builds On
- Chapter 10 / Project 02 (simple_text_file_reader) - Adds line filtering and byte counting metrics.

## Hints
- **Hint 1**: Check if file pointer is NULL before attempting to read.
- **Hint 2**: Track if current line contains non-whitespace characters to identify non-blank lines.
- **Hint 3**: Remember to close file pointer with fclose() in all code paths.

## Completion Criteria
- Correctly opens and closes file streams, reports accurate line/byte counts, and handles missing file errors gracefully.
