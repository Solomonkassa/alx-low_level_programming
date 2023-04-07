# Hash Table Implementation in C

This repository contains a simple implementation of a hash table in C programming language.

## Usage

To use the hash table implementation in your code, follow these steps:

1. Copy the `hash_table.h` and `hash_table.c` files to your project directory.
2. Include the `hash_table.h` header file in your code: `#include "hash_table.h"`
3. Create a new hash table by calling the `create_hash_table()` function and passing in the desired size of the hash table:

4. Insert key-value pairs into the hash table using the `insert()` function:

5. Retrieve values from the hash table using the `get()` function:

6. Delete key-value pairs from the hash table using the `delete()` function:


## Functions

### `struct hash_table* create_hash_table(int size)`

This function creates a new hash table with the specified size and returns a pointer to the new hash table.

### `void insert(struct hash_table* ht, char* key, char* value)`

This function inserts a new key-value pair into the hash table.

### `char* get(struct hash_table* ht, char* key)`

This function retrieves the value associated with the specified key from the hash table.

### `void delete(struct hash_table* ht, char* key)`

This function deletes the key-value pair associated with the specified key from the hash table.

## License

This implementation of a hash table is licensed under the [MIT License](LICENSE).

