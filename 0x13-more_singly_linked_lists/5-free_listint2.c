#include "lists.h"

/**
 * free_listint2 - Frees a list
 * @h: Pointer to head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *new_node;

	while ((*head)->next != NULL)
	{
		new_node = (*head)->next;
		free(*head);
		*head = new_node;
	}

	free(*head);
	*head = NULL;
}
