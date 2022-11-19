#include "lists.h"
/**
 * list_len - n that returns the number of elements in
 * a linked list_t list.
 *
 * list_t - struct of the nodes
 * @h: the pointer to the header
 * return: the number of elements of list_t
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

