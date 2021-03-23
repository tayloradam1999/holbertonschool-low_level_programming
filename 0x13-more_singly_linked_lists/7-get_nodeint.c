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

	if (index >= listint_len(head))
		return (NULL);	

	while (x < index)
	{
		new_node = new_node->next;
		x++;
	}
	return (new_node);
}
