# CAPSTONE 4 Device Configuration Manager

**Difficulty**: Capstone  
**Project Type**: Capstone - Embedded / Firmware  
**Estimated Time**: 10 - 12 hours  

## Objective
Industrial device configuration suite parsing XML/INI specs, validating bitfields, and flashing binary EEPROM files.

## Problem Statement
Create an industrial Device Configuration Manager (DCM) for embedded hardware that parses text configuration files, validates hardware bitfields/unions, calculates CRC checksums, and flashes simulated EEPROM binary image files.

## Why Build This?
Capstone project integrating configuration file parsing, bitwise bitfield manipulation, EEPROM binary image generation, CRC verification, and firmware error recovery.

## Concepts Used
- Configuration File Parsing
- Bitfields & Union Bit Manipulation
- Simulated EEPROM Binary Flashing
- CRC Checksum Verification
- Firmware Recovery

## Prerequisites
Chapters 01–11 complete (Pointers, Structs, Files, Dynamic Memory).

## Requirements
- **Requirement 1**: Parse device configuration text file (baud rate, IP, mode flags, registers).
- **Requirement 2**: Map configuration settings to 32-bit hardware register bitfield structs.
- **Requirement 3**: Calculate CRC-32 checksum over binary configuration image.
- **Requirement 4**: Write binary image to simulated EEPROM file (`eeprom.bin`).
- **Requirement 5**: Verify flashed EEPROM image and handle corrupt config rollback.

## Functional Requirements
- **Input**: Device config text file.
- **Output**: Validated bitfield registers, flashed `eeprom.bin` image, validation report.
- **Validation**: Verify CRC-32 of flashed binary image matches header checksum.
- **Edge Cases**: Corrupted EEPROM file.
Configuration setting out of hardware register bounds.
Write failure to binary file.

## Suggested Program Structure
```text
18-CAPSTONE-4-Device-Configuration-Manager/
├── README.md
├── src/
│   ├── main.c
│   ├── config_parser.c
│   ├── config_parser.h
│   ├── register_map.c
│   ├── register_map.h
│   ├── eeprom.c
│   └── eeprom.h
└── tests/
    └── test_dcm.c
```

## Suggested Functions
- `int dcm_parse_config(const char *filename);`
- `uint32_t dcm_calc_crc32(const void *data, size_t len);`
- `int dcm_flash_eeprom(const char *eeprom_file);`
- `int dcm_verify_eeprom(const char *eeprom_file);`

## Data Structures
```c
typedef union {
  uint32_t raw;
  struct {
    uint32_t baud_rate_idx : 4;
    uint32_t mode_flags    : 8;
    uint32_t device_id     : 16;
    uint32_t reserved      : 4;
  } bits;
} DeviceConfigReg_t;
```

## File Handling
Read configuration text files and write binary EEPROM image files using fopen/fwrite in 'wb' mode.

## Memory Considerations
Dynamic memory allocation for configuration tables with explicit `free()`.

## Error Handling
Provide firmware rollback mechanism if EEPROM verification fails.

## Testing Checklist
- [ ] Verify config text settings map to correct register bitfield positions.
- [ ] Verify CRC-32 calculation accurately computes binary payload checksum.
- [ ] Verify eeprom.bin verification fails if binary file is modified/corrupted.

## Expected Learning Outcomes
- Designing industrial firmware configuration managers.
- Flashing and verifying binary EEPROM images with CRC-32 checksums.

## Industry Relevance
Directly representative of firmware deployment, ECU flashing, and industrial IoT device management.

## Interview Relevance
Tier-1 portfolio capstone project for Firmware, Embedded Systems, and Hardware/Software Integration roles.

## Portfolio Value
Outstanding firmware portfolio project showcasing advanced C register mapping and binary flashing.

## Builds On
- Chapter 12 / Advanced Project 10 (Modbus-RTU-Packet-Simulator) - Adds EEPROM binary flash simulation, XML/INI configuration loading, and register validation.

## Hints
- **Hint 1**: Hint 1: Use bitfields inside a union to map named bit fields directly to 32-bit uint32_t raw values.
- **Hint 2**: Hint 2: Standard CRC-32 uses polynomial 0xEDB88320.
- **Hint 3**: Hint 3: Include DBHeader struct at offset 0 of EEPROM binary file containing magic bytes and CRC-32.

## Optional Extensions
- Add dual-bank A/B firmware update fail-safe simulation.
- Add AES-128 binary image encryption stub.

## Completion Criteria
- Parses config files, maps register bitfields, computes CRC-32 checksums, flashes EEPROM images, and verifies integrity.
