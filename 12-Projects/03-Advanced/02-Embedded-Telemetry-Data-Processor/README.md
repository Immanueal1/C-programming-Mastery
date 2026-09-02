# Embedded Telemetry Data Processor

**Difficulty**: Advanced  
**Project Type**: Embedded Systems / Telemetry  
**Estimated Time**: 6 - 8 hours  

## Objective
Build a telemetry stream processor with dynamic ring buffers, window statistics, and anomaly detection.

## Problem Statement
Create a multi-sensor telemetry processor that ingests sensor streams into dynamic ring buffers, computes rolling statistics (min, max, mean, standard deviation), detects data anomalies, and logs alerts.

## Why Build This?
Teaches dynamic ring buffers, mathematical data processing, anomaly detection algorithms, and multi-file embedded C architecture.

## Concepts Used
- Dynamic Ring Buffers
- Mathematical Computations (sqrt, stddev)
- Anomaly Detection Algorithms
- Modular Embedded C Architecture

## Prerequisites
Chapter 06 (Pointers), Chapter 09 (Structures), Chapter 11 (Dynamic Memory).

## Requirements
- **Requirement 1**: Dynamically allocate multi-channel ring buffers for sensor channels.
- **Requirement 2**: Calculate rolling window mean, min, max, and standard deviation.
- **Requirement 3**: Detect telemetry anomalies exceeding 3-sigma thresholds.
- **Requirement 4**: Log anomaly alerts with timestamp to `anomalies.log`.

## Functional Requirements
- **Input**: Sensor reading stream data.
- **Output**: Rolling window statistics, anomaly alert log entries.
- **Validation**: Validate sensor reading bounds before inserting into ring buffer.
- **Edge Cases**: Insufficient samples for stddev (< 2 samples).
Dynamic buffer allocation failure.
Constant zero variance.

## Suggested Program Structure
```text
02-Embedded-Telemetry-Data-Processor/
├── README.md
├── src/
│   ├── main.c
│   ├── telemetry.c
│   └── telemetry.h
└── tests/
    └── test_telemetry.c
```

## Suggested Functions
- `TelemetryBuffer* telemetry_create(size_t capacity);`
- `void telemetry_push(TelemetryBuffer *tb, float value);`
- `float telemetry_calc_stddev(const TelemetryBuffer *tb);`
- `void telemetry_detect_anomalies(TelemetryBuffer *tb, float threshold_sigma);`

## Data Structures
```c
typedef struct { float *buffer; size_t capacity; size_t head; size_t count; } TelemetryBuffer;
```

## File Handling
Append anomaly alerts to text log file.

## Memory Considerations
Dynamic allocation of ring buffer array with explicit `free()` cleanup.

## Error Handling
Return status codes for buffer allocation failures.

## Testing Checklist
- [ ] Verify ring buffer stores readings dynamically up to capacity.
- [ ] Verify standard deviation calculation matches math reference.
- [ ] Verify readings exceeding 3-sigma trigger alert entries in anomalies.log.

## Expected Learning Outcomes
- Dynamic ring buffer implementation in C.
- Mathematical anomaly detection in real-time sensor streams.

## Industry Relevance
Used in flight telemetry systems, industrial IoT monitors, and automotive sensor processing.

## Interview Relevance
High frequency embedded software interview topic covering ring buffers and stream statistics.

## Portfolio Value
Outstanding firmware portfolio project showcasing advanced C telemetry processing.

## Builds On
- Chapter 12 / Medium Project 07 (Sensor-Data-Logger-Simulator) - Adds dynamic heap allocation, mathematical anomaly detection, and alert log generation.

## Hints
- **Hint 1**: Hint 1: Standard deviation formula: sqrt(sum((x - mean)^2) / (N - 1)).
- **Hint 2**: Hint 2: Allocate ring buffer array dynamically using malloc(capacity * sizeof(float)).
- **Hint 3**: Hint 3: Use sqrt() from <math.h> (remember to compile with -lm if on GCC Linux).

## Optional Extensions
- Add FFT frequency analysis stub.
- Add multi-thread safety locks.

## Completion Criteria
- Calculates rolling statistics with math accuracy, detects 3-sigma anomalies, and frees dynamic ring buffer memory.
