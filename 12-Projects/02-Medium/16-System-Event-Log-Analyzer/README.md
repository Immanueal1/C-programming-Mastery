# System Event Log Analyzer

**Difficulty**: Medium  
**Project Type**: Systems Utility / Data Processing  
**Estimated Time**: 4 - 5 hours  

## Objective
Parse system logs, aggregate event frequency by error code, and generate statistical summary reports.

## Problem Statement
Create a system log analytics engine that parses log files containing event codes, timestamp records, and subsystem names, aggregates event frequencies into statistical buckets, and generates a formatted analytical summary report.

## Why Build This?
Teaches log record aggregation, statistical bucket counting, struct table summary generation, and data reporting.

## Concepts Used
- Struct Aggregation Tables
- Data Processing
- File Streams
- Array Sorting

## Prerequisites
Chapter 07 (Arrays), Chapter 09 (Structures), Chapter 10 (File I/O).

## Requirements
- **Requirement 1**: Parse system log lines matching format
- **Requirement 2**: Aggregate event code occurrences into an event statistics table.
- **Requirement 3**: Compute top 5 most frequent system failure codes.
- **Requirement 4**: Generate formatted analytics summary report to text file.

## Functional Requirements
- **Input**: System log file path.
- **Output**: Event frequency table, Top 5 error report file.
- **Validation**: Skip unparseable log lines while counting malformed line errors.
- **Edge Cases**: Log file with no error events.
More than 50 unique event codes.
Log file ending abruptly.

## Suggested Program Structure
```text
16-System-Event-Log-Analyzer/
├── README.md
├── src/
│   ├── main.c
│   ├── analyzer.c
│   └── analyzer.h
└── tests/
    └── test_analyzer.c
```

## Suggested Functions
- `int parse_log_file(const char *filename);`
- `void aggregate_event_code(int event_code, const char *subsystem);`
- `void sort_events_by_frequency();`
- `int write_analytics_report(const char *output_file);`

## Data Structures
```c
struct EventStat { int event_code; char subsystem[32]; int occurrence_count; };
```

## File Handling
Read log lines using fgets, write analytical report with fprintf.

## Memory Considerations
Static struct aggregation table array.

## Error Handling
Report malformed line counts at end of analysis.

## Testing Checklist
- [ ] Verify event counts correctly increment for duplicate event codes.
- [ ] Verify Top 5 report ranks events by highest frequency count.
- [ ] Verify malformed lines are skipped without crashing parser.

## Expected Learning Outcomes
- Data aggregation techniques in procedural C.
- Generating statistical analytics summaries from raw log streams.

## Industry Relevance
Used in system monitoring dashboards, DevOps log analyzers, and IT infrastructure tools.

## Interview Relevance
Standard data processing and frequency sorting interview challenge.

## Portfolio Value
Practical systems tool showcasing C data processing skills.

## Builds On
- Chapter 10 / Project 05 (integer_file_summation) - Adds log record parsing, hourly bucket statistics, and report generation.

## Hints
- **Hint 1**: Hint 1: Use sscanf with format string to extract timestamp, subsystem, and event code.
- **Hint 2**: Hint 2: Search event stats array for existing event code before creating a new entry.
- **Hint 3**: Hint 3: Sort event stats array descending by occurrence_count.

## Optional Extensions
- Add hourly distribution histogram.
- Add CSV summary report output.

## Completion Criteria
- Accurately aggregates event occurrences, identifies top error codes, and exports formatted summary report.
