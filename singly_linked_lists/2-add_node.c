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
	char *copy = strdup(str);

	list_t* new = (list_t*)malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->next = *head;

	*head = new;

	new->str = copy;

	new->len = strlen(copy);

	return (new);
}

