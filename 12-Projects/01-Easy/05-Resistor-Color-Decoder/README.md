# Resistor Color Decoder

**Difficulty**: Easy  
**Objective**: Decode 4-band resistor color strings into resistance values.

## Problem Statement
Develop an electronics simulation tool that takes 4 color band names as strings (e.g. 'brown', 'black', 'red', 'gold'), converts them to digits/multipliers/tolerances, and displays the resistance value in ohms.

## Concepts Used
- Strings
- String Comparison (strcmp)
- Switch / Conditionals
- Functions

## Requirements
- Input 4 color band names as strings.
- Map band 1 and band 2 to digits (0-9).
- Map band 3 to multiplier (10^N).
- Map band 4 to tolerance percentage (e.g. gold = 5%).
- Print formatted resistance (e.g. '1000 Ohms ± 5%').

## Input / Output
Input: 4 color strings.
Output: Decoded resistance value and tolerance.

## Edge Cases
- Invalid color string entered.
- Case sensitivity ('Red' vs 'red').
- Unsupported tolerance color.

## Suggested Functions
- `color_to_digit(const char *color)`
- `color_to_multiplier(const char *color)`
- `color_to_tolerance(const char *color)`

## Testing Checklist
- Test 'brown black red gold' -> 1000 Ohms +-5%.
- Test 'yellow violet yellow silver' -> 470000 Ohms +-10%.
- Test invalid color 'pink' -> Error message.

## Learning Outcomes
- String matching against known lookup tables.
- Converting domain specification rules into procedural code.

## Builds On
- Chapter 02 / Project 01 (electronics_workbench_calculator) - Adds color string decoding to numeric resistance conversion.

## Hints
- **Hint 1**: Convert input strings to lowercase or handle string comparison carefully.
- **Hint 2**: Create helper lookup functions that use strcmp() to return corresponding numeric values.
- **Hint 3**: Resistance = (band1 * 10 + band2) * multiplier.

## Completion Criteria
- Correctly matches color names to standard IEC resistor values and handles unknown color inputs gracefully.
