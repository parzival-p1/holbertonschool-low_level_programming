#include "lists.h"
/**
 * add_node_end - adds a node at the beggining of the list
 * @head: ptr to the entry point of the node
 * @str: pointer to a char
 * Return: the addres of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	temp = *head;

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (temp == NULL)
	{
		temp = new;
			return (temp);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new;

	return (new);
}

