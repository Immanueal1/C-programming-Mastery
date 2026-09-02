# Password Vault Manager

**Difficulty**: Medium  
**Project Type**: Productivity Tools / Security  
**Estimated Time**: 4 - 5 hours  

## Objective
Build a CLI password vault storing credentials encrypted with XOR cipher in a master file.

## Problem Statement
Develop a secure CLI password vault manager that stores service credentials (service name, username, password) encrypted on disk using a master key XOR cipher, supporting entry creation, lookup, modification, and master key authentication.

## Why Build This?
Teaches bitwise XOR encryption/decryption, secure credential struct modeling, master key validation, and encrypted file persistence.

## Concepts Used
- Bitwise XOR Encryption
- Struct Arrays
- File I/O
- Secure Memory Management

## Prerequisites
Chapter 02 (Operators), Chapter 09 (Structures), Chapter 10 (File I/O).

## Requirements
- **Requirement 1**: Authenticate user using master password hash/checksum.
- **Requirement 2**: Define `struct VaultEntry` (service, username, password).
- **Requirement 3**: Encrypt password data using master key bitwise XOR cipher before saving.
- **Requirement 4**: Decrypt entries in RAM when requested by authenticated user.
- **Requirement 5**: Save/load encrypted vault payload to `vault.bin`.

## Functional Requirements
- **Input**: Master key, service query, credential entry details.
- **Output**: Decrypted credentials for authorized service queries, encrypted vault file.
- **Validation**: Reject unauthorized access on wrong master password. Zero out password RAM buffers after display.
- **Edge Cases**: Wrong master key input.
Empty vault file.
Attempting to retrieve non-existent service.

## Suggested Program Structure
```text
17-Password-Vault-Manager/
├── README.md
├── src/
│   ├── main.c
│   ├── vault.c
│   └── vault.h
└── tests/
    └── test_vault.c
```

## Suggested Functions
- `int vault_authenticate(const char *master_key);`
- `void xor_encrypt_decrypt(char *data, size_t len, const char *key);`
- `int vault_add_entry(const char *service, const char *user, const char *pass);`
- `int vault_save(const char *filename, const char *master_key);`

## Data Structures
```c
struct VaultEntry { char service[64]; char username[64]; char password[64]; };
```

## File Handling
Write encrypted struct payload using binary fwrite in 'wb' mode.

## Memory Considerations
Wipe sensitive password memory buffers with memset(pass, 0, len) after use.

## Error Handling
Return error codes for ERR_AUTH_FAILED, ERR_SERVICE_NOT_FOUND.

## Testing Checklist
- [ ] Verify correct master key unlocks vault and displays credentials.
- [ ] Verify wrong master key fails authentication and blocks access.
- [ ] Verify vault.bin on disk contains encrypted ciphertext, not plaintext passwords.

## Expected Learning Outcomes
- Applying bitwise XOR ciphers for data encryption.
- Practicing secure memory handling by wiping sensitive buffers.

## Industry Relevance
Introduces security concepts used in credential managers, keychains, and secure storage.

## Interview Relevance
Bitwise operations and security-conscious memory management interview topics.

## Portfolio Value
Impressive security utility demonstrating C bitwise manipulation and secure storage.

## Builds On
- Chapter 08 / Project 03 (password_salting_demonstrator) - Adds XOR cipher encryption, master key verification, and secure file storage.

## Hints
- **Hint 1**: Hint 1: Simple XOR cipher repeats master key bytes: data[i] ^= key[i % key_len].
- **Hint 2**: Hint 2: XORing encrypted data again with the same key restores original plaintext.
- **Hint 3**: Hint 3: Always clear password buffers in RAM with memset before exiting.

## Optional Extensions
- Add random password generator utility.
- Add export to encrypted backup file.

## Completion Criteria
- Authenticates master password, securely encrypts credentials on disk using XOR cipher, and wipes sensitive RAM buffers.
