#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linekd list
 * @head: Pointer to head
 * @index: Index of the node, starting at 0
 * Return: Nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new_node;

	unsigned int x = 0;
	new_node = head;

	while (x < index)
	{
		new_node = new_node->next;
		if ((x + 1) < index && new_node->next == NULL)
		{
			return (NULL);
		}
		x++;
	}
	return (new_node);
}
