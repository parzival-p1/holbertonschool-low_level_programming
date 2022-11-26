#include "lists.h"
/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 * @h: ptr to the head
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		count++;
		printf("%i\n", h->n);
		h = h->next;
	}
	return (count);
}

