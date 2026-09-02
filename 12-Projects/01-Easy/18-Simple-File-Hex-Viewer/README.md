# Simple File Hex Viewer

**Difficulty**: Easy  
**Objective**: Read binary file bytes and display hex codes with ASCII text side-by-side.

## Problem Statement
Create a low-level binary inspection tool that opens a file, reads up to 256 bytes using fread, and displays a formatted hex dump showing memory offset, hex byte values (%02X), and printable ASCII characters.

## Concepts Used
- File I/O (fread, binary mode 'rb')
- Hexadecimal Printing
- Character Testing (<ctype.h>)

## Requirements
- Open specified file in binary read mode ('rb').
- Read chunk of bytes into unsigned char buffer.
- Display 16 bytes per line with hex offset, hex values, and ASCII representation.
- Print '.' for non-printable ASCII characters.

## Input / Output
Input: Binary/text file path.
Output: 16-byte hex dump table with offset and ASCII column.

## Edge Cases
- File size not a multiple of 16 bytes (last line partial dump).
- Non-existent file.
- 0-byte empty file.

## Suggested Functions
- `hex_dump_file(const char *filename, int max_bytes)`

## Testing Checklist
- Test with small text file.
- Test with binary file.
- Verify non-printable characters display as '.'.

## Learning Outcomes
- Reading raw binary data streams with fread.
- Formatting hex alignment outputs for system debugging.

## Builds On
- Chapter 10 / Project 02 (simple_text_file_reader) - Adds binary byte reading and hex format rendering.

## Hints
- **Hint 1**: Open file with fopen(filename, "rb") for binary read mode.
- **Hint 2**: Use isprint() from <ctype.h> to check if byte is a printable ASCII character.
- **Hint 3**: Format address offset using printf("%08X  ", offset);

## Completion Criteria
- Accurately formats hex dumps in 16-byte rows, aligns final partial lines, and correctly handles non-printable bytes.
