#include "lists.h"
/**
 * add_dnodeint -  adds a new node at the end of a list
 * @head: double ptr to the list's head
 * @n: integer dat
 * Return: the addres of the new element or NULL if it fails
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
		return (node);
	}
	(*head)->prev = node;
	node->next = *head;
	*head = node;
	return (node);
}

