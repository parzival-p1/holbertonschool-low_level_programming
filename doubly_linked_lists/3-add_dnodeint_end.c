#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of the list
 * @head: double pointer to the list's head
 * @n: integer data
 * Return: the addres of the new node, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *tmp;

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

	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	node->next = NULL;
	node->prev = tmp;
	tmp->next  = node;
	return (*head);
}

