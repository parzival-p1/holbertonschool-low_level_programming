#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_list - prints all the elements of,
 * a list_t list.
 *
 * @h: ptr to the list_t
 * Return: the numbers of nodes
 */

size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (i);
}

