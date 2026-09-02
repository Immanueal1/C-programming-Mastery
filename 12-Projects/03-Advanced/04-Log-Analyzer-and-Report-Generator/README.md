# Log Analyzer and Report Generator

**Difficulty**: Advanced  
**Project Type**: Data Processing / Systems Utility  
**Estimated Time**: 6 - 8 hours  

## Objective
High-throughput log parser extracting IPs, status codes, and error rates into HTML reports.

## Problem Statement
Create a high-performance log stream parser capable of processing large log files, extracting IP addresses, HTTP status codes, error rates, and response time metrics, and compiling formatted HTML analytics reports.

## Why Build This?
Teaches high-throughput stream parsing, dynamic hash/lookup tables, string tokenization, and HTML report formatting.

## Concepts Used
- Stream Parsing
- Dynamic Memory Buffers
- Data Aggregation & Lookup Tables
- HTML File Generation

## Prerequisites
Chapter 08 (Strings), Chapter 10 (File I/O), Chapter 11 (Dynamic Memory).

## Requirements
- **Requirement 1**: Parse web server access log lines (Nginx/Apache format).
- **Requirement 2**: Extract client IP, HTTP method, URL path, status code, and response bytes.
- **Requirement 3**: Compute top 10 requesting IP addresses and 4xx/5xx error rates.
- **Requirement 4**: Generate an HTML summary report (`report.html`) with styled table metrics.

## Functional Requirements
- **Input**: Access log file path.
- **Output**: Console summary, generated HTML analytics report file.
- **Validation**: Handle malformed log lines gracefully without halting log stream.
- **Edge Cases**: Large log file (> 100MB).
Log entries with missing status codes.
First-time IP table allocation.

## Suggested Program Structure
```text
04-Log-Analyzer-and-Report-Generator/
├── README.md
├── src/
│   ├── main.c
│   ├── log_analyzer.c
│   └── log_analyzer.h
└── tests/
    └── test_log_analyzer.c
```

## Suggested Functions
- `int parse_log_stream(const char *log_filepath);`
- `void record_ip_request(const char *ip_str);`
- `int generate_html_report(const char *output_filepath);`

## Data Structures
```c
struct IPEntry { char ip[32]; int request_count; };
struct LogStats { struct IPEntry *ips; size_t ip_count; size_t ip_capacity; int status_200; int status_404; int status_500; };
```

## File Handling
Stream read access logs using fgets and write HTML report using fprintf.

## Memory Considerations
Dynamic array reallocation for unique IP tracking table.

## Error Handling
Log malformed line count and skip unparseable lines.

## Testing Checklist
- [ ] Verify access log lines correctly extract IP address and status code.
- [ ] Verify IP request counter increments for repeated IPs.
- [ ] Verify HTML report file generates with valid <table> syntax.

## Expected Learning Outcomes
- Building high-performance log parsing engines.
- Generating formatted HTML reporting assets from C.

## Industry Relevance
Mirrors real-world web analytics log processors like GoAccess and Awstats.

## Interview Relevance
Data aggregation and log processing interview task.

## Portfolio Value
High value systems utility project producing visual HTML reports.

## Builds On
- Chapter 12 / Medium Project 04 (Log-File-Severity-Filter) - Adds IP extraction, status code bucket aggregation, and HTML formatted report generation.

## Hints
- **Hint 1**: Hint 1: Use sscanf or strchr to parse space-delimited access log fields.
- **Hint 2**: Hint 2: Maintain a dynamic array of IP structs and realloc as new unique IPs are discovered.
- **Hint 3**: Hint 3: Use fprintf HTML tags (<table>, <tr>, <td>) to format the output report.

## Optional Extensions
- Add bandwidth usage statistics.
- Add log file timestamp range filtering.

## Completion Criteria
- Streams large log files efficiently, aggregates IP/status code metrics, and writes styled HTML summary report.
