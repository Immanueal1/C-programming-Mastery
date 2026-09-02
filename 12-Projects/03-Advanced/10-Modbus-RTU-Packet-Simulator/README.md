# Modbus RTU Packet Simulator

**Difficulty**: Advanced  
**Project Type**: Electronics / Industrial Protocols  
**Estimated Time**: 6 - 8 hours  

## Objective
Simulate industrial Modbus RTU protocol: frame packing, CRC-16 calculation, slave register reading/writing, and error exception frames.

## Problem Statement
Create an industrial Modbus RTU protocol simulator that constructs master request frames, computes CRC-16 checksums, simulates slave register memory, processes function codes (03 Read Holding Registers, 06 Write Single Register), and generates response or exception frames.

## Why Build This?
Teaches industrial serial protocol framing, CRC-16 polynomial math, bitwise byte manipulation, slave register simulation, and industrial exception handling.

## Concepts Used
- Bitwise Operations & Shift Math
- CRC-16 Polynomial Calculation
- Binary Protocol Frame Packing
- Industrial Firmware State Machines

## Prerequisites
Chapter 02 (Operators), Chapter 06 (Pointers), Chapter 09 (Structures).

## Requirements
- **Requirement 1**: Define `struct ModbusFrame` (slave_addr, function_code, start_reg, reg_count, data[], crc).
- **Requirement 2**: Calculate Modbus CRC-16 polynomial (0xA001) over frame bytes.
- **Requirement 3**: Simulate slave device holding registers array `uint16_t holding_registers[100]`.
- **Requirement 4**: Handle Function Code 03 (Read Holding Regs) and Function Code 06 (Write Single Reg).
- **Requirement 5**: Return Modbus exception frames (0x80 | FC, exception_code) for invalid requests.

## Functional Requirements
- **Input**: Master request frame bytes or parameters.
- **Output**: Calculated CRC-16, Slave response frame bytes, register dump.
- **Validation**: Validate slave address matches (or broadcast). Validate CRC-16 of request frame.
- **Edge Cases**: Invalid CRC-16 in request frame.
Register index out of bounds (return Exception 0x02).
Illegal function code (return Exception 0x01).

## Suggested Program Structure
```text
10-Modbus-RTU-Packet-Simulator/
├── README.md
├── src/
│   ├── main.c
│   ├── modbus.c
│   └── modbus.h
└── tests/
    └── test_modbus.c
```

## Suggested Functions
- `uint16_t modbus_crc16(const unsigned char *buffer, int len);`
- `int modbus_build_read_req(unsigned char *out_frame, uint8_t slave, uint16_t reg, uint16_t count);`
- `int modbus_slave_process(const unsigned char *req, int req_len, unsigned char *resp_out);`

## Data Structures
```c
struct ModbusSlave {
  uint8_t address;
  uint16_t registers[100];
};
```

## File Handling
Optional logging of Modbus RTU communication frames to text log file.

## Memory Considerations
Fixed binary frame buffer allocation.

## Error Handling
Generate standard Modbus exception frames for protocol errors.

## Testing Checklist
- [ ] Verify CRC-16 function matches standard Modbus RTU CRC calculation test vector.
- [ ] Verify Function Code 03 response frame contains requested register values.
- [ ] Verify reading out-of-range register index returns Exception Code 0x02 (Illegal Data Address).

## Expected Learning Outcomes
- Implementing industrial serial protocols in C.
- Calculating CRC-16 checksums and handling industrial exception responses.

## Industry Relevance
Widely used in industrial automation, SCADA systems, PLCs, solar inverters, and building automation.

## Interview Relevance
High value interview project for Industrial Firmware and Embedded Systems Engineering roles.

## Portfolio Value
Outstanding industrial C portfolio project demonstrating protocol driver development.

## Builds On
- Chapter 12 / Medium Project 02 (Telemetry-Packet-Parser) - Adds CRC-16 calculation, industrial function code handling, and exception error frames.

## Hints
- **Hint 1**: Hint 1: Modbus CRC-16 uses polynomial 0xA001 with initial value 0xFFFF.
- **Hint 2**: Hint 2: Note big-endian byte ordering for 16-bit register values in Modbus frames.
- **Hint 3**: Hint 3: Exception response sets highest bit of function code: response_fc = function_code | 0x80.

## Optional Extensions
- Add Function Code 16 (Write Multiple Registers).
- Add RS485 half-duplex direction control simulation.

## Completion Criteria
- Computes CRC-16 polynomial accurately, processes Modbus read/write requests, and returns exception frames on error.
