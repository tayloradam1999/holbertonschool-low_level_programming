#include "hash_tables.h"

/**
 * key_index - Gives index of a key
 * @key: Key to find index of
 * @size: Size of hash table
 * Return: Djb2 index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return ((hash_djb2(key) % size));
}
