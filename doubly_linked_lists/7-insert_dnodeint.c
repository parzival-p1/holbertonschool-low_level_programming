#include "lists.h"
/**
 * insert_nodeint_at_index - adds a new node at the end of a list
 * @head: pointer to the struct listint_t
 * @idx: index of the list
 * @n: integer value
 * Return: the addres of the new element
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_n, *temp;

	unsigned int pos = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	temp = *h;

	while (temp)
	{
		if (pos == idx)
		{
			if (temp->next == NULL)
				new_n = add_dnodeint_end(h, n);
			else
			{
				new_n = malloc(sizeof(dlistint_t));
				if (new_n == NULL)
					return (NULL);
				new_n->n = n;

				temp->prev->next = new_n;
				new_n->prev = temp->prev;
				temp->prev  = new_n;
				new_n->next = temp;
			}
		}
		pos++;
		temp = temp->next;
	}
	if (idx > pos)
		return (NULL);
	return (new_n);
}

