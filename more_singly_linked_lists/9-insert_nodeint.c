#include "lists.h"
/**
 * insert_nodeint_at_index - adds a new node at the end of a list
 * @head: pointer to the struct listint_t
 * @idx: index of the list
 * @n: integer value
 * Return: the addres of the new element
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_n, *temp;

	unsigned int pos;

	if (head == NULL)
		return (NULL);

	new_n = malloc(sizeof(listint_t));

	if (new_n == NULL)
		return (NULL);

	new_n->n = n;

	if (idx == 0)
	{
		new_n->next = *head;
		(*head) = new_n;
		return (*head);
	}

	temp = *head;
	pos = -1;
	while (temp)
	{
		pos++;
		if (pos == idx - 1)
		{
			new_n->next = temp->next;
			temp->next = new_n;
		}
		temp = temp->next;
	}
	if (idx > pos)
		return (NULL);
	return (new_n);
}

