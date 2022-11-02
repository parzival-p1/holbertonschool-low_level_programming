#include "main.h"
/**
 * _memset - fils a memory with a constant byte
 *
 * @s: starting adress of memory
 * @b: value to be filled
 * @n: numbre of bytes to be filled
 * Return: returns a ptr to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i; 

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

