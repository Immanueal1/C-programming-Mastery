# Sensor Range Validator

**Difficulty**: Easy  
**Objective**: Filter sensor dataset against threshold limits and extract out-of-bound indices.

## Problem Statement
Create a telemetry validation tool that accepts an array of sensor temperature readings, checks each reading against specified MIN_TEMP and MAX_TEMP limits, and returns out-of-bound readings and their indices.

## Concepts Used
- Arrays
- Loops
- Pointers (Output Parameters)
- Functions

## Requirements
- Define MIN_TEMP (-20.0C) and MAX_TEMP (80.0C).
- Pass sensor readings array to validation function.
- Extract indices and values of out-of-bound readings.
- Print compliance report summary.

## Input / Output
Input: Array of float temperature readings.
Output: Total valid readings, Out-of-bound readings count, index details.

## Edge Cases
- All readings within range.
- All readings out of range.
- Readings exactly equal to MIN or MAX threshold limits.

## Suggested Functions
- `validate_sensor_data(const float readings[], int size, float min_val, float max_val, int out_indices[], int *out_count)`

## Testing Checklist
- Test array with all valid temps.
- Test array containing -30C and 95C readings.
- Verify boundary values (-20C, 80C) pass as valid.

## Learning Outcomes
- Using output parameters (pointers) to return multiple values from functions.
- Array filtering algorithms.

## Builds On
- Chapter 07 / Project 01 (array_statistics_calculator) - Adds threshold filtering and out-of-bounds index tracking.

## Hints
- **Hint 1**: Pass an empty array out_indices to collect the indices of failing readings.
- **Hint 2**: Use pointer dereferencing (*out_count)++ to update the count of invalid readings.
- **Hint 3**: Ensure comparisons use >= min_val and <= max_val for inclusive bounds.

## Completion Criteria
- Accurately flags out-of-range sensor readings, records correct array indices, and correctly reports valid counts.
