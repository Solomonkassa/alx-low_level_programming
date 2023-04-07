#include "hash_tables.h"

/**
 * hash_table_set - add an element at the hash table
 * @ht: Type pointer to the hash table
 * @key: Type const char pointer of the key
 * @value: Value of the key
 * Return: 0 if fail or 1 if success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i, idx;
	char *copy_val;
	hash_node_t *new_ht;

	if (ht == NULL || key == NULL || *key == 48 || value == NULL)
		return (0);

	copy_val = strdup(value);
	if (copy_val == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; ++i)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy_val;
			return (1);
		}
	}
	new_ht = malloc(sizeof(hash_node_t));
	if (new_ht == NULL)
	{
		free(copy_val);
		return (0);
	}
	new_ht->key = strdup(key);
	if (new_ht->key == NULL)
	{
		free(new_ht);
		return (0);
	}
	new_ht->value = copy_val;
	new_ht->next = ht->array[idx];
	ht->array[idx] = new_ht;

	return (1);
}
