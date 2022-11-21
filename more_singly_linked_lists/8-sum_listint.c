#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a
 * @head: pointer to a list
 * Return: the head node's data (n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{	
			sum = sum + head->n;
			head = head->next;
		}
	}
	return (sum);
}

