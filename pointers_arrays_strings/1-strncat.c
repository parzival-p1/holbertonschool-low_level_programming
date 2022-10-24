#include "main.h"

/**
 * _strncat - concatenatest two strings.
 *
 * @dest: destination string.
 * @src: source string
 * @n: num of bytes of str to concat
 *
 * Return: a pointer to the resulting str dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = 0;

	while (dest[len] != '\0')
		len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];

	dest[len + i] = '\0';

	return (dest);
}
