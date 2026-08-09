# 📖 Chapter 4: Loop Control Instructions — Theoretical Reference

> Concise theoretical reference on loop constructs, iteration mechanics, pre/post evaluation, and control flow statements in C.

---

## 1. Loop Classification & Syntax Reference

C provides three primary loop statements to execute code blocks repeatedly:

### The `for` Loop
Best used when the initialization, termination condition, and updation can be declared up front.

```c
for (initialization; condition; updation)
{
    // Statements executed while condition is true
}
```

### The `while` Loop
Best used when the loop depends on pre-condition testing before any execution.

```c
initialization;
while (condition)
{
    // Statements executed while condition is true
    updation;
}
```

### The `do-while` Loop
Best used when the loop body must execute **at least once** before checking the condition.

```c
initialization;
do
{
    // Statements executed at least once
    updation;
} while (condition);   // ⚠️ Mandatory trailing semicolon!
```

---

## 2. Loop Execution & Structural Comparison

| Feature | `for` Loop | `while` Loop | `do-while` Loop |
| :--- | :--- | :--- | :--- |
| **Header Syntax** | `(init; cond; update)` | `(condition)` | `do { ... } while(cond);` |
| **Condition Test** | **Before** body execution | **Before** body execution | **After** body execution |
| **Minimum Iterations** | **0** | **0** | **1** |
| **Trailing Semicolon** | No | No | **Mandatory `;`** |
| **Common Use Case** | Fixed range counters | Validation loops | Menu choices, input prompts |

---

## 3. Increment & Decrement Operator Rules

### Pre vs. Post Operator Rules:

- **Post-Increment (`i++`) / Post-Decrement (`i--`)**:
  - *Rule*: **Use value first ➜ Change variable later**.
  - Example: `int i = 5; printf("%d", i++);` ➜ Prints `5`, then `i` becomes `6`.

- **Pre-Increment (`++i`) / Pre-Decrement (`--i`)**:
  - *Rule*: **Change variable first ➜ Use value later**.
  - Example: `int i = 5; printf("%d", ++i);` ➜ `i` becomes `6`, then prints `6`.

```text
POST  ➜ Use Old Value  ➜ Change Variable
PRE   ➜ Change Variable ➜ Use New Value
```

---

## 4. Loop Control Statements

### The `break` Statement
- Immediately terminates the **innermost** loop in which it resides.
- Transfers execution to the statement immediately following the loop body.
- ⚠️ *Nested Loop Warning*: `break` only exits the immediate loop block, not outer parent loops.

### The `continue` Statement
- Skips the remainder of the **current iteration**.
- In `for` loops: Jumps directly to the **updation step** (`i++`), followed by condition evaluation.
- In `while` / `do-while` loops: Jumps directly to the **condition check**.

---

## 5. Common Loop Traps & Mistakes

1. **Missing Semicolon in `do-while`**: Omitting `;` after `while(condition)` causes a compilation error.
2. **Trailing Semicolon after `for` or `while`**: Writing `for(i=0; i<5; i++);` isolates the body and creates a logic bug.
3. **Infinite Loop Trap**: Forgetting to update the iterator variable inside `while` or `do-while` bodies.
4. **Floating-Point Equality Trap**: Writing `f != 1.0` with `float` iterators fails due to binary representation anomalies. Always use `<=` or `>=`.
5. **Short-Circuiting in Loop Conditions**: Expressions like `while(a-- > 0 && ++b < 5)` bypass `++b` if `a-- > 0` fails.
