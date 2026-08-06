# 🔒 Security Policy

## Supported Versions

Since **C-Programming-Mastery** is an educational repository containing C code snippets, practice problems, and software projects, security considerations focus primarily on safe coding practices, avoiding buffer overflows, preventing memory leaks, and ensuring safe compiler execution.

| Version / Chapter | Supported |
| :--- | :---: |
| Main Branch (`latest`) | ✅ |

---

## 🛡️ Educational Code Safety Guidelines

When executing code snippets or projects from this repository:

1. **Buffer Overflows**: Avoid unsafe C string functions like `gets()`. Always use safe bounded functions such as `fgets()` or specify string lengths in `scanf("%19s", str)` to prevent stack-based buffer overflows.
2. **Memory Leaks**: Ensure every dynamic allocation via `malloc()`, `calloc()`, or `realloc()` in Advanced/Dynamic Memory chapters is accompanied by a corresponding `free()` call.
3. **Compiler Warnings**: Always compile code with warning flags enabled:
   ```bash
   gcc program.c -o program -Wall -Wextra -std=c11
   ```
4. **Sanitizers**: For debugging memory safety issues, utilize GCC AddressSanitizer:
   ```bash
   gcc program.c -o program -fsanitize=address -g
   ```

---

## 📩 Reporting a Vulnerability or Bug

If you discover a security flaw, dangerous code practice, or potential vulnerability in any code snippet or project within this repository:

1. Open a GitHub Issue with the label `security` or `bug`.
2. Provide a clear description of the flaw, reproduction steps, and potential risk.
3. Maintainers will review and address the issue promptly.
