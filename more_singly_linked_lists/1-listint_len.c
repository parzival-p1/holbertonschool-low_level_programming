#include "lists.h"
/**
 * listint_len - returns the number of elements in a
 * linked list listint_t list
 * @h: pointer to the struct listint_t
 * Return: the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count = count + 1;
		h = h->next;
	}
	return (count);
}

