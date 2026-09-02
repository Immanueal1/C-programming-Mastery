# Configurable Rule Based Input Validator

**Difficulty**: Advanced  
**Project Type**: Validation / Systems Utility  
**Estimated Time**: 6 - 8 hours  

## Objective
Build a validation engine registering rule specs and evaluating input structs/strings against rule tables.

## Problem Statement
Create a reusable, rule-based validation engine in C that registers field validation rules (e.g., required field, min/max length, range check, custom regex-like pattern) and validates input struct fields or key-value maps against rule tables.

## Why Build This?
Teaches function pointer callback tables, rule engine design, data structure introspection, and building reusable validation frameworks.

## Concepts Used
- Function Pointer Callbacks
- Rule Table Data Structures
- String Pattern Parsing
- Framework API Design

## Prerequisites
Chapter 05 (Functions), Chapter 08 (Strings), Chapter 09 (Structures).

## Requirements
- **Requirement 1**: Define `struct ValidationRule` with field name, rule type, constraint value, and custom callback function.
- **Requirement 2**: Register validation rules into a rule set container.
- **Requirement 3**: Validate input struct/key-value data against all registered rules.
- **Requirement 4**: Generate detailed error reports listing failed field names and rule violations.

## Functional Requirements
- **Input**: Registered rule set, target input record map.
- **Output**: Validation status (VALID / INVALID), list of field error messages.
- **Validation**: Check for missing required fields. Check numeric ranges.
- **Edge Cases**: Validating NULL pointer input.
Empty rule set.
Multiple failing rules on same field.

## Suggested Program Structure
```text
08-Configurable-Rule-Based-Input-Validator/
├── README.md
├── src/
│   ├── main.c
│   ├── validator.c
│   └── validator.h
└── tests/
    └── test_validator.c
```

## Suggested Functions
- `RuleSet* validator_create_ruleset();`
- `void validator_add_rule(RuleSet *rs, const char *field, int rule_type, double min_val, double max_val);`
- `void validator_add_custom_rule(RuleSet *rs, const char *field, int (*custom_cb)(const char *val));`
- `int validator_validate(const RuleSet *rs, const RecordMap *data, ValidationResult *out_res);`

## Data Structures
```c
typedef int (*RuleCallback)(const char *value);
typedef struct { char field[32]; int rule_type; double min_val; double max_val; RuleCallback custom_cb; } ValidationRule;
```

## File Handling
None required.

## Memory Considerations
Dynamic allocation of rule sets and error result messages.

## Error Handling
Accumulate all failing field validation messages in output result struct.

## Testing Checklist
- [ ] Verify required field rule flags missing fields.
- [ ] Verify range rule validates numeric field values within bounds.
- [ ] Verify custom function pointer callback executes correctly for specialized rules.

## Expected Learning Outcomes
- Designing extensible validation frameworks using function pointers.
- Building table-driven software architecture in C.

## Industry Relevance
Used in web frameworks, API gateways, form processors, and configuration validators.

## Interview Relevance
Function pointers and rule engine design interview problem.

## Portfolio Value
High value reusable library project demonstrating advanced C function pointer design.

## Builds On
- Chapter 12 / Easy Project 19 (Safe-Integer-Input-Validator) - Adds multi-field rule table registration, custom callback validation, and detailed error reports.

## Hints
- **Hint 1**: Hint 1: Use typedef for function pointer signature: typedef int (*RuleCallback)(const char *val);
- **Hint 2**: Hint 2: Iterate through all registered rules and execute callback or range check for matching fields.
- **Hint 3**: Hint 3: Store validation errors in a dynamic string array inside ValidationResult.

## Optional Extensions
- Add JSON schema rule importer.
- Add automated sanitization filters.

## Completion Criteria
- Registers validation rules, executes function pointer callbacks, evaluates field inputs, and reports validation errors.
