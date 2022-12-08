#include "main.h"
/**
 * array_range - allocates memory for an array
 * @min: min value of the array
 * @max: max value of the array
 * Return: void ptr to the newly array
 */

int *array_range(int min, int max)
{
	int i, len;
	int *mem;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	mem = malloc(len * sizeof(int));
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		mem[i] = min + i;
	return (mem);
}

