#include "lists.h"

/**
 * free_listint2 - Frees a list
 * @head: Pointer to head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *new_node;

	while ((*head) != NULL)
	{
		new_node = (*head)->next;
		free(*head);
		*head = new_node;
	}

	*head = NULL;
}
