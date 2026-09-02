# Flight Reservation System

**Difficulty**: Medium  
**Project Type**: Record Management  
**Estimated Time**: 4 - 5 hours  

## Objective
Manage flight seat maps, passenger bookings, ticket generation, and file-based booking persistence.

## Problem Statement
Build a flight reservation application that displays 2D airplane seating charts (rows x seats), processes passenger seat bookings, generates formatted passenger tickets, and saves booking state to disk.

## Why Build This?
Combines 2D struct matrix mapping, string search, ticket formatting, and persistent data storage into a user-facing booking system.

## Concepts Used
- 2D Struct Arrays
- Pointer Lookup
- File Reading/Writing
- CLI Menu Interfaces

## Prerequisites
Chapter 07 (Arrays), Chapter 09 (Structures), Chapter 10 (File I/O).

## Requirements
- **Requirement 1**: Define `struct Seat` (row, col_char, is_booked, passenger_name, ticket_id).
- **Requirement 2**: Display 2D seating map (e.g. '[X]' for booked, '[O]' for available).
- **Requirement 3**: Book seat by row/seat letter and store passenger info.
- **Requirement 4**: Save and load seating map to `flights.dat` file.

## Functional Requirements
- **Input**: Flight ID, seat selection (e.g. '12B'), passenger name.
- **Output**: 2D seating grid display, printable ticket receipt, persistent flight file.
- **Validation**: Prevent booking an already reserved seat. Validate seat row/column limits.
- **Edge Cases**: Flight fully booked (0 seats remaining).
Invalid seat coordinate entered ('99Z').

## Suggested Program Structure
```text
11-Flight-Reservation-System/
├── README.md
├── src/
│   ├── main.c
│   ├── flight.c
│   └── flight.h
└── tests/
    └── test_flight.c
```

## Suggested Functions
- `void display_seat_map();`
- `int book_seat(int row, char seat_letter, const char *passenger_name);`
- `int cancel_booking(const char *ticket_id);`
- `int save_flight_data(const char *filename);`

## Data Structures
```c
struct Seat { int is_booked; char passenger_name[64]; char ticket_id[16]; };
struct Flight { char flight_num[16]; struct Seat seats[20][6]; };
```

## File Handling
Read and write flight seating state file using binary or structured file I/O.

## Memory Considerations
Static 2D struct array allocation.

## Error Handling
Return error codes when seat is already occupied or seat coordinate is out of range.

## Testing Checklist
- [ ] Verify 2D seat map accurately displays available vs booked seats.
- [ ] Verify booking seat 12B marks seat as booked and records passenger name.
- [ ] Verify booking already occupied seat is rejected.

## Expected Learning Outcomes
- Mapping 2D grid coordinates to struct array elements.
- Implementing ticket booking and file persistence logic.

## Industry Relevance
Applies reservation systems logic used in transport, hospitality, and event ticketing software.

## Interview Relevance
Common matrix layout and system design coding interview task.

## Portfolio Value
Attractive CLI application showcasing 2D struct arrays and file persistence.

## Builds On
- Chapter 07 / Project 03 (student_grades_tracker) - Adds 2D matrix seat grid mapping, passenger record linking, and file storage.

## Hints
- **Hint 1**: Hint 1: Map seat letters 'A'-'F' to column indices 0-5 using seat_letter - 'A'.
- **Hint 2**: Hint 2: Use double nested loops to render 2D seating matrix graphics.
- **Hint 3**: Hint 3: Generate unique ticket IDs using flight number + seat coordinate.

## Optional Extensions
- Add seat class tiers (First Class / Economy).
- Add ticket search by passenger name.

## Completion Criteria
- Accurately displays 2D seat maps, handles seat reservations cleanly, and restores booking state from file.
