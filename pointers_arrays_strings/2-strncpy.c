#include "main.h"
#include <stddef.h>

/**
 * _strncpy - func that copies a string
 *
 * @dest: destination string.
 * @src: source string
 * @n: number of bytes of str to concat
 * Return: the val that has been copied.
 */

char *_strncpy(char *dest, char *src, int n)
{
	if (dest == NULL)
		return (NULL);

	int i;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	for (i = 0; i < n; i++) 
		dest[i] = '\0';

	return (dest);
}