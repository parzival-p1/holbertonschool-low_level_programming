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

	j = 0;

	while (dest[j] != '\0')
		j++;

	for (i = 0; i < j && src[i] != '\0'; ++i)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);
}

