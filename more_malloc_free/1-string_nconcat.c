#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: ptr to the 1st str
 * @s2: ptr to the 2nd str
 * @n: n bytes to be copied
 * Return: point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0;
	char *mem;

	if (s1 != NULL)
	{
		for ( ; s1[i]; i++)
			;
	}
	if (s2 != NULL)
	{
		for ( ; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;

	mem = malloc((i + j + 1) * sizeof(char));
	if (mem == NULL)
		return (NULL);

	for (k; k < i; k++)
		mem[k] = s1[k];
	for (k = 0; k < j; k++)
		mem[k + i] = s2[k];
	mem[i + j] = '\0';
	return (mem);
}

