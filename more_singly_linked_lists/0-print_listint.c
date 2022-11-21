#include "lists.h"
/**
 * print_listint - prints all the elements of a list
 * @h: pointer to the the struct listint_t
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count = count + 1;
		printf("%i\n", h->n);
		h = h->next;
	}
	return (count);
}

