#include "lists.h"
/**
 * pop_listint - deletes the head node of a list and
 * @head: pointer to a list
 * Return: the head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *new;

	int node = 0;

	if (*head != NULL)
	{
		new  = *head;
		*head = (*head)->next;
		node = new->n;
		free(new);
	}
	return (node);
}

