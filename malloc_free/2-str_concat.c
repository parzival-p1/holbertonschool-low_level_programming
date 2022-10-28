#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concat two str
 *
 * @s1: str 1 to be concat
 * @s2: str 2 to be concat
 * Return: pointer to new space in memo or null
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;

	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	c = malloc((i + j + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);

	i = j = 0;
	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		c[i] = s2[j];
		i++, j++;
	}

	c[i] = '\0';
	return (c);
}
