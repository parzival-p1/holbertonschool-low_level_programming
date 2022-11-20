#include "lists.h"
/**
 * add_node - adds a new node to the beggingin of the list
 * @head: entry point of the node
 * @str: ptr to the a char
 *
 * Return: the addres of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	new->len = strlen(str);

	new->next = *head;

	*head = new;

	return (new);
}

