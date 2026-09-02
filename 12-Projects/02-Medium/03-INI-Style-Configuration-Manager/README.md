# INI Style Configuration Manager

**Difficulty**: Medium  
**Project Type**: Configuration Systems / Text Processing  
**Estimated Time**: 3 - 5 hours  

## Objective
Load, query, update, and save INI configuration files containing sections and key=value pairs.

## Problem Statement
Create a configuration management library and CLI tool that parses standard INI configuration files containing `[Section]` headers and `key=value` pairs, allows string/integer queries, updates settings, and writes modified configs back to disk.

## Why Build This?
Teaches text file parsing, string manipulation, structured key-value data models, and dynamic config updating.

## Concepts Used
- File I/O Stream Processing
- String Parsing & Trimming
- Struct Arrays
- Multi-file Architecture

## Prerequisites
Chapter 08 (Strings), Chapter 09 (Structures), Chapter 10 (File I/O).

## Requirements
- **Requirement 1**: Parse INI files containing sections `[Server]` and key-value lines `port=8080`.
- **Requirement 2**: Ignore comment lines starting with ';' or '#'.
- **Requirement 3**: Provide query functions `config_get_string()` and `config_get_int()`.
- **Requirement 4**: Provide update function `config_set()` and save modified configuration back to file.

## Functional Requirements
- **Input**: INI config file path, section name, key name.
- **Output**: Configuration value, updated INI file on save.
- **Validation**: Handle missing sections or keys gracefully. Trim whitespace around keys and values.
- **Edge Cases**: Comments at end of line.
Empty configuration file.
Duplicate key in same section.

## Suggested Program Structure
```text
03-INI-Style-Configuration-Manager/
├── README.md
├── src/
│   ├── main.c
│   ├── config.c
│   └── config.h
└── tests/
    └── test_config.c
```

## Suggested Functions
- `int config_load(const char *filename);`
- `const char* config_get_string(const char *section, const char *key, const char *default_val);`
- `int config_get_int(const char *section, const char *key, int default_val);`
- `int config_save(const char *filename);`

## Data Structures
```c
struct ConfigItem { char key[64]; char value[128]; };
struct ConfigSection { char name[64]; struct ConfigItem items[30]; int item_count; };
```

## File Handling
Read line-by-line using fgets, strip newlines, and parse headers and key-value pairs.

## Memory Considerations
Static struct allocation or dynamic array of sections.

## Error Handling
Return default values if requested key or section does not exist.

## Testing Checklist
- [ ] Verify loading sample.ini extracts section names and key-values.
- [ ] Verify comments starting with ; are ignored.
- [ ] Verify modifying port=9090 updates config and saves correctly.

## Expected Learning Outcomes
- Building robust text configuration parsers.
- Managing hierarchical struct lookup tables.

## Industry Relevance
Used extensively in desktop applications, game engines, and Linux system services.

## Interview Relevance
Excellent interview project demonstrating string parsing and modular C library design.

## Portfolio Value
High value utility library for GitHub showcase.

## Builds On
- Chapter 12 / Easy Project 06 (Simple-Config-Key-Value-Extractor) - Adds section hierarchy, in-memory struct table, and file updating.

## Hints
- **Hint 1**: Hint 1: Use sscanf or strchr to detect section brackets '[' and ']'.
- **Hint 2**: Hint 2: Write a helper function to trim whitespace from both ends of a string.
- **Hint 3**: Hint 3: Store active section state as you iterate through lines of the INI file.

## Optional Extensions
- Add support for type conversion to float and boolean.
- Add sub-section inheritance.

## Completion Criteria
- Parses multi-section INI files, returns requested setting values, and saves updated settings cleanly.
