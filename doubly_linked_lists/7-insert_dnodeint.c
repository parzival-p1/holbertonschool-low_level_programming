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
	dlistint_t *new_n, *temp, *next;

	unsigned int pos = 0;

	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	if (idx == 0)
	{
		new_n->next = *h;
		new_n->prev = NULL;
		(*h) = new_n;
		return (*h);
	}
	temp = *h;
	next = temp->next;
	while (temp)
	{
		if (pos == idx - 1)
		{
			new_n->next = next;
			temp->next  = new_n;
			if (next == NULL)
			{
				new_n->prev = temp;
			}
			else
			{
				next->prev  = new_n;
				new_n->prev = temp;
			}
		}
		pos++;
		temp = temp->next;
		if (temp != NULL)
			next = temp->next;
	}
	if (idx > pos)
		return (NULL);
	return (new_n);
}

