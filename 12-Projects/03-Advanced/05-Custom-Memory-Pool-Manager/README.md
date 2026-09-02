# Custom Memory Pool Manager

**Difficulty**: Advanced  
**Project Type**: Memory Management / Systems Programming  
**Estimated Time**: 6 - 8 hours  

## Objective
Build a fixed-block memory pool manager with bitmask tracking and memory alignment.

## Problem Statement
Develop a production-grade fixed-block memory pool manager (`pool_create`, `pool_alloc`, `pool_free`, `pool_destroy`) that allocates a contiguous heap memory chunk, tracks block allocation using a bitmask array, and guarantees strict memory alignment.

## Why Build This?
Provides deep understanding of low-level memory pool allocators, bitmask tracking, void pointers, and custom memory management techniques used in high-performance C systems.

## Concepts Used
- Custom Memory Allocator Architecture
- Bitmask Tracking Arrays
- Void Pointers (void*)
- Memory Alignment & Bitwise Ops

## Prerequisites
Chapter 06 (Pointers), Chapter 09 (Structures), Chapter 11 (Dynamic Memory).

## Requirements
- **Requirement 1**: Allocate contiguous heap block for pool data buffer.
- **Requirement 2**: Maintain bitmask array where bit 1 = allocated, bit 0 = free.
- **Requirement 3**: Implement pool_alloc() returning aligned pointer to free block.
- **Requirement 4**: Implement pool_free() validating pointer boundary before freeing bit.
- **Requirement 5**: Implement pool_destroy() freeing all underlying pool resources.

## Functional Requirements
- **Input**: Number of blocks, block size in bytes.
- **Output**: Void pointer to allocated block, pool status metrics.
- **Validation**: Verify requested block pointer falls within pool address bounds.
- **Edge Cases**: Pool completely full (0 free blocks).
Freeing pointer outside pool memory bounds.
Destroying active pool.

## Suggested Program Structure
```text
05-Custom-Memory-Pool-Manager/
├── README.md
├── src/
│   ├── main.c
│   ├── pool.c
│   └── pool.h
└── tests/
    └── test_pool.c
```

## Suggested Functions
- `MemoryPool* pool_create(size_t num_blocks, size_t block_size);`
- `void* pool_alloc(MemoryPool *pool);`
- `int pool_free(MemoryPool *pool, void *ptr);`
- `void pool_destroy(MemoryPool *pool);`

## Data Structures
```c
typedef struct {
  void *buffer;
  unsigned char *bitmask;
  size_t num_blocks;
  size_t block_size;
  size_t free_blocks;
} MemoryPool;
```

## File Handling
None required.

## Memory Considerations
Single malloc call for pool buffer and bitmask; complete deallocation in pool_destroy.

## Error Handling
Return NULL if pool is exhausted; return error code for invalid pointer free.

## Testing Checklist
- [ ] Verify pool_alloc returns valid pointer and decreases free block count.
- [ ] Verify pool_free marks block as available for re-allocation.
- [ ] Verify pool_destroy frees all memory without leaks.

## Expected Learning Outcomes
- Designing fixed-block memory pool allocators.
- Using bitmask arrays for O(1) allocation tracking.

## Industry Relevance
Used in game engine memory managers, real-time operating systems (RTOS), and network packet buffers.

## Interview Relevance
Custom memory pool implementation is a top-tier systems engineering interview task.

## Portfolio Value
Outstanding systems programming portfolio project showcasing advanced C memory management.

## Builds On
- Chapter 12 / Medium Project 12 (Simple-Virtual-RAM-Allocator) - Adds fixed-block bitmask tracking, void* pointer management, and alignment bounds.

## Hints
- **Hint 1**: Hint 1: Calculate bitmask index: byte_idx = block_idx / 8, bit_idx = block_idx % 8.
- **Hint 2**: Hint 2: Calculate block pointer: (char*)pool->buffer + (block_idx * pool->block_size).
- **Hint 3**: Hint 3: Verify pointer alignment: block_idx = ((char*)ptr - (char*)pool->buffer) / pool->block_size.

## Optional Extensions
- Add thread-safe mutex locks.
- Add block allocation boundary guards.

## Completion Criteria
- Allocates fixed blocks, tracks availability via bitmask, prevents out-of-bounds frees, and destroys pool cleanly.
