# Command Line Todo Manager

**Difficulty**: Medium  
**Project Type**: Productivity Tools / CLI Application  
**Estimated Time**: 3 - 5 hours  

## Objective
Build a command-line TODO task manager supporting CLI subcommands, priority filtering, and disk persistence.

## Problem Statement
Create a feature-rich CLI task manager that accepts command arguments (e.g. `todo add "Task" --priority HIGH`, `todo list`, `todo done 2`, `todo del 1`), manages task statuses, and saves task records to disk.

## Why Build This?
Teaches CLI subcommand parsing, struct array filtering, file serialization, and building developer productivity tools in C.

## Concepts Used
- Command-Line Arguments (argc, argv)
- Struct Arrays
- File I/O Serialization
- String Formatting

## Prerequisites
Chapter 08 (Strings), Chapter 09 (Structures), Chapter 10 (File I/O).

## Requirements
- **Requirement 1**: Support CLI subcommands
- **Requirement 2**: Support task priority flags (LOW, MED, HIGH) and due date strings.
- **Requirement 3**: Maintain task completion status (0 = Pending, 1 = Completed).
- **Requirement 4**: Automatically save and reload tasks from `todo.dat` or `todo.txt`.

## Functional Requirements
- **Input**: CLI subcommands and task details via argv.
- **Output**: Formatted task list table, operation status messages.
- **Validation**: Validate task index when marking done or deleting. Validate priority levels.
- **Edge Cases**: Deleting task index out of bounds.
No arguments provided (display help menu).
Empty task description string.

## Suggested Program Structure
```text
13-Command-Line-Todo-Manager/
├── README.md
├── src/
│   ├── main.c
│   ├── todo.c
│   └── todo.h
└── tests/
    └── test_todo.c
```

## Suggested Functions
- `int todo_add(const char *title, int priority);`
- `int todo_mark_done(int task_id);`
- `int todo_delete(int task_id);`
- `void todo_list_all(int filter_priority);`

## Data Structures
```c
struct Task { int id; char title[128]; int priority; int is_done; char created_at[32]; };
struct TodoList { struct Task tasks[100]; int count; };
```

## File Handling
Save and load task records using structured file I/O.

## Memory Considerations
Static struct array storage.

## Error Handling
Display clean CLI usage errors for malformed commands.

## Testing Checklist
- [ ] Verify `todo add` appends new task with unique ID.
- [ ] Verify `todo done 1` marks task 1 as completed.
- [ ] Verify `todo list` outputs task table formatted with status indicators.

## Expected Learning Outcomes
- Parsing CLI subcommands and options in C.
- Building developer CLI workflow utilities.

## Industry Relevance
Mirrors design of modern CLI tools like git, docker, and taskwarrior.

## Interview Relevance
Great portfolio utility demonstrating CLI design and file persistence.

## Portfolio Value
Practical everyday CLI developer tool for GitHub repository.

## Builds On
- Chapter 10 / Project 03 (file_based_notes_writer) - Adds task status flags, priority sorting, CLI subcommands, and state persistence.

## Hints
- **Hint 1**: Hint 1: Use strcmp(argv[1], "add") to dispatch CLI subcommands.
- **Hint 2**: Hint 2: Format task status as "[X]" for completed and "[ ]" for pending.
- **Hint 3**: Hint 3: Save tasks to file after every modifying command (add, done, delete).

## Optional Extensions
- Add due-date tracking.
- Add JSON file export.

## Completion Criteria
- Correctly parses subcommands, updates task statuses, handles invalid task IDs, and persists tasks to disk.
