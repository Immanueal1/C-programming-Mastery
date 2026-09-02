# Dynamic Array MinMax Finder

**Difficulty**: Easy  
**Objective**: Dynamically allocate array of size N and find min/max values via pointers.

## Problem Statement
Write a dynamic memory utility that asks user for array size N, allocates memory on the heap using malloc, populates values from input, and uses a single function pass with output pointers to locate min and max values.

## Concepts Used
- Dynamic Memory (malloc, free)
- Pointers
- Functions (Output Pointers)

## Requirements
- Prompt for dynamic array size N.
- Allocate heap memory using malloc and verify pointer != NULL.
- Populate array and pass to min/max finder function.
- Output min/max values and addresses, then free heap memory.

## Input / Output
Input: Size N, N integer values.
Output: Min value & pointer address, Max value & pointer address.

## Edge Cases
- Allocation request N <= 0.
- Heap allocation failure (malloc returns NULL).
- Array with all duplicate values.

## Suggested Functions
- `find_min_max(const int *arr, int size, int *out_min, int *out_max)`

## Testing Checklist
- Test array {10, 5, 20, 15} -> Min: 5, Max: 20.
- Test array with negative values {-5, -1, -10}.
- Verify free() is called without memory leaks.

## Learning Outcomes
- Safe dynamic memory allocation and deallocation pattern.
- Traversing dynamic heap memory using pointers.

## Builds On
- Chapter 11 / Project 01 (dynamic_integer_array_allocator) - Adds dynamic min/max pointer traversal.

## Hints
- **Hint 1**: Always check if (ptr == NULL) immediately after malloc().
- **Hint 2**: Dereference output pointers *out_min = arr[0] and *out_max = arr[0] at start.
- **Hint 3**: Free allocated memory with free(ptr) and set ptr = NULL before exit.

## Completion Criteria
- Successfully allocates dynamic memory, finds correct min/max values, handles malloc NULL check, and frees heap memory.
