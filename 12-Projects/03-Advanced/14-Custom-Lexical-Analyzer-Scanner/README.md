# Custom Lexical Analyzer Scanner

**Difficulty**: Advanced  
**Project Type**: Text Processing / Parsers  
**Estimated Time**: 6 - 8 hours  

## Objective
Build a lexical analyzer scanning C-like source files and generating classified token streams.

## Problem Statement
Develop a lexical analyzer scanner (lexer) in C that reads source code files, identifies tokens (Keywords, Identifiers, Operators, Numeric Literals, String Literals, Delimiters), tracks line/column locations, and generates a structured token stream.

## Why Build This?
Teaches compiler frontend design, lexical token classification, character state machines, line/column coordinate tracking, and token stream generation.

## Concepts Used
- Lexical Analysis State Machines
- Token Stream Allocation
- Keyword Lookup Tables
- Source Location Tracking

## Prerequisites
Chapter 08 (Strings), Chapter 09 (Structures), Chapter 11 (Dynamic Memory).

## Requirements
- **Requirement 1**: Define `enum TokenType` (TOKEN_KEYWORD, TOKEN_IDENT, TOKEN_INT, TOKEN_OP, TOKEN_DELIM, TOKEN_EOF).
- **Requirement 2**: Read C-like source file character by character.
- **Requirement 3**: Recognize C keywords (`if`, `else`, `while`, `int`, `return`, `void`).
- **Requirement 4**: Track current line number and column number for each scanned token.
- **Requirement 5**: Output token stream table or write token log file.

## Functional Requirements
- **Input**: Source code file path (`sample.c`).
- **Output**: Token stream list with type, lexeme text, line number, and column number.
- **Validation**: Handle comments (`//` and `/* ... */`) by skipping them correctly.
- **Edge Cases**: Unterminated string literal.
Unterminated multi-line comment.
Unknown symbol character.

## Suggested Program Structure
```text
14-Custom-Lexical-Analyzer-Scanner/
├── README.md
├── src/
│   ├── main.c
│   ├── lexer.c
│   └── lexer.h
└── tests/
    └── test_lexer.c
```

## Suggested Functions
- `Lexer* lexer_create(const char *source_code);`
- `Token lexer_next_token(Lexer *lexer);`
- `int is_keyword(const char *lexeme);`
- `void lexer_free(Lexer *lexer);`

## Data Structures
```c
typedef struct { TokenType type; char lexeme[64]; int line; int col; } Token;
typedef struct { const char *source; size_t pos; int line; int col; } Lexer;
```

## File Handling
Read source code file into dynamic text buffer.

## Memory Considerations
Dynamic buffer allocation for source text and token arrays.

## Error Handling
Emit syntax error tokens for unterminated strings or invalid characters.

## Testing Checklist
- [ ] Verify scanning 'int x = 10;' produces KEYWORD(int), IDENT(x), OP(=), INT(10), DELIM(;).
- [ ] Verify line and column numbers match token positions.
- [ ] Verify single-line and multi-line comments are skipped without producing tokens.

## Expected Learning Outcomes
- Building compiler lexical analyzers in C.
- State machine design for programming language tokenization.

## Industry Relevance
Foundational component of compilers (GCC, Clang), code linters, syntax highlighters, and interpreters.

## Interview Relevance
Lexical analysis and string state machine scanner interview problem.

## Portfolio Value
Outstanding compiler engineering portfolio project for GitHub showcase.

## Builds On
- Chapter 12 / Easy Project 04 (Simple-Text-Word-Counter) - Adds formal lexical token classification, line/column tracking, and C keyword lookup.

## Hints
- **Hint 1**: Hint 1: Use a helper function peek_char() to inspect the next character without advancing scanner position.
- **Hint 2**: Hint 2: Store keywords in a static array const char *keywords[] for binary or linear search.
- **Hint 3**: Hint 3: Advance column counter on every character, and reset column = 1 and increment line on '\n'.

## Optional Extensions
- Add support for float literals and hex numbers.
- Add syntax highlighting HTML generator.

## Completion Criteria
- Tokenizes source files, recognizes keywords and literals, tracks line/col locations, and skips comments cleanly.
