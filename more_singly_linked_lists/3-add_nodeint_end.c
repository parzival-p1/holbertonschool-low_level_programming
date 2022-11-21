#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to the struct listint_t
 * n@: integer value
 *
 * Return: the addres of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;
	temp = *head;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
			return (*head);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	new->n = n;
	temp->next = new;

	return (*head);
}

