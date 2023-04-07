#include "hash_tables.h"

/**
 * key_index - function that get the index where key/value is stored
 * @key: type pointer char of key index
 * @size: type pointer char the size of the array
 * Return: Index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
