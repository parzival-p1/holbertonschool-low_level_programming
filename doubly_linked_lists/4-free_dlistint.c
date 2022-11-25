#include "lists.h"
/**
 *
 *
 *
 *
 *
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

