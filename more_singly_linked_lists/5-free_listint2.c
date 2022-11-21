#include "lists.h"
/**
 * free_listint2 - freess a list
 * @head: pointer to a list
 */

void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			new  = *head;
			*head = (*head)->next;
			free(new);
		}
		head = NULL;
	}
}

