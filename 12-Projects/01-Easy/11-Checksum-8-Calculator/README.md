# Checksum 8 Calculator

**Difficulty**: Easy  
**Objective**: Compute 8-bit sum and XOR checksums for telemetry validation.

## Problem Statement
Create a telemetry packet validation tool that takes an array of byte values (unsigned char), computes both 8-bit Modular Addition Checksum and 8-bit Bitwise XOR Checksum, and verifies packet integrity.

## Concepts Used
- Arrays
- Bitwise Operators (XOR ^)
- Unsigned Types
- Loops

## Requirements
- Input array of hex/integer byte values.
- Compute 8-bit Sum Checksum: (sum of bytes) % 256.
- Compute 8-bit XOR Checksum: byte1 ^ byte2 ^ ... ^ byteN.
- Print calculated checksums in Hex (%02X) and Decimal.

## Input / Output
Input: Byte array payload.
Output: Sum Checksum (Hex/Dec), XOR Checksum (Hex/Dec).

## Edge Cases
- Empty payload array (0 bytes).
- All 0x00 bytes.
- All 0xFF bytes (testing 8-bit wraparound).

## Suggested Functions
- `compute_sum8(const unsigned char *data, int len)`
- `compute_xor8(const unsigned char *data, int len)`

## Testing Checklist
- Test payload {0x01, 0x02, 0x03} -> Sum=0x06, XOR=0x00.
- Test payload with 0xFF bytes.
- Verify 8-bit overflow behaves correctly.

## Learning Outcomes
- Bitwise XOR operations for data verification.
- Handling unsigned byte types and integer wraparound.

## Builds On
- Chapter 02 / Project 04 (the_5_digit_cryptography_shifter) - Adds byte-array iteration and packet checksum calculation.

## Hints
- **Hint 1**: Use unsigned char for byte accumulators to guarantee 8-bit truncation.
- **Hint 2**: Initialize XOR accumulator to 0 (since 0 ^ x = x).
- **Hint 3**: Print result using printf("0x%02X", checksum);

## Completion Criteria
- Correctly computes Sum-8 and XOR-8 checksums with exact bitwise precision and displays output in 2-digit hex format.
