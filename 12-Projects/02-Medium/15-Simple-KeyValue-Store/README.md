# Simple KeyValue Store

**Difficulty**: Medium  
**Project Type**: Mini Database Systems  
**Estimated Time**: 4 - 6 hours  

## Objective
Build an in-memory key-value database supporting SET, GET, DELETE, and file serialization.

## Problem Statement
Create a lightweight in-memory key-value database engine supporting operations `SET key value`, `GET key`, `DELETE key`, `EXISTS key`, and `DUMP filename` for disk serialization.

## Why Build This?
Teaches lookup table data structures, string key hashing/matching, in-memory table compaction, and data serialization.

## Concepts Used
- Struct Arrays & Lookup Tables
- String Key Hashing / Matching
- File Serialization
- Modular C Engine Architecture

## Prerequisites
Chapter 08 (Strings), Chapter 09 (Structures), Chapter 10 (File I/O).

## Requirements
- **Requirement 1**: Define `struct KVEntry` (key, value, is_active).
- **Requirement 2**: Implement kv_set(key, val), kv_get(key), kv_delete(key), kv_exists(key).
- **Requirement 3**: Support duplicate key update behavior (updating value for existing key).
- **Requirement 4**: Implement kv_dump() and kv_load() for text/binary file persistence.

## Functional Requirements
- **Input**: Key-value command operations.
- **Output**: Query return values, operation status, persistent database dump file.
- **Validation**: Reject empty keys. Update value if key already exists.
- **Edge Cases**: GET on non-existent key (return NULL/NOT_FOUND).
Database full capacity.
Deleting key multiple times.

## Suggested Program Structure
```text
15-Simple-KeyValue-Store/
├── README.md
├── src/
│   ├── main.c
│   ├── kv_store.c
│   └── kv_store.h
└── tests/
    └── test_kv_store.c
```

## Suggested Functions
- `int kv_set(const char *key, const char *value);`
- `const char* kv_get(const char *key);`
- `int kv_delete(const char *key);`
- `int kv_dump(const char *filename);`
- `int kv_load(const char *filename);`

## Data Structures
```c
struct KVEntry { char key[64]; char value[256]; int is_active; };
struct KVStore { struct KVEntry entries[200]; int count; };
```

## File Handling
Serialize key-value table to disk using text or binary format.

## Memory Considerations
Manage lookup array entries and mark deleted slots for reuse.

## Error Handling
Return error codes for ERR_KEY_NOT_FOUND, ERR_STORE_FULL.

## Testing Checklist
- [ ] Verify SET 'name' 'Alice' followed by GET 'name' returns 'Alice'.
- [ ] Verify SET 'name' 'Bob' updates existing key to 'Bob'.
- [ ] Verify DELETE 'name' causes GET 'name' to return NOT_FOUND.
- [ ] Verify dump and load restores database state.

## Expected Learning Outcomes
- Building in-memory key-value storage engines.
- Implementing record updating, deletion compaction, and persistence.

## Industry Relevance
Mirrors core storage engine concepts found in Redis and embedded key-value stores.

## Interview Relevance
Key-value store implementation is a classic software engineering interview prompt.

## Portfolio Value
High quality portfolio project demonstrating storage engine design.

## Builds On
- Chapter 12 / Easy Project 06 (Simple-Config-Key-Value-Extractor) - Adds in-memory index table, deletion compaction, and binary/text dump.

## Hints
- **Hint 1**: Hint 1: Search for existing key first before appending a new entry in kv_set().
- **Hint 2**: Hint 2: Implement deletion by setting is_active = 0 (tombstone) or shift array elements.
- **Hint 3**: Hint 3: Write key-value pairs with a clean separator in kv_dump().

## Optional Extensions
- Add simple hash table lookup (FNV-1a hash).
- Add key expiration TTL.

## Completion Criteria
- Performs fast key lookups, updates existing keys correctly, handles deletions, and persists state to disk.
