# Log File Severity Filter

**Difficulty**: Medium  
**Project Type**: Systems Utility / CLI Tool  
**Estimated Time**: 3 - 4 hours  

## Objective
Process server logs, filter by severity level, and generate filtered log reports via CLI flags.

## Problem Statement
Build a command-line log filtering utility that processes system log files, parses log levels (INFO, WARN, ERROR, FATAL), filters logs based on CLI argument flags (e.g., `--level ERROR`), and outputs matching entries to stdout or a summary file.

## Why Build This?
Teaches CLI argument parsing (argc/argv), file stream processing, string matching, and automated report generation.

## Concepts Used
- Command-Line Arguments (argc, argv)
- File I/O Stream Filtering
- String Comparison & Search
- Modular C Architecture

## Prerequisites
Chapter 08 (Strings), Chapter 10 (File I/O).

## Requirements
- **Requirement 1**: Parse CLI flags `--file <path>` and `--level <INFO|WARN|ERROR|FATAL>`.
- **Requirement 2**: Read log file line by line.
- **Requirement 3**: Filter and extract log entries matching or exceeding specified severity level.
- **Requirement 4**: Write summary report file with entry counts and matched log records.

## Functional Requirements
- **Input**: Log file path and minimum severity level via CLI flags.
- **Output**: Filtered log lines printed to console or written to filtered_log.txt.
- **Validation**: Validate log file existence. Validate severity level argument.
- **Edge Cases**: Malformed log line missing level tag.
Log file larger than 10MB.
No matching logs found.

## Suggested Program Structure
```text
04-Log-File-Severity-Filter/
├── README.md
├── src/
│   ├── main.c
│   ├── filter.c
│   └── filter.h
└── tests/
    └── test_filter.c
```

## Suggested Functions
- `int parse_cli_args(int argc, char *argv[], char *file_path, int *min_level);`
- `int filter_log_file(const char *input_file, int min_level, const char *output_file);`
- `int severity_to_int(const char *level_str);`

## Data Structures
```c
enum LogLevel { LEVEL_INFO=1, LEVEL_WARN=2, LEVEL_ERROR=3, LEVEL_FATAL=4 };
struct LogEntry { char timestamp[32]; enum LogLevel level; char message[256]; };
```

## File Handling
Line-by-line processing using fgets and file stream writing with fprintf.

## Memory Considerations
Process log files in stream buffer chunks without loading entire file into RAM.

## Error Handling
Handle missing CLI arguments with usage help screen.

## Testing Checklist
- [ ] Verify CLI flag parsing extracts file path and severity level.
- [ ] Verify filtering for ERROR outputs ERROR and FATAL entries only.
- [ ] Verify non-existent file produces clean error message.

## Expected Learning Outcomes
- Parsing CLI arguments using argc and argv.
- Efficient stream processing for large files.

## Industry Relevance
Mirrors core functionality of Linux log monitoring utilities like grep and journalctl.

## Interview Relevance
Common systems programming interview exercise.

## Portfolio Value
Demonstrates practical CLI tool design and file stream handling.

## Builds On
- Chapter 10 / Project 04 (the_log_appender_utility) - Adds CLI flag parsing, multi-level filtering, and output report generation.

## Hints
- **Hint 1**: Hint 1: Convert severity strings to numeric enum values for easy >= comparison.
- **Hint 2**: Hint 2: Parse CLI args by looping through argv[1] to argv[argc-1].
- **Hint 3**: Hint 3: Use strstr to locate severity tags like "[ERROR]" in each line.

## Optional Extensions
- Add timestamp date range filtering.
- Add regex matching support.

## Completion Criteria
- Correctly parses command-line arguments, filters log streams by severity level, and generates clean output summaries.
