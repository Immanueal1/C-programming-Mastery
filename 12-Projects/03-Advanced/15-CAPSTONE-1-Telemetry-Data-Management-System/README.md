# CAPSTONE 1 Telemetry Data Management System

**Difficulty**: Capstone  
**Project Type**: Capstone - Telemetry / Systems  
**Estimated Time**: 10 - 12 hours  

## Objective
Build an enterprise multi-device telemetry system with streaming, threshold alerts, and binary history.

## Problem Statement
Construct a full-scale Telemetry Data Management System (TDMS) that ingests telemetry streams from multiple remote devices, monitors real-time threshold breaches, computes channel statistics, archives binary history logs, and generates analytical reports.

## Why Build This?
Capstone integration project combining multi-module C architecture, dynamic memory management, binary file persistence, statistical analysis, and fault-tolerant error handling.

## Concepts Used
- Multi-Module C Architecture
- Dynamic Memory Allocation
- Binary File Persistence
- Statistical Stream Analysis
- Fault-Tolerant Error Handling

## Prerequisites
Chapters 01–11 complete (Pointers, Structs, Files, Dynamic Memory).

## Requirements
- **Requirement 1**: Manage multiple device channels using dynamic struct arrays.
- **Requirement 2**: Ingest binary telemetry frames and validate packet checksums.
- **Requirement 3**: Compute real-time rolling metrics (Min, Max, Avg, Variance) per channel.
- **Requirement 4**: Archive binary telemetry logs to `telemetry.bin` with random index lookup.
- **Requirement 5**: Provide interactive CLI management shell and export HTML alert reports.

## Functional Requirements
- **Input**: Binary telemetry frames, CLI commands.
- **Output**: Live metrics dashboard, archived binary database, HTML alert report.
- **Validation**: Check frame checksums. Validate channel registration. Prevent dynamic allocation leaks.
- **Edge Cases**: Device stream disconnection.
Corrupted binary frame payload.
Heap memory exhaustion.

## Suggested Program Structure
```text
15-CAPSTONE-1-Telemetry-Data-Management-System/
├── README.md
├── src/
│   ├── main.c
│   ├── telemetry_engine.c
│   ├── telemetry_engine.h
│   ├── storage.c
│   ├── storage.h
│   ├── analytics.c
│   └── analytics.h
└── tests/
    └── test_tdms.c
```

## Suggested Functions
- `int tdms_init();`
- `int tdms_process_frame(const unsigned char *frame_bytes, size_t len);`
- `int tdms_save_archive(const char *filename);`
- `void tdms_generate_html_report(const char *filename);`
- `void tdms_shutdown();`

## Data Structures
```c
struct ChannelStats { int channel_id; float min_val; float max_val; float avg_val; int alert_count; };
struct TDMS { struct ChannelStats *channels; size_t count; size_t capacity; };
```

## File Handling
Binary append and random index read/write for telemetry archive file.

## Memory Considerations
Full dynamic memory management with strict allocation checks and complete deallocation on shutdown.

## Error Handling
Centralized error logging module returning structured status codes.

## Testing Checklist
- [ ] Verify ingestion of binary telemetry frames updates channel statistics in real time.
- [ ] Verify binary archive stores frames and allows historical retrieval.
- [ ] Verify shutdown cleanly frees all dynamic heap allocations with 0 memory leaks.

## Expected Learning Outcomes
- Designing production-grade multi-module C systems.
- Combining real-time telemetry processing with binary data persistence.

## Industry Relevance
Directly representative of industrial IoT gateways, aerospace telemetry systems, and automotive ECU logs.

## Interview Relevance
Flagship portfolio capstone project for Embedded and Systems C engineering interviews.

## Portfolio Value
Tier-1 GitHub portfolio capstone project showcasing full C language mastery.

## Builds On
- Chapter 12 / Advanced Project 02 (Embedded-Telemetry-Data-Processor) - Adds multi-device tracking, binary stream storage, fault-tolerant error logs, and multi-file architecture.

## Hints
- **Hint 1**: Hint 1: Modularize system into 3 sub-modules: Ingestion (telemetry_engine), Persistence (storage), Analysis (analytics).
- **Hint 2**: Hint 2: Use binary file index table for fast historical frame lookup.
- **Hint 3**: Hint 3: Run Valgrind or compiler sanitizers to verify zero memory leaks.

## Optional Extensions
- Add multi-threaded worker thread pool.
- Add socket network stream listener stub.

## Completion Criteria
- Multi-module architecture compiles cleanly, processes telemetry frames, archives binary data, and operates leak-free.
