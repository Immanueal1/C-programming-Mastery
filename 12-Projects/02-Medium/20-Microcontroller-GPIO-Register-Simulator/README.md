# Microcontroller GPIO Register Simulator

**Difficulty**: Medium  
**Project Type**: Electronics / Embedded Simulation  
**Estimated Time**: 4 - 5 hours  

## Objective
Simulate 32-bit MCU GPIO registers using bitfields and unions to configure pin modes and state values.

## Problem Statement
Create a hardware register simulation library that models a 32-bit microcontroller GPIO peripheral port (Registers: `MODER`, `OTYPER`, `OSPEEDR`, `PUPDR`, `IDR`, `ODR`, `BSRR`) using C `union` and `struct` bitfields to configure pin modes and toggle output states.

## Why Build This?
Provides essential practice with C `union` and `struct` bitfields, register bitmask operations, and hardware peripheral simulation patterns used in firmware development.

## Concepts Used
- Unions & Bitfields
- Bitwise Operators (&, |, ~, ^)
- Register Memory Mapping
- Modular Firmware Drivers

## Prerequisites
Chapter 02 (Operators), Chapter 09 (Structures & Unions).

## Requirements
- **Requirement 1**: Define `union GPIOModeRegister` with 32-bit integer and 16 2-bit pin mode bitfields.
- **Requirement 2**: Implement gpio_set_pin_mode(pin, mode) (Input=00, Output=01, Alt=10, Analog=11).
- **Requirement 3**: Implement gpio_write_pin(pin, state) using ODR or BSRR register.
- **Requirement 4**: Implement gpio_read_pin(pin) using IDR register.
- **Requirement 5**: Display 32-bit register state in Hex and Binary format.

## Functional Requirements
- **Input**: Pin number (0-15), mode, state (0 or 1).
- **Output**: Pin states, 32-bit register hex dump.
- **Validation**: Validate pin index between 0 and 15. Validate mode values.
- **Edge Cases**: Pin index out of bounds (> 15).
Simulating pin write when pin is configured as input.

## Suggested Program Structure
```text
20-Microcontroller-GPIO-Register-Simulator/
├── README.md
├── src/
│   ├── main.c
│   ├── gpio.c
│   └── gpio.h
└── tests/
    └── test_gpio.c
```

## Suggested Functions
- `void gpio_init();`
- `void gpio_set_pin_mode(int pin, int mode);`
- `void gpio_write_pin(int pin, int state);`
- `int gpio_read_pin(int pin);`
- `void gpio_dump_registers();`

## Data Structures
```c
typedef union {
  uint32_t raw;
  struct {
    uint32_t pin0 : 2;
    uint32_t pin1 : 2;
    /* ... */
    uint32_t pin15 : 2;
  } bits;
} GPIO_MODER_t;
```

## File Handling
None required.

## Memory Considerations
Manage bitfield structs and unions matching hardware register byte layouts.

## Error Handling
Ignore pin writes to pins configured as input or return error status code.

## Testing Checklist
- [ ] Verify setting pin 5 to Output (01) modifies bit position 10-11 in MODER register.
- [ ] Verify writing pin 5 HIGH sets bit 5 in ODR register.
- [ ] Verify reading input pin reflects simulated IDR register state.

## Expected Learning Outcomes
- Manipulating hardware registers using unions and bitfields.
- Writing modular peripheral driver interfaces in C.

## Industry Relevance
Directly mirrors low-level HAL drivers used in ARM Cortex-M microcontrollers (STM32, NXP, Microchip).

## Interview Relevance
Bitfields, unions, and bitwise register manipulation are essential Embedded C interview topics.

## Portfolio Value
Outstanding firmware portfolio project showcasing hardware register driver design in C.

## Builds On
- Chapter 02 / Project 01 (electronics_workbench_calculator) - Adds bitwise register manipulation, Unions, and bitfields.

## Hints
- **Hint 1**: Hint 1: Use bitwise shifts: (1 << pin) for single bit masks, or (3 << (pin * 2)) for 2-bit mode masks.
- **Hint 2**: Hint 2: Clear mode bits before setting new mode: reg &= ~(3 << (pin * 2)); reg |= (mode << (pin * 2)).
- **Hint 3**: Hint 3: Use Unions to allow both bitfield access (bits.pin0) and 32-bit raw register access (raw).

## Optional Extensions
- Add interrupt configuration register simulation.
- Add GPIO port A/B/C multiple port instances.

## Completion Criteria
- Accurately configures pin mode bitfields, updates register states via bitwise operations, and dumps binary/hex register values.
