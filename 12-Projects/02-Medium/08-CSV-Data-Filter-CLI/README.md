# CSV Data Filter CLI

**Difficulty**: Medium  
**Project Type**: Data Processing / CLI Tool  
**Estimated Time**: 4 - 5 hours  

## Objective
Build a command-line CSV processing tool to filter rows based on column index and criteria.

## Problem Statement
Create a CLI data processing utility that reads arbitrary CSV files, parses column headers, filters rows matching user-specified criteria (e.g. `--column 2 --gt 50`), and outputs matching records to stdout or a file.

## Why Build This?
Teaches file streaming, dynamic CSV parsing, string tokenization, CLI flag evaluation, and dynamic data filtering.

## Concepts Used
- File I/O Stream Processing
- String Tokenization & Parsing
- Command-Line Arguments
- Dynamic Filtering Logic

## Prerequisites
Chapter 08 (Strings), Chapter 10 (File I/O).

## Requirements
- **Requirement 1**: Parse CLI flags `--file <path>`, `--col <index>`, `--gt <val>`, `--lt <val>`, `--eq <val>`.
- **Requirement 2**: Read CSV file header row and map column names to indices.
- **Requirement 3**: Stream and filter data rows against numerical or string filter conditions.
- **Requirement 4**: Output filtered CSV results with count summary.

## Functional Requirements
- **Input**: CSV file path and filter flags via CLI arguments.
- **Output**: Filtered CSV rows printed to console or output file.
- **Validation**: Validate column index exists in CSV header. Validate numerical filter values.
- **Edge Cases**: Non-numeric value in numerical filter column.
CSV row with missing fields.
Large CSV file with > 100,000 rows.

## Suggested Program Structure
```text
08-CSV-Data-Filter-CLI/
├── README.md
├── src/
│   ├── main.c
│   ├── csv_filter.c
│   └── csv_filter.h
└── tests/
    └── test_csv_filter.c
```

## Suggested Functions
- `int parse_csv_header(const char *header_line, char headers[][64], int *col_count);`
- `int evaluate_row_filter(const char *field_val, int op_type, double threshold);`
- `int process_csv_file(const char *filepath, int col_idx, int op_type, double threshold);`

## Data Structures
```c
struct FilterRule { int col_index; int op_type; double num_val; char str_val[64]; };
```

## File Handling
Stream CSV file line-by-line using fgets to handle arbitrary file sizes.

## Memory Considerations
Avoid loading entire CSV file into memory; process line by line.

## Error Handling
Report invalid CLI syntax or unreadable CSV file path.

## Testing Checklist
- [ ] Verify column header parsing maps names to correct indices.
- [ ] Verify --col 2 --gt 50 filters rows where column 2 > 50.
- [ ] Verify handles missing fields in CSV rows gracefully.

## Expected Learning Outcomes
- Building command-line data tools.
- Stream processing large text datasets in C.

## Industry Relevance
Mirrors functionality of Linux data utilities like awk, cut, and datamash.

## Interview Relevance
Great portfolio project demonstrating string parsing and stream file processing.

## Portfolio Value
Practical CLI utility showcasing C data processing capabilities.

## Builds On
- Chapter 12 / Easy Project 12 (Basic-CSV-Row-Parser) - Adds multi-row stream filtering, column index targeting, and CLI argument handling.

## Hints
- **Hint 1**: Hint 1: Use strtok or custom loop scanner to tokenize CSV lines.
- **Hint 2**: Hint 2: Convert field value to float using atof or strtod for numeric comparisons.
- **Hint 3**: Hint 3: Process row-by-row to maintain memory efficiency.

## Optional Extensions
- Add multi-column combined AND/OR filter logic.
- Add CSV sorting by column.

## Completion Criteria
- Accurately tokenizes CSV headers and rows, applies comparison filter rules, and streams large CSV files efficiently.
