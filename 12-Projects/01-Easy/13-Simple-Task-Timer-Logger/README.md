# Simple Task Timer Logger

**Difficulty**: Easy  
**Objective**: Append task activity logs with duration metrics to a file.

## Problem Statement
Create a task logging tool that prompts the user for a task title and duration in minutes, formats the entry as a structured log line, and appends it to 'tasks.txt'.

## Concepts Used
- File I/O (append mode 'a')
- Strings (fgets)
- Formatted Output (fprintf)

## Requirements
- Prompt user for task title and duration (mins).
- Open 'tasks.txt' in append mode ('a').
- Write entry in format: [TASK] <title> | Duration: <mins> mins.
- Confirm file append operation and close file.

## Input / Output
Input: Task title (string), Duration (int).
Output: Appended record in 'tasks.txt' file.

## Edge Cases
- File creation when 'tasks.txt' does not exist.
- Empty task title string.
- Zero or negative duration entered.

## Suggested Functions
- `log_task(const char *filename, const char *title, int minutes)`

## Testing Checklist
- Test logging a valid task (expect line added to tasks.txt).
- Verify existing content in tasks.txt is preserved (append mode).
- Test with empty title string.

## Learning Outcomes
- Persistent file logging using append mode ('a').
- Combining user string and numeric data for file output.

## Builds On
- Chapter 10 / Project 03 (file_based_notes_writer) - Adds structured formatted task logging.

## Hints
- **Hint 1**: Use fopen(filename, "a") to preserve existing file content.
- **Hint 2**: Strip trailing newline from fgets input before writing to file.
- **Hint 3**: Check if fopen returns NULL before calling fprintf.

## Completion Criteria
- Correctly appends formatted task records to file without overwriting existing data and handles file open failures.
