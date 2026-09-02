# Simple Virtual RAM Allocator

**Difficulty**: Medium  
**Project Type**: Memory Management / Systems Programming  
**Estimated Time**: 4 - 6 hours  

## Objective
Simulate a fixed-size memory pool (e.g. 1024 bytes) that manages allocation and deallocation via headers.

## Problem Statement
Develop a virtual memory allocator simulator that manages a static byte pool buffer (1024 bytes). Implement custom `my_malloc(size)` and `my_free(ptr)` functions using block metadata headers (`size`, `is_free`) and First-Fit allocation logic.

## Why Build This?
Provides deep mental clarity on how `malloc` and `free` manage heap memory blocks, metadata headers, fragmentation, and pointer arithmetic.

## Concepts Used
- Pointers & Pointer Arithmetic
- Struct Block Headers
- Memory Allocation Algorithms (First-Fit)
- Memory Alignment

## Prerequisites
Chapter 06 (Pointers), Chapter 09 (Structures), Chapter 11 (Dynamic Memory).

## Requirements
- **Requirement 1**: Define static memory pool array `unsigned char memory_pool[1024]`.
- **Requirement 2**: Define `struct BlockHeader` (size_t size, int is_free, struct BlockHeader *next).
- **Requirement 3**: Implement my_malloc(size_t size) using First-Fit search across block headers.
- **Requirement 4**: Implement my_free(void *ptr) to mark block as free and coalesce adjacent free blocks.

## Functional Requirements
- **Input**: Requested allocation size in bytes.
- **Output**: Pointer to allocated memory block within pool, or NULL if out of memory.
- **Validation**: Check requested size fits within available pool blocks. Ensure alignment constraints.
- **Edge Cases**: Request size 0.
Request size larger than total pool.
Double free on same pointer.

## Suggested Program Structure
```text
12-Simple-Virtual-RAM-Allocator/
├── README.md
├── src/
│   ├── main.c
│   ├── vmem.c
│   └── vmem.h
└── tests/
    └── test_vmem.c
```

## Suggested Functions
- `void vmem_init();`
- `void* my_malloc(size_t size);`
- `void my_free(void *ptr);`
- `void vmem_dump_status();`

## Data Structures
```c
struct BlockHeader { size_t size; int is_free; struct BlockHeader *next; };
```

## File Handling
None required.

## Memory Considerations
Simulate heap allocation within a fixed static byte array using pointer arithmetic.

## Error Handling
Return NULL when memory pool is exhausted or request size is invalid.

## Testing Checklist
- [ ] Verify my_malloc allocates block and returns valid memory pointer within pool.
- [ ] Verify my_free marks block as free and allows re-allocation.
- [ ] Verify vmem_dump_status prints memory block allocations and free blocks correctly.

## Expected Learning Outcomes
- Understanding heap memory management and allocation headers.
- Coalescing free memory blocks to combat fragmentation.

## Industry Relevance
Essential systems programming concept used in OS kernels, embedded allocators, and game engines.

## Interview Relevance
Implementing custom malloc/free is a top-tier systems engineering interview question.

## Portfolio Value
Outstanding portfolio project demonstrating deep systems C programming knowledge.

## Builds On
- Chapter 11 / Project 05 (full_dma_lifecycle_manager) - Adds custom pool block header metadata and explicit memory offset tracking.

## Hints
- **Hint 1**: Hint 1: Place struct BlockHeader right before the returned user memory bytes.
- **Hint 2**: Hint 2: Calculate user pointer as (void*)((char*)header + sizeof(struct BlockHeader)).
- **Hint 3**: Hint 3: When freeing, look at adjacent block headers to merge consecutive free blocks.

## Optional Extensions
- Add Best-Fit allocation strategy.
- Add memory fragmentation metric calculation.

## Completion Criteria
- Successfully allocates and frees memory within the simulated pool, maintains block header integrity, and coalesces free blocks.
