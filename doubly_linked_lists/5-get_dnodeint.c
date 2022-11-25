#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at given position
 * @head: pointer to the struct listint_t
 * @index: index of the list
 * Return: 1 if succeded -1 if not
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

