#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: Hash Table to look in
 * @key: Key for value
 * Return: Value associted with key, or NULL if key is not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *pair;

	if (!ht)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);

	pair = ht->array[idx];

	while (pair && pair->key && strcmp(key, pair->key) != 0)
		pair = pair->next;

	if (!pair || !pair->key || strcmp(key, pair->key) != 0)
		return (NULL);
	else
		return (pair->value);
}
