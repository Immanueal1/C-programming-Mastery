# CSV to JSON Transpiler CLI

**Difficulty**: Advanced  
**Project Type**: Data Processing / Parsers  
**Estimated Time**: 5 - 7 hours  

## Objective
Build a command-line converter reading CSV files, inferring data types, and formatting JSON files.

## Problem Statement
Create a command-line transpiler tool that reads arbitrary CSV files, parses headers, automatically infers field data types (integers, floats, booleans, strings), formats structured JSON arrays of objects, and outputs `.json` files.

## Why Build This?
Teaches data type inference, dynamic string buffer formatting, JSON syntax escaping, and file transpilation pipelines.

## Concepts Used
- Dynamic Data Parsing
- Data Type Inference Logic
- JSON Syntax Formatting & Escaping
- File Stream Transpilation

## Prerequisites
Chapter 08 (Strings), Chapter 10 (File I/O), Chapter 11 (Dynamic Memory).

## Requirements
- **Requirement 1**: Parse CSV header row to extract field keys.
- **Requirement 2**: Infer field data types for each cell (Integer, Float, Boolean 'true/false', String).
- **Requirement 3**: Escape special characters in string fields (`"`, `\`, `\n`).
- **Requirement 4**: Generate valid, formatted JSON output array `[ {"key"

## Functional Requirements
- **Input**: Input CSV file path, output JSON file path via CLI arguments.
- **Output**: Transpiled, formatted JSON document file.
- **Validation**: Validate input CSV file exists. Check JSON syntax formatting.
- **Edge Cases**: Empty CSV cell (output null).
Strings containing quotes or commas.
Header name with spaces.

## Suggested Program Structure
```text
12-CSV-to-JSON-Transpiler-CLI/
├── README.md
├── src/
│   ├── main.c
│   ├── transpiler.c
│   └── transpiler.h
└── tests/
    └── test_transpiler.c
```

## Suggested Functions
- `int infer_field_type(const char *val_str);`
- `void escape_json_string(const char *input, char *output, size_t max_len);`
- `int transpile_csv_to_json(const char *csv_path, const char *json_path);`

## Data Structures
```c
typedef enum { TYPE_INT, TYPE_FLOAT, TYPE_BOOL, TYPE_STRING, TYPE_NULL } FieldType;
```

## File Handling
Read CSV line by line, write formatted JSON to output file.

## Memory Considerations
Dynamic buffer management for string escaping.

## Error Handling
Return error codes for invalid CSV formatting.

## Testing Checklist
- [ ] Verify integer '123' is emitted without quotes in JSON.
- [ ] Verify float '45.67' is emitted as JSON number.
- [ ] Verify string 'John "Johnny"' is escaped properly as '\"Johnny\"'.

## Expected Learning Outcomes
- Implementing data type inference algorithms.
- Building text format transpilers and JSON generators.

## Industry Relevance
Used in ETL data pipelines, API integrations, and developer data tools.

## Interview Relevance
Data format conversion and string parsing coding interview challenge.

## Portfolio Value
Useful developer utility project demonstrating parser design.

## Builds On
- Chapter 12 / Medium Project 08 (CSV-Data-Filter-CLI) - Adds automatic data type inference, JSON syntax serialization, and dynamic schema parsing.

## Hints
- **Hint 1**: Hint 1: Use strtol and strtod to test if field string represents a valid integer or float.
- **Hint 2**: Hint 2: Format JSON strings wrapped in quotes: "key": "val"; format numbers without quotes: "key": 123.
- **Hint 3**: Hint 3: Emit comma separators between JSON objects, but omit trailing comma after last item.

## Optional Extensions
- Add JSON to CSV reverse transpiler.
- Add pretty-print indentation options.

## Completion Criteria
- Accurately infers field data types, escapes string quotes, generates valid JSON syntax, and writes output file.
