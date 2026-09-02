# Simple Text Word Counter

**Difficulty**: Easy  
**Objective**: Parse a text buffer to count words, lines, and characters.

## Problem Statement
Build a text processing utility that takes a string input buffer, counts total words, lines, and non-space characters, and outputs character distribution statistics.

## Concepts Used
- Strings
- Character Inspection (<ctype.h>)
- Loops
- Pointers

## Requirements
- Read text line or buffer using fgets.
- Count characters, words (separated by whitespace), and lines.
- Display total character count excluding spaces.

## Input / Output
Input: String text buffer.
Output: Word count, line count, character count.

## Edge Cases
- Empty input string.
- Multiple consecutive spaces between words.
- Leading and trailing whitespace.

## Suggested Functions
- `count_words(const char *text)`
- `count_characters(const char *text)`

## Testing Checklist
- Test empty string (0 words).
- Test multiple spaces 'hello   world' (2 words).
- Test text with newlines.

## Learning Outcomes
- String traversal using pointers or array indices.
- State-machine logic for tracking word boundaries.

## Builds On
- Chapter 08 / Project 01 (string_information_analyzer) - Adds state-machine whitespace tracking for accurate word boundaries.

## Hints
- **Hint 1**: Maintain an in_word flag (0 or 1) as you scan character by character.
- **Hint 2**: Use isspace() from <ctype.h> to check for spaces, tabs, and newlines.
- **Hint 3**: Transition in_word from 0 to 1 when encountering a non-space character to increment word count.

## Completion Criteria
- Accurately counts words despite irregular spacing, counts lines correctly, and handles empty input string without crashing.
