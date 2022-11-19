#include "lists.h"
/**
 * list_len - returns the number of elements in
 * @h: the pointer to the header
 * Return: the number of elements of list_t
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count = count + 1;

		h = h->next;
	}
	return (count);
}

