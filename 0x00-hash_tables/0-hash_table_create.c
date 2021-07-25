#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: Size of the hash table to be made
 * Return: Pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHash;
	unsigned long int i = 0;

	newHash = malloc(sizeof(hash_table_t));

	if (newHash == NULL)
		return (NULL);

	newHash->size = size;
	newHash->array = malloc(sizeof(hash_node_t *) * size);

	if (newHash->array == NULL)
	{
		free(newHash);
		return (NULL);
	}

	while (i < size)
		newHash->array[i++] = NULL;

	return (newHash);
}
