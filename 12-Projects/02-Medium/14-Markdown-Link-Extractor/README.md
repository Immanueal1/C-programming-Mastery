# Markdown Link Extractor

**Difficulty**: Medium  
**Project Type**: Text Processing / Parsers  
**Estimated Time**: 4 - 5 hours  

## Objective
Scan Markdown files for [anchor](URL) links, extract text/URLs, and validate URL schemes.

## Problem Statement
Develop a text parsing tool that scans Markdown (`.md`) files, extracts all hyperlinked anchor texts and URLs formatted as `[anchor text](URL)`, validates URL schemes (`http`, `https`, relative paths), and outputs a link audit report.

## Why Build This?
Teaches text stream scanning, multi-character delimiter state parsing, character buffers, and report generation.

## Concepts Used
- File Stream Parsing
- String State Machines
- Character Buffers & Pointers
- Report Writing

## Prerequisites
Chapter 08 (Strings), Chapter 10 (File I/O).

## Requirements
- **Requirement 1**: Read Markdown file line by line.
- **Requirement 2**: Detect Markdown link pattern `[text](url)` using state scanning.
- **Requirement 3**: Extract anchor text into anchor_buffer and URL into url_buffer.
- **Requirement 4**: Classify URL scheme (HTTP/HTTPS, Relative File Path, Anchor Link `#`).
- **Requirement 5**: Write link summary audit report to console or file.

## Functional Requirements
- **Input**: Markdown file path.
- **Output**: Extracted links list, URL scheme breakdown, link audit report.
- **Validation**: Ignore image syntax `![alt](url)`. Handle nested brackets gracefully.
- **Edge Cases**: Malformed link syntax `[text(url)`.
Escaped brackets `\[text\]`.
Empty anchor text `[](url)`.

## Suggested Program Structure
```text
14-Markdown-Link-Extractor/
├── README.md
├── src/
│   ├── main.c
│   ├── md_parser.c
│   └── md_parser.h
└── tests/
    └── test_md_parser.c
```

## Suggested Functions
- `int parse_markdown_links(const char *filename, struct MarkdownLink links[], int max_links);`
- `int classify_url_scheme(const char *url);`
- `void print_link_report(const struct MarkdownLink links[], int count);`

## Data Structures
```c
struct MarkdownLink { char anchor_text[128]; char url[256]; int line_number; int scheme_type; };
```

## File Handling
Read Markdown text stream line by line with line counter tracking.

## Memory Considerations
Static or dynamic struct array link storage.

## Error Handling
Report unreadable Markdown file path or empty file.

## Testing Checklist
- [ ] Verify extracting link from `[Google](https://google.com)` extracts anchor 'Google' and URL 'https://google.com'.
- [ ] Verify image syntax `![img](photo.png)` is ignored.
- [ ] Verify line numbers of extracted links match source file.

## Expected Learning Outcomes
- Implementing state-machine text syntax scanners.
- Classifying extracted text substrings by protocol scheme.

## Industry Relevance
Used in static site generators, documentation linters, and web crawlers.

## Interview Relevance
Text parsing and string state machine problem common in software interviews.

## Portfolio Value
Useful developer documentation tool for GitHub showcase.

## Builds On
- Chapter 08 / Project 01 (string_information_analyzer) - Adds multi-character delimiter state scanning and URL scheme validation.

## Hints
- **Hint 1**: Hint 1: Look for '[' preceded by characters other than '!'.
- **Hint 2**: Hint 2: Use pointer state scanner to track state transitions: OUTSIDE -> IN_ANCHOR -> BETWEEN -> IN_URL.
- **Hint 3**: Hint 3: Use strncmp to check URL prefixes like "http://" or "https://".

## Optional Extensions
- Add HTTP status code link checker using libcurl (optional).
- Add broken relative file link verifier.

## Completion Criteria
- Accurately extracts Markdown links with line numbers, ignores image syntax, and classifies URL schemes correctly.
