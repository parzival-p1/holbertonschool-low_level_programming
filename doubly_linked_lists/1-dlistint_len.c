#include "lists.h"
/**
 * dlistint_len - return all the elements of a list
 * @h: ptr to the head
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

