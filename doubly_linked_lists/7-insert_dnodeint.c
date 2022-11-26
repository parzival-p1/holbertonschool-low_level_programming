#include "lists.h"
/**
 * insert_dnodeint_at_index - adds a new node at the end of a list
 * @h: pointer to the struct dlistint_t
 * @idx: index of the list
 * @n: integer value
 * Return: the addres of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_n, *temp;
	unsigned int pos = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));
	temp = *h;

	while (pos < idx && temp)
	{	
		pos++;
		temp = temp->next;
	}

	if (pos == idx && !temp)
		return (add_dnodeint_end(h, n));
		
	else if (temp)
	{
		new_n = malloc(sizeof(dlistint_t));
		if (new_n == NULL)
			return (NULL);
		new_n->n = n;
		temp->prev->next = new_n;
		new_n->prev = temp->prev;
		temp->prev  = new_n;
		new_n->next = temp;

		return (new_n);
	}
	return (NULL);
}

