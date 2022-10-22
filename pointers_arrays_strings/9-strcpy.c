#include "main.h"

/**
 * _strcpy - copy the str pointed to src
 *
 * @dest: point to the buffer in which we cp the str
 * @src: str to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (src[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];

	}
	dest[i] = '\0';

	return (dest);
}
