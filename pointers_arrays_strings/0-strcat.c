#include "main.h"

/**
 * _strcat - concatenates two strings.
 *
 * @dest: string to apend to.
 * @src: string to add.
 *
 * Return: a point to the resulting string.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	for (i = 0; i < j && src[i] != '\0'; ++i)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);
}

