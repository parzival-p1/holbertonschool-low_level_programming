#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: pointer to the struct list_t
 *
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}

