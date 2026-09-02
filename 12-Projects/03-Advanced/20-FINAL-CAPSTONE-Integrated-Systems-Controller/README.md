# FINAL CAPSTONE Integrated Systems Controller

**Difficulty**: Capstone  
**Project Type**: Flagship Final Capstone - Systems Integration  
**Estimated Time**: 15 - 20 hours  

## Objective
Flagship final capstone integrating ALL Chapters 01–11: dynamic memory, multi-file architecture, structs, files, and FSM.

## Problem Statement
Build the flagship final capstone project of the entire curriculum: an Integrated Systems Controller (ISC) that combines dynamic heap memory allocation, multi-file C modular architecture, user-defined struct models, binary file persistence, finite state machine execution, telemetry frame parsing, and an interactive CLI management shell.

## Why Build This?
The ultimate synthesis project of the entire C Programming Mastery curriculum. Integrates all concepts from Chapters 01 through 11 into a production-grade, portfolio-defining application.

## Concepts Used
- Complete Integration of Chapters 01-11
- Functions & Recursion
- Pointers & Memory Addresses
- Arrays & Multi-Dimensional Data
- Strings & Character Buffers
- Structures & Unions
- File I/O Streams & Binary Persistence
- Dynamic Memory Allocation

## Prerequisites
Chapters 01–11 complete (Complete C Programming Mastery curriculum).

## Requirements
- **Requirement 1**: Build a multi-module system architecture separating Subsystems, Memory Allocator, Storage, and Shell.
- **Requirement 2**: Implement dynamic heap allocation for device subsystem registries (`realloc` scaling).
- **Requirement 3**: Implement finite state machine for system modes (BOOT, IDLE, MONITORING, ALERT, SHUTDOWN).
- **Requirement 4**: Persist system configurations and telemetry logs to binary storage (`sys_controller.bin`).
- **Requirement 5**: Provide interactive CLI control shell for real-time monitoring and configuration.

## Functional Requirements
- **Input**: CLI interactive commands, simulated sensor signals, binary config files.
- **Output**: System state transitions, live telemetry metrics, persistent binary storage, alert logs.
- **Validation**: Check for zero memory leaks. Validate all state transitions and binary image checksums.
- **Edge Cases**: Subsystem fault triggering ALERT mode.
Corrupted system configuration file on boot.
Orderly emergency shutdown.

## Suggested Program Structure
```text
20-FINAL-CAPSTONE-Integrated-Systems-Controller/
├── README.md
├── src/
│   ├── main.c
│   ├── controller.c
│   ├── controller.h
│   ├── fsm.c
│   ├── fsm.h
│   ├── memory_mgr.c
│   ├── memory_mgr.h
│   ├── storage_engine.c
│   ├── storage_engine.h
│   ├── shell.c
│   └── shell.h
└── tests/
    └── test_isc.c
```

## Suggested Functions
- `int isc_init();`
- `void isc_run();`
- `int isc_process_state();`
- `int isc_save_system_state(const char *filename);`
- `void isc_shutdown();`

## Data Structures
```c
struct SubsystemNode { int id; char name[32]; int status; float telemetry_val; };
struct SystemController { enum SystemState state; struct SubsystemNode *subsystems; size_t count; size_t capacity; };
```

## File Handling
Binary configuration file reading/writing, event log file appending.

## Memory Considerations
Complete dynamic memory management with strict allocation checks and zero leaks.

## Error Handling
Centralized error handling and recovery pipeline.

## Testing Checklist
- [ ] Verify system boots, initializes subsystems, and enters IDLE state.
- [ ] Verify state machine transitions from IDLE -> MONITORING -> ALERT on simulated fault.
- [ ] Verify system state persists to sys_controller.bin and restores on reboot.
- [ ] Verify isc_shutdown deallocates all dynamic heap memory with zero memory leaks.

## Expected Learning Outcomes
- Architecting complex multi-module C systems.
- Synthesizing the entire C language toolset into a single portfolio-defining project.

## Industry Relevance
Directly representative of real-world embedded controllers, automotive domain controllers, and industrial SCADA master units.

## Interview Relevance
The definitive flagship portfolio project to showcase in senior systems engineering interviews.

## Portfolio Value
Flagship Capstone Project for GitHub showcase — demonstrates complete C programming mastery.

## Builds On
- Chapters 01–11 & Capstones 1–5 - Serves as the ultimate synthesis project of the entire C Programming Mastery curriculum.

## Hints
- **Hint 1**: Hint 1: Design clean interfaces between modules to prevent global state coupling.
- **Hint 2**: Hint 2: Use memory_mgr module to wrap malloc/realloc/free calls with memory tracking.
- **Hint 3**: Hint 3: Test every state transition independently before connecting to the CLI shell.

## Optional Extensions
- Add network socket communication listener.
- Add multi-threaded worker thread execution.

## Completion Criteria
- Synthesizes all C concepts, compiles cleanly across all src files, executes FSM transitions, persists binary state, and shuts down leak-free.
