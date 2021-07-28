#include "hash_tables.h"

/**
 * ht_newpair - Creates new key-value pair
 * @key: Key to new pair
 * @value: Value to new pair
 * Return: New pair
 */

hash_node_t *ht_newpair(const char *key, const char *value)
{
	hash_node_t *newpair;

	newpair = malloc(sizeof(hash_node_t));
	if (!newpair)
		return (NULL);

	newpair->key = strdup(key);
	if (!newpair->key)
		return (NULL);

	newpair->value = strdup(value);
	if (!newpair->value)
		return (NULL);

	newpair->next = NULL;
	return (newpair);
}

/**
 * hash_table_set - Adds element to Hash Table
 * @ht: Hash Table to use
 * @key: Key as to where to insert element
 * @value: Value to give element
 * Return: 1 if successful, 0 if failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *newpair = NULL;
	hash_node_t *next = NULL;
	hash_node_t *last = NULL;

	if (!ht)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	next = ht->array[idx];

	if (next && next->key && strcmp(key, next->key) == 0)
	{
		free(next->value);
		next->value = strdup(value);
	}
	else
	{
		if (next == ht->array[idx])
		{
			newpair = ht_newpair(key, value);
			if (!newpair)
				return (0);
			if (next == ht->array[idx])
			{
				newpair->next = next;
				ht->array[idx] = newpair;
			}
			else if (next == NULL)
				last->next = newpair;
			else
			{
				newpair->next = next;
				last->next = newpair;
			}
		}
	}
	return (1);
}
