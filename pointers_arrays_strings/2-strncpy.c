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

	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
		dest[i] = '\0';
		i++;

	return (dest);
}
