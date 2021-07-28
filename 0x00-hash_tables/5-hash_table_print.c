#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table as a python dictionary
 * @ht: Hash table to print
 * Return: None
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	int roadBlock = 0;
	hash_node_t *out;

	printf("{");
	/* Loop through all nodes in ht */
	for (x = 0; x < ht->size; x++)
	{
		out = ht->array[x];
		/* Only nodes with data */
		while (out != NULL)
		{
			/* only print comma after first node */
			if (roadBlock)
				printf(", ");
			printf("'%s': '%s'", out->key, out->value);
			/* set roadBlock to 1 to catch if statement above */
			roadBlock = 1;
			out = out->next;
		}
	}
	printf("}\n");
}
