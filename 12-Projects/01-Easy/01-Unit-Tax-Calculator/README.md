# Unit Tax Calculator

**Difficulty**: Easy  
**Objective**: Calculate itemized multi-tier utility and income taxes with threshold validation.

## Problem Statement
Create a command-line program that prompts for gross income and utility consumption units, evaluates progressive tax brackets, and prints an itemized tax breakdown receipt.

## Concepts Used
- Variables & Data Types
- Arithmetic Operators
- Conditional Statements (if-else)
- Formatted I/O (printf, scanf)

## Requirements
- Prompt for gross income and electrical units.
- Apply progressive tax tiers (0-100 units at $0.10, 101-300 at $0.15, >300 at $0.25).
- Print itemized tax receipt with total due.

## Input / Output
Input: Income (float), Units (int)
Output: Formatted itemized tax statement.

## Edge Cases
- Negative income or unit inputs.
- Zero units consumed.
- Floating-point precision rounding errors.

## Suggested Functions
- `calculate_utility_tax(int units)`
- `calculate_income_tax(double income)`

## Testing Checklist
- Verify 0 units outputs $0.00 tax.
- Verify 250 units applies tier 1 and tier 2 rates correctly.
- Verify negative input displays error message.

## Learning Outcomes
- Mastering conditional progressive logic.
- Formatting numeric table output with precision specifiers (%.2f).

## Builds On
- Chapter 02 / Project 05 (basic_gst_and_split_bill_generator) - Adds progressive tier bracket logic and itemized receipt rendering.

## Hints
- **Hint 1**: Calculate tax incrementally per tier range rather than applying a single rate to the total.
- **Hint 2**: Use double for monetary amounts to preserve precision.
- **Hint 3**: Validate inputs before passing values into calculation functions.

## Completion Criteria
- Program compiles without warnings, correctly computes tier progressive taxes, handles negative inputs defensively, and formats output cleanly.
