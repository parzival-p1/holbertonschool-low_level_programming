#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: pointer to the struct listint_t
 * @index: index of the list
 * Return: return NULL if the node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp, *nth;

	unsigned int pos;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	temp = head;
	pos = 0;
	while (temp)
	{
		if (pos == index)
			nth = temp;

		pos++;
		temp = temp->next;
	}
	if (index > pos)
		return (NULL);
	return (nth);
}

