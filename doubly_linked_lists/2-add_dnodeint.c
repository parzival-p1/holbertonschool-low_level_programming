#include "lists.h"
/**
 *
 *
 *
 *
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	if (*head == NULL)
	{
		node->next = NULL;
		node->prev = NULL;
		*head = node;
		return (*head);
	}
	(*head)->prev = node;
	node->next = *head;
	*head = node;
	return (*head);
}

