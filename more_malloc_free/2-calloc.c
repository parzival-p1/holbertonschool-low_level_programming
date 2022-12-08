#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements to be allocated
 * @size: size of var to be allocated
 * Return: void ptr to the newly allocated space in memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		res[i] = 0;
	return (mem);
}

