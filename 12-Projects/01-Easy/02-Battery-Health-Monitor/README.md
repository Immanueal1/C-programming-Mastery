# Battery Health Monitor

**Difficulty**: Easy  
**Objective**: Classify battery health state and remaining capacity from voltage samples.

## Problem Statement
Build an embedded telemetry simulation utility that takes an array of cell voltage readings, computes average pack voltage, and determines state-of-charge percentage and battery health status.

## Concepts Used
- Arrays (1D)
- Functions
- Conditional Statements
- Floating-point Math

## Requirements
- Store 5 cell voltage readings in an array.
- Compute average voltage across all cells.
- Classify status: Good (>= 3.7V avg), Warning (3.2V - 3.69V), Critical (< 3.2V).

## Input / Output
Input: 5 float voltages.
Output: Average voltage, Capacity %, Battery Health Status.

## Edge Cases
- Cell voltage < 0.0V (sensor fault).
- Cell voltage > 4.5V (overcharge condition).
- Unbalanced cell voltages (>0.5V difference).

## Suggested Functions
- `compute_average_voltage(const float voltages[], int size)`
- `get_battery_status(float avg_voltage)`

## Testing Checklist
- Test with balanced 3.8V readings (expect Good).
- Test with 3.0V readings (expect Critical).
- Test with out-of-range sensor readings (<0V or >5V).

## Learning Outcomes
- Processing array datasets in functions.
- Translating physical sensor ranges to state classifications.

## Builds On
- Chapter 01 / Project 02 (NIR_Sensor_Calibration_Report) - Adds dynamic array sampling and state classification algorithm.

## Hints
- **Hint 1**: Iterate through the voltage array with a for loop to sum values.
- **Hint 2**: Clamp capacity percentage output between 0% and 100%.
- **Hint 3**: Check individual cell limits before calculating average.

## Completion Criteria
- Accurately computes pack averages, maps voltages to status strings, and rejects invalid sensor voltage inputs.
