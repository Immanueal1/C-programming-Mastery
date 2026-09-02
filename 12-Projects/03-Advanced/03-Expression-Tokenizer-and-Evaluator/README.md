# Expression Tokenizer and Evaluator

**Difficulty**: Advanced  
**Project Type**: Text Processing / Parsers  
**Estimated Time**: 6 - 8 hours  

## Objective
Tokenize mathematical expression strings and evaluate using dynamic stacks and precedence parsing.

## Problem Statement
Develop an infix mathematical expression evaluator that parses math strings containing numbers, operators (+, -, *, /), and parentheses into tokens, evaluates values using dynamic stack structures, and handles operator precedence.

## Why Build This?
Teaches compiler lexical tokenization, stack data structures, operator precedence parsing algorithms (Shunting-Yard), and memory cleanup.

## Concepts Used
- String Lexical Tokenization
- Dynamic Stacks (Array/LinkedList)
- Operator Precedence Parsing
- Memory Cleanup

## Prerequisites
Chapter 06 (Pointers), Chapter 08 (Strings), Chapter 11 (Dynamic Memory).

## Requirements
- **Requirement 1**: Lexically tokenize math expression string into token array.
- **Requirement 2**: Implement dynamic value stack and operator stack.
- **Requirement 3**: Evaluate expression respecting operator precedence (* / over + -) and parentheses.
- **Requirement 4**: Report syntax errors (unbalanced parens, division by zero).

## Functional Requirements
- **Input**: Math expression string (e.g. '(3 + 5) * 2 - 4 / 2').
- **Output**: Evaluated double result value, or syntax error message.
- **Validation**: Check for division by zero. Validate balanced parentheses.
- **Edge Cases**: Unary minus (e.g. '-5 + 3').
Mismatched parentheses '((3+2)'.
Division by zero '5 / 0'.

## Suggested Program Structure
```text
03-Expression-Tokenizer-and-Evaluator/
├── README.md
├── src/
│   ├── main.c
│   ├── eval.c
│   └── eval.h
└── tests/
    └── test_eval.c
```

## Suggested Functions
- `int tokenize_expression(const char *expr, Token **out_tokens, int *out_count);`
- `int evaluate_tokens(const Token *tokens, int count, double *out_result);`
- `int get_operator_precedence(char op);`

## Data Structures
```c
typedef enum { TOKEN_NUM, TOKEN_OP, TOKEN_LPAREN, TOKEN_RPAREN } TokenType;
typedef struct { TokenType type; double value; char op; } Token;
```

## File Handling
None required.

## Memory Considerations
Dynamic allocation of token array and stack memory; clean up all dynamic memory post evaluation.

## Error Handling
Return error codes for ERR_SYNTAX, ERR_DIV_ZERO, ERR_UNBALANCED_PAREN.

## Testing Checklist
- [ ] Verify '3 + 5 * 2' evaluates to 13 (precedence respected).
- [ ] Verify '(3 + 5) * 2' evaluates to 16 (parentheses respected).
- [ ] Verify '5 / 0' returns division by zero error.

## Expected Learning Outcomes
- Implementing lexical tokenization and expression parsing.
- Building dynamic stack data structures in C.

## Industry Relevance
Core compiler design concept used in interpreters, query parsers, and calculator engines.

## Interview Relevance
Expression evaluation (Shunting-Yard algorithm) is a classic computer science interview question.

## Portfolio Value
Exceptional portfolio project showcasing compiler parsing and stack structures.

## Builds On
- Chapter 05 / Project 01 (modular_calculator) - Adds string expression tokenization, operator stack evaluation, and nested parenthetical parsing.

## Hints
- **Hint 1**: Hint 1: Break parsing into two distinct stages: Tokenizer (string -> tokens) and Evaluator (tokens -> result).
- **Hint 2**: Hint 2: Use two dynamic stacks: one for numeric values (double) and one for operators (char).
- **Hint 3**: Hint 3: Pop and evaluate higher-precedence operators from operator stack before pushing lower-precedence operators.

## Optional Extensions
- Add support for math functions (sin, cos, sqrt).
- Add variable assignment (e.g., 'x = 10; x * 2').

## Completion Criteria
- Accurately tokenizes math strings, respects precedence and parentheses, handles errors, and frees dynamic memory.
