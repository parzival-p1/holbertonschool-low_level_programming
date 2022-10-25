#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: char 1 to be compared
 * @s2: char 2 to be compared
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((*s1  != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	i = (*s1 == *s2) ? 0 : (*s1 > *s2) ? 1 : -1;

	return (i);
}

