# Time Format Converter

**Difficulty**: Easy  
**Objective**: Convert between 12-hour AM/PM and 24-hour military time format.

## Problem Statement
Build a time conversion utility that parses a time string in 12-hour format ('08:30 PM') and converts it to 24-hour format ('20:30'), and vice-versa, validating hour and minute bounds.

## Concepts Used
- Strings
- sscanf / sprintf
- Conditionals
- Input Validation

## Requirements
- Parse time string 'HH:MM AM/PM' or 'HH:MM'.
- Validate hours (1-12 or 0-23) and minutes (0-59).
- Convert 12h to 24h format.
- Convert 24h to 12h format.

## Input / Output
Input: Time string + Conversion mode.
Output: Converted time string.

## Edge Cases
- 12:00 AM (midnight -> 00:00) and 12:00 PM (noon -> 12:00).
- Invalid minute (e.g. 14:65).
- Malformed string format.

## Suggested Functions
- `convert_12_to_24(const char *time12, char *out24)`
- `convert_24_to_12(const char *time24, char *out12)`

## Testing Checklist
- Test 12:00 AM -> 00:00.
- Test 12:30 PM -> 12:30.
- Test 11:45 PM -> 23:45.
- Test invalid 25:00 -> Error.

## Learning Outcomes
- Formatted string parsing using sscanf.
- Formatted string generation using sprintf.

## Builds On
- Chapter 03 / Project 05 (smart_terminal_calculator) - Adds time string formatting and boundary validation.

## Hints
- **Hint 1**: Use sscanf(time_str, "%d:%d %s", &h, &m, ampm) for 12h parsing.
- **Hint 2**: 12 AM becomes hour 0 in 24h format; 12 PM remains hour 12.
- **Hint 3**: For hours 1 PM to 11 PM, add 12 to the hour value.

## Completion Criteria
- Correctly converts standard and edge-case times (midnight/noon) and rejects invalid hour/minute bounds.
