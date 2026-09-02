# Digital Clock State Machine

**Difficulty**: Medium  
**Project Type**: Embedded Simulation  
**Estimated Time**: 3 - 5 hours  

## Objective
Model an embedded digital clock state machine with modes for time display, setting, alarm, and stopwatch.

## Problem Statement
Develop an embedded digital clock state machine simulator that handles event inputs (button presses) to transition between operating modes (`MODE_DISPLAY`, `MODE_SET_TIME`, `MODE_ALARM`, `MODE_STOPWATCH`) and updates clock time counters.

## Why Build This?
Teaches formal Finite State Machine (FSM) architecture, enumeration types, event-driven programming, and modular state handlers used in firmware engineering.

## Concepts Used
- Finite State Machines (FSM)
- Enumerations (enum)
- Switch-Case & Event Handlers
- Structs

## Prerequisites
Chapter 03 (Conditionals), Chapter 05 (Functions), Chapter 09 (Structures).

## Requirements
- **Requirement 1**: Define `enum ClockState` (DISPLAY, SET_TIME, SET_ALARM, STOPWATCH) and `enum Event` (BTN_MODE, BTN_UP, BTN_DOWN, TICK).
- **Requirement 2**: Implement state transition table or switch handler.
- **Requirement 3**: Maintain clock time, alarm time, and stopwatch counters.
- **Requirement 4**: Trigger alarm event when clock time matches alarm time.

## Functional Requirements
- **Input**: Simulated button events (MODE, UP, DOWN, TICK).
- **Output**: Current state display, clock time, alarm status, stopwatch value.
- **Validation**: Validate time setting boundaries (0-23 hours, 0-59 mins).
- **Edge Cases**: Hour wraparound at 23:59:59 -> 00:00:00.
Stopwatch overflow.

## Suggested Program Structure
```text
09-Digital-Clock-State-Machine/
├── README.md
├── src/
│   ├── main.c
│   ├── clock_fsm.c
│   └── clock_fsm.h
└── tests/
    └── test_clock_fsm.c
```

## Suggested Functions
- `void fsm_dispatch_event(enum Event evt);`
- `void handle_display_state(enum Event evt);`
- `void handle_set_time_state(enum Event evt);`
- `void clock_tick();`

## Data Structures
```c
struct ClockTime { int hours; int minutes; int seconds; };
struct ClockFSM { enum ClockState state; struct ClockTime time; struct ClockTime alarm; };
```

## File Handling
None required.

## Memory Considerations
Static FSM state structure.

## Error Handling
Ignore invalid button events for current state.

## Testing Checklist
- [ ] Verify BTN_MODE cycles state: DISPLAY -> SET_TIME -> SET_ALARM -> STOPWATCH -> DISPLAY.
- [ ] Verify clock_tick increments seconds and handles minute/hour roll-overs.
- [ ] Verify alarm triggers when time matches alarm setting.

## Expected Learning Outcomes
- Designing Finite State Machines in embedded C.
- Event-driven programming patterns.

## Industry Relevance
Core architectural pattern used in microcontroller firmware, UI controllers, and automotive ECUs.

## Interview Relevance
FSM design is a standard embedded software interview topic.

## Portfolio Value
Excellent demonstration of state machine architecture in C.

## Builds On
- Chapter 03 / Project 03 (traffic_signal_simulator) - Adds formal state-machine transition architecture and event queues.

## Hints
- **Hint 1**: Hint 1: Use an enum for state names and another enum for input events.
- **Hint 2**: Hint 2: Structure your main FSM dispatch with a switch(current_state).
- **Hint 3**: Hint 3: Update time values using a modular clock_tick() function.

## Optional Extensions
- Add timer countdown state.
- Add lap time recorder to stopwatch.

## Completion Criteria
- Cleanly executes state transitions upon button events, manages time roll-overs accurately, and triggers alarms on match.
