# Simple CLI Menu Shell

**Difficulty**: Easy  
**Objective**: Build a robust CLI menu loop with input buffer flushing.

## Problem Statement
Develop a reusable command-line menu shell that displays option choices, accepts user menu selections safely without infinite loops on bad input, executes placeholder actions, and handles exit commands cleanly.

## Concepts Used
- Do-While Loops
- Switch-Case Statements
- Input Flushing
- Functions

## Requirements
- Display structured menu choices (1-4, 0 to Exit).
- Read user menu choice as integer.
- Flush residual input buffer to prevent infinite loop traps on character input.
- Execute selected menu option stub and continue loop until option 0.

## Input / Output
Input: Integer menu choice.
Output: Action response text and menu re-display.

## Edge Cases
- Non-numeric character input (e.g. 'abc').
- Out-of-range integer option (e.g. 99).
- EOF or Ctrl+D signal.

## Suggested Functions
- `display_menu()`
- `flush_input_buffer()`
- `handle_choice(int choice)`

## Testing Checklist
- Test valid option selection (1, 2, 3).
- Test letter input 'x' (expect clean invalid choice prompt without infinite loop).
- Test option 0 (expect clean exit).

## Learning Outcomes
- Preventing input buffer corruption in C CLI applications.
- Structuring clean event loops.

## Builds On
- Chapter 03 / Project 01 (atm_menu_simulator) - Adds robust input clearing against infinite loop traps.

## Hints
- **Hint 1**: Write flush_input_buffer() using while ((ch = getchar()) != '\n' && ch != EOF);
- **Hint 2**: Check scanf return value == 1 to verify numeric input was read.
- **Hint 3**: If scanf fails, flush the buffer immediately before prompting again.

## Completion Criteria
- Demonstrates total immunity to character input infinite loops and executes menu options cleanly until exit.
