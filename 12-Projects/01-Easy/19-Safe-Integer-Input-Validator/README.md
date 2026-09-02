# Safe Integer Input Validator

**Difficulty**: Easy  
**Objective**: Implement reusable function to validate integer input bounds and flush invalid characters.

## Problem Statement
Develop a robust input validation library function get_safe_int(prompt, min, max) that guarantees returning a valid integer within specified range, handling non-numeric user inputs cleanly.

## Concepts Used
- Functions
- fgets & sscanf
- Pointers
- Input Clearing

## Requirements
- Display input prompt to user.
- Read line using fgets to prevent buffer overflow.
- Parse integer using sscanf and verify exactly 1 valid integer converted.
- Validate value falls between min and max range.
- Loop until valid input is provided.

## Input / Output
Input: Prompt text, min bound, max bound.
Output: Validated integer return value.

## Edge Cases
- User enters letters ('abc').
- User enters float ('12.34').
- User enters integer out of min/max range.

## Suggested Functions
- `get_safe_int(const char *prompt, int min_val, int max_val)`

## Testing Checklist
- Test valid integer within range (expect return value).
- Test text input (expect re-prompt message).
- Test out-of-range integer (expect re-prompt).

## Learning Outcomes
- Replacing unsafe scanf calls with robust fgets + sscanf validation pattern.
- Building reusable input sanitization utilities.

## Builds On
- Chapter 05 / Project 01 (modular_calculator) - Adds robust input sanitization buffer management.

## Hints
- **Hint 1**: Read input into a local buffer char buffer[64] using fgets().
- **Hint 2**: Check sscanf(buffer, "%d", &val) == 1 to confirm numeric conversion.
- **Hint 3**: Verify val >= min_val && val <= max_val before returning val.

## Completion Criteria
- Guarantees zero crashes or infinite loops when given malformed input and strictly enforces minimum/maximum integer boundaries.
