#include "lists.h"
/**
 * free_dlistint -  frees a dlistint_t list
 * @head: pointer to the head of the list
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node, *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		node = tmp;
		tmp  = tmp->next;
		free(node);
	}
}

