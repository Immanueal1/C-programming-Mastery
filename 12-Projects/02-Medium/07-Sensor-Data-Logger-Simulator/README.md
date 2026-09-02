# Sensor Data Logger Simulator

**Difficulty**: Medium  
**Project Type**: Embedded Simulation  
**Estimated Time**: 4 - 5 hours  

## Objective
Simulate periodic multi-channel sensor logging into a rolling ring buffer and log to file.

## Problem Statement
Create an embedded logging simulator that acquires periodic readings from multi-channel sensors (Temperature, Humidity, Pressure), stores readings in a circular ring buffer, computes moving averages, and appends logs to `sensor_log.txt`.

## Why Build This?
Teaches circular ring buffer data structures, multi-channel data aggregation, moving average calculations, and embedded log file handling.

## Concepts Used
- Circular Ring Buffer
- Struct Arrays
- File I/O (Append Mode)
- Modular Drivers

## Prerequisites
Chapter 07 (Arrays), Chapter 09 (Structures), Chapter 10 (File I/O).

## Requirements
- **Requirement 1**: Define `struct SensorReading` (timestamp, channel_id, temp, humidity, pressure).
- **Requirement 2**: Implement a circular ring buffer of size 10 to hold recent readings.
- **Requirement 3**: Calculate 5-sample moving average for each sensor channel.
- **Requirement 4**: Append timestamped telemetry entries to `sensor_log.txt`.

## Functional Requirements
- **Input**: Simulated sensor readings or manual sample input.
- **Output**: Ring buffer state, moving averages, appended log file records.
- **Validation**: Validate channel ID bounds. Validate sensor physical ranges.
- **Edge Cases**: Ring buffer overflow (oldest element overwritten correctly).
First 4 samples before 5-sample moving window is full.

## Suggested Program Structure
```text
07-Sensor-Data-Logger-Simulator/
├── README.md
├── src/
│   ├── main.c
│   ├── logger.c
│   └── logger.h
└── tests/
    └── test_logger.c
```

## Suggested Functions
- `void ring_buffer_push(const struct SensorReading *reading);`
- `float calculate_moving_average(int channel_id, int window_size);`
- `int append_sensor_log(const char *filename, const struct SensorReading *reading);`

## Data Structures
```c
struct RingBuffer { struct SensorReading buffer[10]; int head; int tail; int count; };
```

## File Handling
Append sensor records to text log file using fopen with 'a' mode.

## Memory Considerations
Fixed circular buffer allocation without memory leaks.

## Error Handling
Gracefully handle buffer full state by overwriting oldest entry.

## Testing Checklist
- [ ] Verify ring buffer overwrites oldest reading when pushing 11th sample.
- [ ] Verify 5-sample moving average calculation is accurate.
- [ ] Verify log file appends continuous entries without truncating existing logs.

## Expected Learning Outcomes
- Implementing circular ring buffers in C.
- Continuous stream logging for embedded systems.

## Industry Relevance
Essential data structure for telemetry loggers, audio buffers, and network packet drivers.

## Interview Relevance
Circular buffer implementation is a classic embedded software interview question.

## Portfolio Value
High value embedded C portfolio project showcasing ring buffer mechanics.

## Builds On
- Chapter 12 / Easy Project 09 (Sensor-Range-Validator) - Adds multi-channel struct records, circular buffer windowing, and continuous log appends.

## Hints
- **Hint 1**: Hint 1: Use head = (head + 1) % BUFFER_SIZE to advance ring buffer pointer.
- **Hint 2**: Hint 2: Track count = min(count + 1, BUFFER_SIZE) for buffer status.
- **Hint 3**: Hint 3: Append log entries using timestamp formatting.

## Optional Extensions
- Add CSV log export.
- Add alarm threshold event callback.

## Completion Criteria
- Correctly manages ring buffer overwrites, calculates moving averages accurately, and logs continuously to file.
