# Fixed Buffer Circular Shift

**Difficulty**: Easy  
**Objective**: Rotate array elements left or right by K positions.

## Problem Statement
Create an array manipulation utility that takes an integer array of size N and rotates all elements to the right or left by K positions, shifting elements circularly around the array boundary.

## Concepts Used
- Arrays
- Pointers
- Modulo Mathematics
- Functions

## Requirements
- Input array elements and shift offset K.
- Support Right Shift mode and Left Shift mode.
- Perform circular element rotation using temporary buffer or reversal algorithm.
- Print original and shifted array.

## Input / Output
Input: Array {1,2,3,4,5}, Shift = 2 (Right).
Output: Shifted Array {4,5,1,2,3}.

## Edge Cases
- Shift offset K = 0 (no change).
- Shift offset K > N (requires K = K % N).
- Array of size N = 1.

## Suggested Functions
- `rotate_right(int arr[], int n, int k)`
- `rotate_left(int arr[], int n, int k)`

## Testing Checklist
- Test {1,2,3,4,5} right shift 2 -> {4,5,1,2,3}.
- Test shift offset K larger than array size (K=7 for N=5).
- Test K=0.

## Learning Outcomes
- Array index wrapping using modulo arithmetic.
- In-place and buffer-assisted array mutation.

## Builds On
- Chapter 07 / Project 04 (the_palindrome_array_checker) - Adds array element rotation algorithm.

## Hints
- **Hint 1**: Normalize K using k = k % n to handle offsets larger than array length.
- **Hint 2**: New position for element at index i in right shift is (i + k) % n.
- **Hint 3**: Use a temporary array to store rotated elements before copying back to original array.

## Completion Criteria
- Correctly rotates elements circularly in both left/right directions and handles shift offsets K >= N.
