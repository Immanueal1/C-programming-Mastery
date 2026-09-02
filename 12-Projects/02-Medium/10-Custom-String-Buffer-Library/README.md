# Custom String Buffer Library

**Difficulty**: Medium  
**Project Type**: Text Processing / Systems Utility  
**Estimated Time**: 4 - 5 hours  

## Objective
Build a dynamic string builder library supporting init, append, insert, replace, clear, and free.

## Problem Statement
Create a multi-file dynamic string builder library (`StringBuilder`) in C that automatically manages heap allocation, resizes buffer capacity using `realloc` as strings grow, and provides safe string manipulation APIs.

## Why Build This?
Teaches dynamic memory management, heap buffer growth policies, API encapsulation, and string algorithm design.

## Concepts Used
- Dynamic Memory Allocation (malloc, realloc, free)
- Pointers & String Manipulation
- Modular C API Design
- Buffer Bounds Management

## Prerequisites
Chapter 06 (Pointers), Chapter 08 (Strings), Chapter 11 (Dynamic Memory).

## Requirements
- **Requirement 1**: Define `struct StringBuilder` (char *data, size_t length, size_t capacity).
- **Requirement 2**: Implement sb_create(), sb_append(), sb_append_char(), sb_insert(), sb_replace(), sb_free().
- **Requirement 3**: Automatically double capacity using `realloc` when buffer is full.
- **Requirement 4**: Ensure all strings remain null-terminated at all times.

## Functional Requirements
- **Input**: Strings and characters to append/insert.
- **Output**: Dynamic string buffer object and result strings.
- **Validation**: Check realloc return value != NULL. Check insert index bounds.
- **Edge Cases**: Appending to empty buffer.
Realloc failure handling.
Out-of-bounds insert index.

## Suggested Program Structure
```text
10-Custom-String-Buffer-Library/
├── README.md
├── src/
│   ├── main.c
│   ├── string_builder.c
│   └── string_builder.h
└── tests/
    └── test_string_builder.c
```

## Suggested Functions
- `StringBuilder* sb_create(size_t initial_capacity);`
- `int sb_append(StringBuilder *sb, const char *str);`
- `int sb_insert(StringBuilder *sb, size_t index, const char *str);`
- `void sb_free(StringBuilder *sb);`

## Data Structures
```c
typedef struct { char *data; size_t length; size_t capacity; } StringBuilder;
```

## File Handling
None required.

## Memory Considerations
Proper `malloc` and `realloc` capacity expansion without memory leaks; clean `free()`.

## Error Handling
Return error status code if memory allocation fails or index is out of range.

## Testing Checklist
- [ ] Verify appending string causes buffer to grow dynamically.
- [ ] Verify string data is null-terminated after every operation.
- [ ] Verify calling sb_free deallocates heap buffer with zero leaks.

## Expected Learning Outcomes
- Building self-resizing dynamic data structures in C.
- Designing clean, encapsulated C library APIs.

## Industry Relevance
Mirrors dynamic string builders found in C libraries like GLib (GString) and C++ std::string.

## Interview Relevance
High frequency technical interview topic on dynamic memory allocators and string handling.

## Portfolio Value
Outstanding portfolio project demonstrating low-level C memory management and API design.

## Builds On
- Chapter 08 / Project 05 (string_copy_and_concatenation_tool) - Adds dynamic capacity management and encapsulated string builder API.

## Hints
- **Hint 1**: Hint 1: Multiply capacity by 2 when length + append_len >= capacity.
- **Hint 2**: Hint 2: Use memmove for inserting substrings to handle overlapping memory correctly.
- **Hint 3**: Hint 3: Always verify temp = realloc(sb->data, new_cap) is non-NULL before updating sb->data.

## Optional Extensions
- Add formatted append (sb_appendf).
- Add string search and replace all.

## Completion Criteria
- Correctly resizes heap buffers dynamically, maintains null-termination, and frees memory without leaks.
