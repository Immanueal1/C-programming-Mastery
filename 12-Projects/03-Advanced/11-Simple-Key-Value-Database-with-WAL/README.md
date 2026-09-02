# Simple Key Value Database with WAL

**Difficulty**: Advanced  
**Project Type**: Mini Database Systems  
**Estimated Time**: 6 - 8 hours  

## Objective
Build a persistent key-value store with Write-Ahead Logging (WAL) for crash recovery.

## Problem Statement
Develop a crash-resilient key-value storage engine in C featuring Write-Ahead Logging (WAL), in-memory index table, atomic disk flush, crash recovery replay, and automated WAL log compaction.

## Why Build This?
Teaches database crash-recovery concepts, Write-Ahead Logging (WAL) durability, state machine log replay, and file compaction.

## Concepts Used
- Write-Ahead Logging (WAL)
- Crash Recovery Replay
- In-Memory Index Tables
- File Compaction & Durability

## Prerequisites
Chapter 08 (Strings), Chapter 09 (Structures), Chapter 10 (File I/O), Chapter 11 (Dynamic Memory).

## Requirements
- **Requirement 1**: Append all write operations (SET, DELETE) to `wal.log` before updating memory.
- **Requirement 2**: Replay `wal.log` on database startup to reconstruct in-memory index state (Crash Recovery).
- **Requirement 3**: Support `db_checkpoint()` to snapshot state to `db.dat` and truncate `wal.log`.
- **Requirement 4**: Provide key querying (GET) and entry deletion.

## Functional Requirements
- **Input**: SET, GET, DELETE key-value operations.
- **Output**: Query results, WAL log file, snapshot data file.
- **Validation**: Verify WAL log record checksums during recovery replay.
- **Edge Cases**: Truncated/partial WAL entry due to simulated power crash.
Empty WAL file.
Compacting database with deleted keys.

## Suggested Program Structure
```text
11-Simple-Key-Value-Database-with-WAL/
├── README.md
├── src/
│   ├── main.c
│   ├── wal_db.c
│   └── wal_db.h
└── tests/
    └── test_wal_db.c
```

## Suggested Functions
- `int wal_db_init(const char *db_file, const char *wal_file);`
- `int wal_db_set(const char *key, const char *value);`
- `const char* wal_db_get(const char *key);`
- `int wal_db_checkpoint();`
- `int wal_db_recover();`

## Data Structures
```c
struct WALRecord { uint8_t op_type; uint32_t key_len; uint32_t val_len; char key[64]; char value[256]; uint32_t crc; };
```

## File Handling
Append-only binary log writes to WAL file; atomic checkpoint snapshots.

## Memory Considerations
Dynamic or static in-memory lookup table.

## Error Handling
Stop WAL replay at first corrupted log record (simulated crash boundary).

## Testing Checklist
- [ ] Verify writing operations appends records to wal.log.
- [ ] Verify restarting application replays wal.log and restores database state.
- [ ] Verify checkpointing truncates wal.log and snapshots data.

## Expected Learning Outcomes
- Implementing Write-Ahead Logging (WAL) for database durability.
- Reconstructing in-memory database state via log replay.

## Industry Relevance
Core architectural pattern used in industrial databases like RocksDB, SQLite, and PostgreSQL.

## Interview Relevance
Database storage engine and crash recovery system design interview prompt.

## Portfolio Value
High value database engine portfolio project demonstrating advanced systems programming.

## Builds On
- Chapter 12 / Medium Project 15 (Simple-KeyValue-Store) - Adds Write-Ahead Logging (WAL), crash recovery replay, and log file compaction.

## Hints
- **Hint 1**: Hint 1: Write to WAL file with fflush(wal_fp) before updating in-memory index table.
- **Hint 2**: Hint 2: In recovery, read WAL sequentially and execute ops to rebuild in-memory map.
- **Hint 3**: Hint 3: Clear WAL file (fopen with "w" mode) after writing a full checkpoint snapshot.

## Optional Extensions
- Add transaction BEGIN/COMMIT/ROLLBACK.
- Add SSTable file format export.

## Completion Criteria
- Appends write operations to WAL log, replays WAL log on startup to recover state, and flushes checkpoints.
