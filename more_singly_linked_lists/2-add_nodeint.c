#include "lists.h"
/**
 * listint_t - adds a new node at the beggining of a list
 * @head: head of the node & ptr to the struct
 * @n: intiger value
 * Return: the address of a new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->next = *head;
	new->n = n;
	*head = new;

	return (new);
}

