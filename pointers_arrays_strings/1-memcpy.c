#include "main.h"

/**
 * _memcpy - copies n bytes from memory area,
 * src to memory area dest 
 *
 * @src: source of n bytes
 * @dest: source of  n bytes
 * @n: bytes to be copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	

	return (dest);
}
