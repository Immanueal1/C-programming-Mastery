# 🔐 Project 04: The 5-Digit Cryptography Shifter

## Description
Read a 5-digit number. Mathematically extract each digit, add 1 to it (use modulo 10 to wrap 9 back to 0), and recombine the number. Print the encrypted result.

## Concepts Used
- Modulo (`%`) and division (`/`) chaining
- Integer place value recombination (`d5 * 10000 + ...`)
- Modulo 10 wrap-around logic (`(digit + 1) % 10`)
- Pure mathematical cipher

## Folder Contents
- `README.md`: Project specifications.
- `main.c`: Starter source code file.
