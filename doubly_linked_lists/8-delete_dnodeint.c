#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at given position
 * @head: pointer to the struct listint_t
 * @index: index of the list
 * Return: 1 if succeded -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *errase;

	unsigned int pos;

	if (head == NULL)
		return (-1);

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		(*head) = temp->next;

		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	temp = *head;
	pos  = 0;
	while (temp)
	{
		if (pos == index)
		{
			errase = temp;
			if (temp->next != NULL)
			{
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
			}
			else
			{
				temp->prev->next = NULL;
			}
			free(errase);
			return (1);
		}
		pos++;
		temp = temp->next;
	}
	if (index > pos)
		return (-1);
	return (1);
}

