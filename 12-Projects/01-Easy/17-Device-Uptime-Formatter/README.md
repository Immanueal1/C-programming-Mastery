# Device Uptime Formatter

**Difficulty**: Easy  
**Objective**: Convert raw uptime seconds into Days, Hours, Minutes, Seconds struct.

## Problem Statement
Build an embedded telemetry utility that receives system uptime in raw seconds (unsigned long), converts it into a struct Uptime (days, hours, minutes, seconds), and formats a human-readable uptime string.

## Concepts Used
- Structures
- Modulo & Division Ops
- Functions (Pass by Ref)
- Formatting

## Requirements
- Define struct Uptime with days, hours, minutes, seconds.
- Convert raw seconds into struct fields.
- Format output string: 'X days, HH:MM:SS'.
- Return struct from function or pass by pointer.

## Input / Output
Input: Raw seconds (e.g. 90061).
Output: Struct Uptime (1 day, 1 hour, 1 minute, 1 second).

## Edge Cases
- 0 seconds input.
- Very large uptime values (> 1,000,000 seconds).
- Exactly 86400 seconds (1 full day).

## Suggested Functions
- `convert_seconds_to_uptime(unsigned long total_sec, struct Uptime *up)`
- `print_uptime(const struct Uptime *up)`

## Testing Checklist
- Test 0 seconds -> 0 days, 00:00:00.
- Test 3661 seconds -> 0 days, 01:01:01.
- Test 90061 seconds -> 1 day, 01:01:01.

## Learning Outcomes
- Decomposing cumulative scalar metrics into struct fields.
- Passing structures to functions via pointers.

## Builds On
- Chapter 09 / Project 03 (coordinate_mover) - Adds time decomposition into struct fields.

## Hints
- **Hint 1**: Days = total_sec / 86400; remaining = total_sec % 86400.
- **Hint 2**: Hours = remaining / 3600; remaining = remaining % 3600.
- **Hint 3**: Minutes = remaining / 60; Seconds = remaining % 60.

## Completion Criteria
- Accurately decomposes uptime seconds into days, hours, minutes, seconds and outputs formatted string.
