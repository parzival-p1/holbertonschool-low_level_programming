#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of
 * a listint_t linked list.
 * @head: pointer to the listint_t
 * @index: index of the node, starting at 0
 * Return: the nth node of listint_T
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node, *nth;

	unsigned int count = 0;

	if (head != NULL)
		return (NULL);

	while (count < index)
	{
		if (!node)
		{
			nth = NULL;
			return (nth);
		}
		else
		{
			node = node->next;
			count++;
		}
	}
	nth = node;
	return (nth);
}

