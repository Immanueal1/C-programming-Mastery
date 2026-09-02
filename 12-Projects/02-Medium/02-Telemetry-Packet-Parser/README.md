# Telemetry Packet Parser

**Difficulty**: Medium  
**Project Type**: Electronics / Telemetry  
**Estimated Time**: 4 - 5 hours  

## Objective
Parse binary/hex telemetry frame headers, validate checksums, and extract multi-sensor metrics.

## Problem Statement
Develop an industrial telemetry frame parser that reads raw packet streams (containing STX header, packet ID, payload length, payload bytes, and CRC/checksum), verifies integrity, and extracts sensor measurements into structured data.

## Why Build This?
Provides hands-on experience with binary packet framing, byte alignment, checksum validation, and telemetry parsing patterns used in embedded systems.

## Concepts Used
- Bitwise Operations
- Struct Alignment & Packing
- Binary File Reading
- CRC / Checksum Validation

## Prerequisites
Chapter 06 (Pointers), Chapter 09 (Structures), Chapter 10 (File I/O).

## Requirements
- **Requirement 1**: Define `struct TelemetryFrame` matching binary packet header spec (STX=0x02, ID, len, payload, checksum).
- **Requirement 2**: Read binary packet stream from file or hex buffer.
- **Requirement 3**: Compute and compare packet checksum; reject corrupted packets.
- **Requirement 4**: Unpack payload values (temperature, pressure, battery) and print telemetry summary.

## Functional Requirements
- **Input**: Binary telemetry packet stream file.
- **Output**: Parsed telemetry telemetry log summary.
- **Validation**: Reject packets missing STX header byte (0x02). Reject checksum mismatches.
- **Edge Cases**: Truncated packet stream.
Corrupted payload bytes.
Unsupported packet ID.

## Suggested Program Structure
```text
02-Telemetry-Packet-Parser/
├── README.md
├── src/
│   ├── main.c
│   ├── parser.c
│   └── parser.h
└── tests/
    └── test_parser.c
```

## Suggested Functions
- `int parse_telemetry_frame(const unsigned char *buffer, int size, struct TelemetryFrame *out_frame);`
- `unsigned char calculate_frame_checksum(const unsigned char *payload, int len);`
- `void display_telemetry_metrics(const struct TelemetryFrame *frame);`

## Data Structures
```c
struct TelemetryFrame { unsigned char stx; unsigned char id; unsigned char len; float temp; float pressure; unsigned char checksum; };
```

## File Handling
Read binary packet streams using fread in 'rb' mode.

## Memory Considerations
Handle byte alignment and struct member padding using explicit byte offsets.

## Error Handling
Return error codes for ERR_BAD_STX, ERR_CHECKSUM_FAIL, ERR_TRUNCATED_PACKET.

## Testing Checklist
- [ ] Verify valid telemetry frame parses correctly.
- [ ] Verify corrupted checksum packet is rejected.
- [ ] Verify missing STX header byte triggers header error.

## Expected Learning Outcomes
- Parsing low-level binary telemetry protocols.
- Handling byte alignment and bitwise checksum validation.

## Industry Relevance
Directly mirrors packet parsing logic used in automotive (CAN bus), aerospace, and IoT firmware.

## Interview Relevance
Highly relevant for Embedded Systems and Firmware Engineering interviews.

## Portfolio Value
Strong portfolio project showcasing low-level C bit manipulation and binary protocol parsing.

## Builds On
- Chapter 12 / Easy Project 11 (Checksum-8-Calculator) - Adds multi-field packet frame header parsing and corrupt payload rejection.

## Hints
- **Hint 1**: Hint 1: Inspect the first byte for STX marker 0x02 before parsing payload fields.
- **Hint 2**: Hint 2: Pay attention to byte alignment when mapping binary data to struct fields.
- **Hint 3**: Hint 3: Compute checksum over ID + len + payload bytes.

## Optional Extensions
- Add multi-packet stream demultiplexing.
- Add log file report generation.

## Completion Criteria
- Accurately parses valid telemetry frames, flags corrupted packets, and displays extracted sensor metrics.
