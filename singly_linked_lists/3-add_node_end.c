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

	new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	temp->next = new;

	return (new);
}

