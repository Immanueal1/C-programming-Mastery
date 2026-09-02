# CAPSTONE 2 Log Processing Engine

**Difficulty**: Capstone  
**Project Type**: Capstone - Systems / Data Processing  
**Estimated Time**: 10 - 12 hours  

## Objective
Build a log stream processing engine with dynamic filtering pipelines and pattern matching alerts.

## Problem Statement
Develop an enterprise-grade Log Processing Engine (LPE) featuring dynamic pipeline stage execution, string pattern matching callbacks, live alert triggers, stream buffer management, and structured statistical report exporting.

## Why Build This?
Capstone project focusing on software pipeline architecture, function pointer callbacks, stream buffer processing, and systems performance optimization.

## Concepts Used
- Modular Pipeline Architecture
- Function Pointer Stage Callbacks
- Stream Processing Buffers
- System Diagnostics & Analytics

## Prerequisites
Chapters 01–11 complete (Pointers, Structs, Files, Dynamic Memory).

## Requirements
- **Requirement 1**: Build a dynamic processing pipeline where stages are registered as function pointers.
- **Requirement 2**: Stream log data through registered pipeline stages (Filter -> Extract -> Aggregate -> Alert).
- **Requirement 3**: Support pattern matching alert rules (e.g., alert if > 10 ERRORS in 60s).
- **Requirement 4**: Generate JSON and HTML summary analysis reports.

## Functional Requirements
- **Input**: Log stream file paths or stdout pipes.
- **Output**: Filtered streams, alert notifications, JSON/HTML analytics reports.
- **Validation**: Validate pipeline stage registration. Handle broken log streams.
- **Edge Cases**: Empty log stream input.
Pipeline stage failure mid-stream.
High-volume log bursts.

## Suggested Program Structure
```text
16-CAPSTONE-2-Log-Processing-Engine/
├── README.md
├── src/
│   ├── main.c
│   ├── pipeline.c
│   ├── pipeline.h
│   ├── filters.c
│   ├── filters.h
│   ├── report.c
│   └── report.h
└── tests/
    └── test_lpe.c
```

## Suggested Functions
- `Pipeline* lpe_create_pipeline();`
- `int lpe_add_stage(Pipeline *p, int (*stage_func)(LogRecord *rec));`
- `int lpe_process_file(Pipeline *p, const char *filepath);`
- `int lpe_export_json_report(const char *filepath);`

## Data Structures
```c
typedef int (*PipelineStage)(LogRecord *rec);
struct Pipeline { PipelineStage stages[10]; int stage_count; };
```

## File Handling
High-speed line streaming read; JSON/HTML file generation.

## Memory Considerations
Dynamic memory allocation for pipeline structures and records with clean free.

## Error Handling
Graceful error propagation across pipeline execution stages.

## Testing Checklist
- [ ] Verify registering filter stage correctly filters unwanted log records.
- [ ] Verify pipeline passes records sequentially through all registered stages.
- [ ] Verify JSON and HTML report files generate accurate summary metrics.

## Expected Learning Outcomes
- Designing extensible software pipeline architectures using function pointers.
- Building data stream processing engines in C.

## Industry Relevance
Mirrors design of enterprise data processors like Logstash, Fluentd, and Vector.

## Interview Relevance
High impact portfolio project for Systems and Backend C engineering roles.

## Portfolio Value
Tier-1 GitHub portfolio capstone project demonstrating advanced C architecture.

## Builds On
- Chapter 12 / Advanced Project 04 (Log-Analyzer-and-Report-Generator) - Adds modular pipeline execution, pattern matching callbacks, and live alert triggers.

## Hints
- **Hint 1**: Hint 1: Define pipeline stages with function pointer signature: int (*StageFunc)(LogRecord *rec);
- **Hint 2**: Hint 2: Returning 0 from a stage drops the record and stops further pipeline processing for that record.
- **Hint 3**: Hint 3: Keep stream buffers fixed to minimize memory allocation overhead per record.

## Optional Extensions
- Add regex pattern matching engine.
- Add real-time socket log stream listener.

## Completion Criteria
- Executes pipeline stages via function pointers, filters log streams, triggers alerts, and exports JSON/HTML reports.
