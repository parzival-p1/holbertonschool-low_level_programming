#include "main.h"
#include <string.h>
/**
 * _strchr - locates a char in a str
 *
 * @s: string to be located
 * @c: charachter to be located
 * Return: ptr to a char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (char *) s;
		str++;
	}
	return (NULL);
}

