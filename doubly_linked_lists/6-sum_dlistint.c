#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of the list
 * @head: pointer to the list's head
 * Return: 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum  = sum + head->n;
		head = head->next;
	}
	return (sum);
}
