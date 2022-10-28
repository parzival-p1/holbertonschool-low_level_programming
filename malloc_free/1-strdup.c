#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a *ptr to a new allocate, 
 * space in memory.
 *
 * @str: string to be copied.
 * Return: returns a pointer to the duplicated str
 */

char *_strdup(char *str)
{
	int i, len;
	char *arr;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	i++;
	arr = malloc(sizeof(*str) *i)

	if (arr == NULL)
		return (NULL);
	j = 0;

	while (str[len] != '\0')
	{
		arr[len] = str[len];
		len++;
	}
	return (arr);

	free(arr);
}

