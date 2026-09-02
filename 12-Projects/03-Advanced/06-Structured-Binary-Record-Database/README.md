# Structured Binary Record Database

**Difficulty**: Advanced  
**Project Type**: Mini Database Systems  
**Estimated Time**: 6 - 8 hours  

## Objective
Build a binary file record database supporting random access fseek, in-place updates, and defragmentation.

## Problem Statement
Construct a binary record database engine that manages structured records stored in a binary file, supporting direct indexed record access using `fseek`/`ftell`, in-place record updates, logical deletion flags, and file compaction defragmentation.

## Why Build This?
Teaches random file access (`fseek`, `ftell`), binary record serialization, file header metadata, in-place file mutation, and storage compaction.

## Concepts Used
- Random File Access (fseek, ftell)
- Binary File Serialization
- Record Indexing Tables
- Storage Compaction / Defragmentation

## Prerequisites
Chapter 09 (Structures), Chapter 10 (File I/O).

## Requirements
- **Requirement 1**: Define database file header struct (magic bytes, record_count, active_records).
- **Requirement 2**: Append, read, and update records in-place using `fseek(fp, offset, SEEK_SET)`.
- **Requirement 3**: Mark deleted records with logical deletion flag (`is_deleted = 1`).
- **Requirement 4**: Implement database defragmentation (`db_compact`) copying active records to fresh file.

## Functional Requirements
- **Input**: Record data, record ID index, update fields.
- **Output**: Record query results, updated binary database file.
- **Validation**: Validate magic header bytes on file open. Validate record index bounds.
- **Edge Cases**: Updating record beyond end of file.
Corrupted header magic bytes.
Compacting database with 0 active records.

## Suggested Program Structure
```text
06-Structured-Binary-Record-Database/
├── README.md
├── src/
│   ├── main.c
│   ├── db_engine.c
│   └── db_engine.h
└── tests/
    └── test_db_engine.c
```

## Suggested Functions
- `int db_open(const char *filename);`
- `int db_write_record(int index, const struct Record *rec);`
- `int db_read_record(int index, struct Record *out_rec);`
- `int db_delete_record(int index);`
- `int db_compact(const char *filename);`

## Data Structures
```c
struct DBHeader { char magic[4]; int record_count; int active_count; };
struct Record { int id; char name[64]; double balance; int is_deleted; };
```

## File Handling
Use binary mode 'rb+' for random read/write access with fseek and ftell.

## Memory Considerations
Buffer individual record reads without loading whole database into RAM.

## Error Handling
Return error codes for ERR_BAD_MAGIC, ERR_RECORD_DELETED, ERR_OUT_OF_BOUNDS.

## Testing Checklist
- [ ] Verify writing record at index 5 seeking to correct file offset.
- [ ] Verify reading record after in-place update returns new field values.
- [ ] Verify db_compact removes deleted records and reduces file size.

## Expected Learning Outcomes
- Random binary file I/O using fseek and ftell.
- Building persistent binary database storage engines in C.

## Industry Relevance
Mirrors storage engine design in embedded databases like SQLite and Berkeley DB.

## Interview Relevance
Random file access and database storage engine coding interview task.

## Portfolio Value
High value database engine project demonstrating advanced file I/O in C.

## Builds On
- Chapter 10 / Project 01 (student_marks_file_writer) - Adds binary random access, file header metadata, in-place record mutation, and compaction.

## Hints
- **Hint 1**: Hint 1: Offset for record at index N = sizeof(struct DBHeader) + N * sizeof(struct Record).
- **Hint 2**: Hint 2: Always use fseek(fp, offset, SEEK_SET) before calling fread or fwrite for specific indices.
- **Hint 3**: Hint 3: Update DBHeader in file whenever records are added or compacted.

## Optional Extensions
- Add in-memory index table for O(1) ID lookups.
- Add multi-field transaction support.

## Completion Criteria
- Performs direct fseek record lookups, updates records in-place, marks deletions, and compacts database file.
