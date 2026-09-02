# Bank Account Transaction Ledger

**Difficulty**: Medium  
**Project Type**: Record Management / Systems Utility  
**Estimated Time**: 3 - 4 hours  

## Objective
Build a modular ledger system managing account balances, deposits, withdrawals, and persistent transaction history.

## Problem Statement
Create a multi-file C application for a banking ledger that manages account holders, records transactions (deposits, withdrawals, transfers), updates account balances with validation, and persists ledger records to disk.

## Why Build This?
Combines multi-file modular design, struct arrays, input validation, and file persistence into a realistic financial ledger application.

## Concepts Used
- Structures & Struct Arrays
- Multi-file Architecture (src/ & headers)
- File I/O Streams
- Input Validation & Error Codes

## Prerequisites
Chapter 09 (Structures), Chapter 10 (File I/O), Chapter 05 (Functions).

## Requirements
- **Requirement 1**: Define `struct Transaction` (id, timestamp, type, amount) and `struct Account` (acc_num, name, balance, transactions[]).
- **Requirement 2**: Implement deposit(), withdraw(), and transfer() functions with balance boundary checks.
- **Requirement 3**: Implement file persistence to save and reload account ledger state from ledger.dat.
- **Requirement 4**: Display formatted CLI transaction history statements.

## Functional Requirements
- **Input**: Account number, transaction type, amount.
- **Output**: Balance updates, transaction receipts, persistent ledger file.
- **Validation**: Reject withdrawals exceeding balance. Reject non-positive amounts. Validate account existence.
- **Edge Cases**: Overdraft attempts.
Corrupt ledger data file.
Account array capacity overflow.

## Suggested Program Structure
```text
01-Bank-Account-Transaction-Ledger/
├── README.md
├── src/
│   ├── main.c
│   ├── ledger.c
│   └── ledger.h
└── tests/
    └── test_ledger.c
```

## Suggested Functions
- `int ledger_init(const char *filename);`
- `int account_deposit(int acc_num, double amount);`
- `int account_withdraw(int acc_num, double amount);`
- `int ledger_save_to_file(const char *filename);`

## Data Structures
```c
struct Transaction { int id; char type[12]; double amount; };
struct Account { int acc_num; char name[64]; double balance; struct Transaction txs[50]; int tx_count; };
```

## File Handling
Read/write binary or structured text ledger file using fopen, fread/fwrite or fprintf/fscanf.

## Memory Considerations
Fixed-size static struct array allocation with bounds checking.

## Error Handling
Return status error codes (0 for success, negative for failure: ERR_INSUFFICIENT_FUNDS, ERR_INVALID_ACC).

## Testing Checklist
- [ ] Verify initial balance loads correctly from file.
- [ ] Verify deposit increases balance and records transaction.
- [ ] Verify withdrawal exceeding balance is rejected with error code.
- [ ] Verify updated ledger state persists after program restart.

## Expected Learning Outcomes
- Modular code organization separating API headers from implementation files.
- Robust financial transaction error handling.

## Industry Relevance
Teaches fundamental transaction logging, atomic balance updates, and persistent state management used in banking software.

## Interview Relevance
Frequently asked system design topic for technical screening interviews.

## Portfolio Value
High value portfolio project demonstrating multi-file C architecture and file persistence.

## Builds On
- Chapter 03 / Project 01 (atm_menu_simulator) - Adds multi-file modular code, transaction struct history, and file persistence.

## Hints
- **Hint 1**: Hint 1: Separate header definitions (ledger.h) from execution logic (ledger.c).
- **Hint 2**: Hint 2: Always return explicit status codes (0 for SUCCESS, -1 for ERR) from ledger functions.
- **Hint 3**: Hint 3: Use fopen with 'r+' or binary mode 'rb+' for reading and updating ledger records.

## Optional Extensions
- Add account creation and deletion.
- Add multi-currency conversion support.

## Completion Criteria
- Program compiles across multiple src files, correctly processes transactions, rejects overdrafts, and persists data.
