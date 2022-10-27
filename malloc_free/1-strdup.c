#include "main.h"
#include <stdlib.h>
/**
 * _strsup - returns a *ptr to a new allocate, 
 * space in memory.
 *
 * @str: string to be copied.
 * Return: returns a pointer to the duplicated str
 */

char *_strdup(char *str)
{
	int *c;
	
	int i = 0;

	c = malloc(sizeof((char) * str)); 

	if (c == NULL || str == NULL)
		return (NULL);

	for (; i < c; i++)
		c[i] = str;

	return(c);

	free(c);
}

