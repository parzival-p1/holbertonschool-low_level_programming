#include "main.h"

/**
 * string_toupper - changes all lowcase letter to uppcase.
 *
 * @s: string to modify
 * Return: the resulting str
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}
	return (s);
}
