#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: char 1 to be compared
 * @s2: char 2 to be compared
 * Return: returns the compared str
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;	
	}
	return (*s1 - *s2);
}
