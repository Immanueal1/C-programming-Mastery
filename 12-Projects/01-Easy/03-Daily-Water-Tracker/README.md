# Daily Water Tracker

**Difficulty**: Easy  
**Objective**: Track hourly hydration entries and evaluate goal progress.

## Problem Statement
Create a hydration tracker that records water intake (in ml) across 8 hourly logs, computes total intake, compares against a daily target goal, and reports percentage completed.

## Concepts Used
- Loops (for/while)
- Arrays
- Functions
- Formatting

## Requirements
- Input 8 hourly water intake amounts in ml.
- Sum total daily water intake.
- Compute progress percentage against a default 2000ml goal.
- Display hourly log table and final evaluation summary.

## Input / Output
Input: 8 integer values (ml).
Output: Hourly log breakdown, Total ml, Goal completion status.

## Edge Cases
- 0 ml entries for hours skipped.
- Intake exceeding target by over 200%.
- Negative volume entry attempt.

## Suggested Functions
- `calculate_total_intake(const int intake[], int hours)`
- `display_hydration_summary(int total, int goal)`

## Testing Checklist
- Test exact goal completion (2000ml = 100%).
- Test zero total intake.

## Learning Outcomes
- Array data accumulation and threshold evaluation.
- Building user feedback metrics from numerical arrays.

## Builds On
- Chapter 01 / Project 03 (Workout_Log_Formatter) - Adds hourly array aggregation and threshold progress checking.

## Hints
- **Hint 1**: Store hourly logs in an integer array of size 8.
- **Hint 2**: Use float division for accurate percentage calculation: (float)total / goal * 100.
- **Hint 3**: Use a loop to prompt for each hour's intake.

## Completion Criteria
- Correctly records hourly values, calculates daily totals/percentages, and displays a clean CLI summary table.
