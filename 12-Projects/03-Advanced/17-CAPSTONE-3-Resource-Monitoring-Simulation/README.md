# CAPSTONE 3 Resource Monitoring Simulation

**Difficulty**: Capstone  
**Project Type**: Capstone - Systems Simulation  
**Estimated Time**: 10 - 12 hours  

## Objective
Build a real-time system resource monitor simulator tracking CPU, RAM, Disk, and Network with CLI dashboards.

## Problem Statement
Create a real-time Resource Monitoring Simulator (RMS) that tracks system metrics (CPU usage %, RAM memory blocks, Disk I/O, Network packet rates) over time, maintains historical telemetry buffers, renders an interactive CLI dashboard, and logs telemetry snapshots to disk.

## Why Build This?
Capstone project integrating real-time telemetry simulation, dynamic history buffers, CLI dashboard UI formatting, alert thresholds, and persistent logging.

## Concepts Used
- Resource Simulation State Engine
- Dynamic History Ring Buffers
- CLI Terminal UI Formatting
- File Telemetry Logging

## Prerequisites
Chapters 01–11 complete (Pointers, Structs, Files, Dynamic Memory).

## Requirements
- **Requirement 1**: Simulate CPU, RAM, Disk, and Network telemetry metric generators.
- **Requirement 2**: Store 60-second historical metrics in dynamic ring buffers for trend analysis.
- **Requirement 3**: Render an interactive CLI dashboard showing metric progress bars and status.
- **Requirement 4**: Log critical resource threshold alerts (e.g. CPU > 90%) to `system_alerts.log`.

## Functional Requirements
- **Input**: Simulation tick events, threshold configurations.
- **Output**: Interactive CLI metrics dashboard, historical ring buffers, log file.
- **Validation**: Validate threshold settings. Ensure metric percentages remain bounded 0-100%.
- **Edge Cases**: Simulated resource spike to 100%.
Terminal resize or small display size.
Log file append failure.

## Suggested Program Structure
```text
17-CAPSTONE-3-Resource-Monitoring-Simulation/
├── README.md
├── src/
│   ├── main.c
│   ├── monitor.c
│   ├── monitor.h
│   ├── dashboard.c
│   ├── dashboard.h
│   ├── metrics_log.c
│   └── metrics_log.h
└── tests/
    └── test_rms.c
```

## Suggested Functions
- `int rms_init();`
- `void rms_tick_simulation();`
- `void rms_render_dashboard();`
- `int rms_log_snapshot(const char *filename);`

## Data Structures
```c
struct MetricHistory { float cpu_history[60]; float ram_history[60]; int head; };
struct SystemState { float cpu_pct; float ram_used_mb; float disk_io_mbps; struct MetricHistory history; };
```

## File Handling
Append snapshot logs and alert events to text file.

## Memory Considerations
Dynamic memory allocation for history buffers with complete free on exit.

## Error Handling
Graceful handling of simulation state boundaries.

## Testing Checklist
- [ ] Verify simulation ticks update metric values and historical ring buffers.
- [ ] Verify CLI dashboard renders progress bars `[████░░░░░░]` matching percentages.
- [ ] Verify CPU usage exceeding threshold triggers alert log entry.

## Expected Learning Outcomes
- Building real-time system monitoring simulations in C.
- Formatting interactive CLI progress bars and dashboards.

## Industry Relevance
Mirrors functionality of Linux system monitors like htop, top, and Glances.

## Interview Relevance
High impact portfolio project for Systems Engineering and DevOps C roles.

## Portfolio Value
Tier-1 GitHub portfolio capstone project with visual CLI dashboard presentation.

## Builds On
- Chapter 12 / Advanced Project 07 (CLI-Process-Task-Scheduler-Simulator) - Adds real-time resource metric tracking, historical buffer rollbacks, and interactive CLI dashboard rendering.

## Hints
- **Hint 1**: Hint 1: Render progress bar strings using a loop printing '=' or '#' characters based on percentage.
- **Hint 2**: Hint 2: Store rolling 60-second metrics using circular ring buffer index math.
- **Hint 3**: Hint 3: Use ANSI escape sequences (e.g. "\033[H\033[J") to refresh CLI dashboard cleanly.

## Optional Extensions
- Add process table process-list simulator.
- Add CSV history log exporter.

## Completion Criteria
- Simulates system metrics smoothly, maintains historical ring buffers, renders CLI dashboard, and logs alert events.
