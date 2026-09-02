# CAPSTONE 5 File Based Record Database

**Difficulty**: Capstone  
**Project Type**: Capstone - Database / Systems  
**Estimated Time**: 10 - 12 hours  

## Objective
Build a multi-table binary database engine with schemas, indexing, transactions, and persistence.

## Problem Statement
Develop an enterprise-grade File-Based Record Database (FRDB) engine supporting multi-table record schemas, indexed primary key lookups, in-place binary record mutation (`fseek`), transaction logging, logical deletion, and file defragmentation.

## Why Build This?
Capstone project integrating binary file random access, index table data structures, memory pool allocation, transaction safety, and database defragmentation.

## Concepts Used
- Binary Database Engine Architecture
- Index Table Data Structures
- Random Binary Access (fseek, ftell)
- Transaction Logging & Compaction

## Prerequisites
Chapters 01–11 complete (Pointers, Structs, Files, Dynamic Memory).

## Requirements
- **Requirement 1**: Define database schema format supporting multi-field records.
- **Requirement 2**: Maintain in-memory index table for O(1) primary key lookup.
- **Requirement 3**: Append, update, and delete binary records in-place using `fseek`.
- **Requirement 4**: Implement `db_compact()` to defragment storage files.
- **Requirement 5**: Provide interactive SQL-like CLI shell for executing database commands.

## Functional Requirements
- **Input**: Database CLI commands (INSERT, SELECT, UPDATE, DELETE, COMPACT).
- **Output**: Query record results, updated binary database data files.
- **Validation**: Enforce primary key uniqueness. Validate schema field types.
- **Edge Cases**: Updating record to larger size.
Corrupted index table.
Compacting open database.

## Suggested Program Structure
```text
19-CAPSTONE-5-File-Based-Record-Database/
├── README.md
├── src/
│   ├── main.c
│   ├── db_core.c
│   ├── db_core.h
│   ├── index.c
│   ├── index.h
│   ├── storage.c
│   └── storage.h
└── tests/
    └── test_frdb.c
```

## Suggested Functions
- `Database* db_open(const char *db_name);`
- `int db_insert(Database *db, int id, const void *record_data);`
- `void* db_select_by_id(Database *db, int id);`
- `int db_delete_by_id(Database *db, int id);`
- `int db_compact(Database *db);`

## Data Structures
```c
struct IndexEntry { int id; long file_offset; int is_active; };
struct Database { FILE *fp; struct IndexEntry *index_table; size_t count; size_t capacity; };
```

## File Handling
Binary read/write access with fseek/ftell; temporary file creation during compaction.

## Memory Considerations
Dynamic index table memory allocation with realloc and full deallocation in db_close.

## Error Handling
Return status codes for ERR_DUPLICATE_KEY, ERR_KEY_NOT_FOUND, ERR_FILE_CORRUPT.

## Testing Checklist
- [ ] Verify INSERT adds record to binary file and updates index table.
- [ ] Verify SELECT_BY_ID fetches record using index file offset instantly.
- [ ] Verify COMPACT reduces binary file size by removing deleted records.

## Expected Learning Outcomes
- Building persistent binary database storage engines in C.
- Combining index tables with random file access for fast lookups.

## Industry Relevance
Directly mirrors core storage engine architecture of SQLite, BerkeleyDB, and embedded storage engines.

## Interview Relevance
Tier-1 portfolio capstone project for Database Engine, Systems, and Storage C software engineering roles.

## Portfolio Value
Flagship GitHub portfolio capstone project showcasing deep systems C database engineering.

## Builds On
- Chapter 12 / Advanced Project 06 (Structured-Binary-Record-Database) - Adds multi-table schemas, hash index lookup, transaction logging, and defragmentation.

## Hints
- **Hint 1**: Hint 1: Load index table into RAM on db_open for fast key lookups.
- **Hint 2**: Hint 2: Store file_offset in index entry to find records immediately using fseek.
- **Hint 3**: Hint 3: Use temporary file database_temp.dat during compaction and rename to original filename.

## Optional Extensions
- Add B-Tree index structure.
- Add multi-column indexing.

## Completion Criteria
- Performs fast indexed record lookups, updates records in-place, handles deletions, and compacts database files.
