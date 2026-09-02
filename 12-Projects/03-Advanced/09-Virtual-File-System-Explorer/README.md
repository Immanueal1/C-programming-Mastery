# Virtual File System Explorer

**Difficulty**: Advanced  
**Project Type**: Systems Programming / Simulation  
**Estimated Time**: 6 - 8 hours  

## Objective
Build an in-memory virtual file system supporting mkdir, touch, ls, cd, pwd, write, read, and rm.

## Problem Statement
Construct an in-memory virtual file system (VFS) that models hierarchical directories and files using N-ary tree node structures, supporting commands `mkdir`, `touch`, `ls`, `cd`, `pwd`, `write`, `read`, `rm`, and path resolution.

## Why Build This?
Teaches tree data structures, parent-child pointer node relationships, dynamic memory management, path parsing algorithms, and virtual shell command evaluation.

## Concepts Used
- Hierarchical Tree Node Structures
- Dynamic Memory Allocation
- Path Resolution Algorithms
- CLI Shell Command Interpreters

## Prerequisites
Chapter 06 (Pointers), Chapter 09 (Structures), Chapter 11 (Dynamic Memory).

## Requirements
- **Requirement 1**: Define `struct VFSNode` (name, is_directory, size, data, parent, children[], child_count).
- **Requirement 2**: Implement VFS commands
- **Requirement 3**: Support absolute paths (`/docs/notes.txt`) and relative paths (`../src`).
- **Requirement 4**: Recursively deallocate tree memory on exit (`vfs_destroy`).

## Functional Requirements
- **Input**: VFS shell commands and path arguments.
- **Output**: Directory listings, file contents, working directory path, status errors.
- **Validation**: Prevent duplicate directory/file creation in same folder. Prevent cd into file.
- **Edge Cases**: rm -r on directory containing subdirectories.
cd .. at root directory '/'.
Path containing non-existent directory.

## Suggested Program Structure
```text
09-Virtual-File-System-Explorer/
├── README.md
├── src/
│   ├── main.c
│   ├── vfs.c
│   └── vfs.h
└── tests/
    └── test_vfs.c
```

## Suggested Functions
- `VFSNode* vfs_init();`
- `int vfs_mkdir(VFSNode *current, const char *name);`
- `int vfs_touch(VFSNode *current, const char *name);`
- `VFSNode* vfs_resolve_path(VFSNode *root, VFSNode *current, const char *path);`
- `void vfs_destroy(VFSNode *node);`

## Data Structures
```c
typedef struct VFSNode {
  char name[64];
  int is_dir;
  char *file_data;
  size_t file_size;
  struct VFSNode *parent;
  struct VFSNode **children;
  size_t child_count;
} VFSNode;
```

## File Handling
None required (all in-memory simulation).

## Memory Considerations
Dynamic allocation of VFSNode structs, child pointer arrays, and file_data buffers; recursive `free()`.

## Error Handling
Return status codes for ERR_NOT_FOUND, ERR_IS_FILE, ERR_ALREADY_EXISTS.

## Testing Checklist
- [ ] Verify mkdir creates directory and cd updates current working directory.
- [ ] Verify touch and write stores file text and cat displays content.
- [ ] Verify vfs_destroy recursively frees all directory tree nodes without leaks.

## Expected Learning Outcomes
- Building hierarchical tree data structures in C.
- Implementing path resolution algorithms and virtual shells.

## Industry Relevance
Directly mirrors virtual file system (VFS) abstractions in operating systems like Linux and embedded file systems.

## Interview Relevance
In-memory file system design is a famous senior software engineering interview question.

## Portfolio Value
Outstanding systems programming portfolio project demonstrating tree structures and path parsing.

## Builds On
- Chapter 09 / Project 01 (student_information_manager) - Adds hierarchical node structs, path parsing, and recursive directory tree traversal.

## Hints
- **Hint 1**: Hint 1: Use a dynamic array of VFSNode* pointers for children nodes in each directory node.
- **Hint 2**: Hint 2: Split path string by '/' delimiter using strtok to resolve path steps iteratively.
- **Hint 3**: Hint 3: Implement pwd by traversing parent pointers up to root node and reversing string path.

## Optional Extensions
- Add export VFS state to JSON file.
- Add permission flags (read-only, execute).

## Completion Criteria
- Manages tree node hierarchy, resolves absolute/relative paths, executes VFS commands, and frees tree memory recursively.
