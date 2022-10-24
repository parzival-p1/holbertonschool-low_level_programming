#include "main.h"

/**
 * _strncpy - func that copies a string
 *
 * @dest: destination string.
 * @src: source string
 * @n: number of bytes of str to concat
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);

}

