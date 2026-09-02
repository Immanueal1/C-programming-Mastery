# Automated Quiz Evaluation Engine

**Difficulty**: Medium  
**Project Type**: Productivity Tools  
**Estimated Time**: 3 - 5 hours  

## Objective
Load quiz questions from a file, run an interactive CLI test, evaluate answers, and compute scores.

## Problem Statement
Build an automated quiz evaluation engine that parses a question bank file containing multiple-choice questions, options, and correct answer keys, runs an interactive CLI test session, evaluates user responses, and records score summaries.

## Why Build This?
Teaches structured text file parsing, struct array modeling, random shuffling, score calculation, and result persistence.

## Concepts Used
- Struct Arrays
- File Reading & Parsing
- Randomization / Shuffling
- Score Calculation

## Prerequisites
Chapter 08 (Strings), Chapter 09 (Structures), Chapter 10 (File I/O).

## Requirements
- **Requirement 1**: Define `struct Question` (id, text, options[4], correct_opt).
- **Requirement 2**: Parse question bank file formatted with question text, options, and answer keys.
- **Requirement 3**: Run interactive CLI quiz session prompting for user answers (A, B, C, D).
- **Requirement 4**: Compute total score, percentage, pass/fail status, and append result to `quiz_results.txt`.

## Functional Requirements
- **Input**: Question bank file, user choice responses.
- **Output**: Quiz score summary, pass/fail result, appended score log file.
- **Validation**: Validate option choice is A, B, C, or D. Handle empty question file.
- **Edge Cases**: Malformed question format in file.
User enters invalid option choice.
0 questions in bank file.

## Suggested Program Structure
```text
19-Automated-Quiz-Evaluation-Engine/
├── README.md
├── src/
│   ├── main.c
│   ├── quiz.c
│   └── quiz.h
└── tests/
    └── test_quiz.c
```

## Suggested Functions
- `int load_question_bank(const char *filename);`
- `void start_quiz_session();`
- `int evaluate_answer(int q_index, char user_choice);`
- `int save_quiz_result(const char *student_name, int score, int total);`

## Data Structures
```c
struct Question { int id; char text[256]; char options[4][128]; char correct_opt; };
struct Quiz { struct Question questions[50]; int count; };
```

## File Handling
Read structured text question bank file and append quiz results to file.

## Memory Considerations
Static struct array question storage.

## Error Handling
Skip corrupt question lines in bank file gracefully.

## Testing Checklist
- [ ] Verify question bank file loads question text, 4 options, and answer key correctly.
- [ ] Verify correct user answer increments total score.
- [ ] Verify final result appends student name and score to results file.

## Expected Learning Outcomes
- Parsing structured data files into struct arrays.
- Interactive quiz evaluation and score reporting.

## Industry Relevance
Used in online learning platforms, assessment portals, and certification testing software.

## Interview Relevance
Great portfolio application showing file parsing and interactive CLI engineering.

## Portfolio Value
Fun, practical interactive application for GitHub showcase.

## Builds On
- Chapter 03 / Project 02 (student_grade_management) - Adds file-based question parsing, answer validation, and score logging.

## Hints
- **Hint 1**: Hint 1: Use a clean delimiter format in your question file (e.g. Q: | A: | B: | C: | D: | KEY:).
- **Hint 2**: Hint 2: Convert user input option to uppercase using toupper() before comparing with answer key.
- **Hint 3**: Hint 3: Calculate score percentage using (float)correct_count / total_questions * 100.

## Optional Extensions
- Add timer limit per question.
- Add question order random shuffling.

## Completion Criteria
- Parses question files cleanly, runs interactive quiz sessions, scores responses accurately, and appends results to file.
