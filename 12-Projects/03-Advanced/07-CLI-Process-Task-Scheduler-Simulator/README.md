# CLI Process Task Scheduler Simulator

**Difficulty**: Advanced  
**Project Type**: Systems Programming / Simulation  
**Estimated Time**: 6 - 8 hours  

## Objective
Simulate CPU task scheduling algorithms (FCFS, Round-Robin, Priority) using dynamic task control blocks.

## Problem Statement
Build an operating system CPU scheduler simulator that manages process Task Control Blocks (TCBs), implements FCFS, Round-Robin, and Priority scheduling algorithms, tracks execution metrics (turnaround time, waiting time), and displays simulation logs.

## Why Build This?
Teaches OS process scheduling concepts, dynamic queue data structures, function pointers for strategy dispatch, and metric computation.

## Concepts Used
- Dynamic Struct Queues
- Function Pointers for Strategy Switching
- State Management & Simulation
- Operating System Scheduling Logic

## Prerequisites
Chapter 05 (Functions), Chapter 09 (Structures), Chapter 11 (Dynamic Memory).

## Requirements
- **Requirement 1**: Define `struct TCB` (pid, name, burst_time, priority, remaining_time, state).
- **Requirement 2**: Implement First-Come-First-Served (FCFS) scheduling algorithm.
- **Requirement 3**: Implement Round-Robin (RR) scheduling with configurable time quantum.
- **Requirement 4**: Compute average waiting time and turnaround time metrics for each algorithm.

## Functional Requirements
- **Input**: Process list details (PID, burst time, priority), time quantum.
- **Output**: Gantt chart execution timeline, waiting/turnaround time metrics report.
- **Validation**: Ensure burst times > 0. Validate time quantum > 0.
- **Edge Cases**: Process burst time 0.
Single process scheduling.
All processes same priority.

## Suggested Program Structure
```text
07-CLI-Process-Task-Scheduler-Simulator/
├── README.md
├── src/
│   ├── main.c
│   ├── scheduler.c
│   └── scheduler.h
└── tests/
    └── test_scheduler.c
```

## Suggested Functions
- `void scheduler_add_task(int pid, const char *name, int burst, int priority);`
- `void run_fcfs_schedule();`
- `void run_round_robin_schedule(int quantum);`
- `void print_scheduling_metrics();`

## Data Structures
```c
struct TCB { int pid; char name[32]; int burst_time; int priority; int remaining_time; int wait_time; int turn_time; };
struct SchedulerQueue { struct TCB tasks[50]; int count; };
```

## File Handling
Optional export of scheduling metrics report to text file.

## Memory Considerations
Dynamic or static queue management.

## Error Handling
Handle empty task queue execution gracefully.

## Testing Checklist
- [ ] Verify FCFS executes tasks in arrival order.
- [ ] Verify Round-Robin preempts task after time quantum expires.
- [ ] Verify average waiting time and turnaround time calculations match manual OS calculation.

## Expected Learning Outcomes
- Simulating operating system CPU scheduling algorithms.
- Using function pointers to switch execution strategies.

## Industry Relevance
Core OS kernel concept used in Linux scheduler, RTOS, and job queue managers.

## Interview Relevance
CPU scheduling algorithms are standard OS and systems engineering interview questions.

## Portfolio Value
Outstanding systems programming portfolio project demonstrating OS concepts in C.

## Builds On
- Chapter 05 / Project 04 (mathematical_utility_program) - Adds task control block structs, scheduling algorithm execution, and metrics computation.

## Hints
- **Hint 1**: Hint 1: In Round-Robin, decrement remaining_time by min(quantum, remaining_time).
- **Hint 2**: Hint 2: Re-enqueue unfinished processes at the back of the ready queue.
- **Hint 3**: Hint 3: Turnaround Time = Completion Time - Arrival Time; Wait Time = Turnaround Time - Burst Time.

## Optional Extensions
- Add Multi-Level Feedback Queue (MLFQ).
- Add interactive Gantt chart generator.

## Completion Criteria
- Simulates FCFS and Round-Robin scheduling accurately, calculates waiting/turnaround metrics, and displays Gantt chart timeline.
