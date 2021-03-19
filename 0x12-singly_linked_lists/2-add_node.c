#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list
 * @head: Pointer to head of node
 * @str: Data inside node
 * Return: Address of new element or NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
		new_node->str = strdup(str);
		new_node->len = len(str);
		*head = new_node;
	}
	return (*head);
}

int len(const char *str)
{
	int x = 0;

	if (str == NULL)
		return (0);
	while (str[x])
		x++;
	return (x);
}
