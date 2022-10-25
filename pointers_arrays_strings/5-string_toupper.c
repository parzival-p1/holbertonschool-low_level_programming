#include "main.h"

/**
 * string_touppeer - changes all lowcase letter to uppcase.
 *
 * @s: string to modify
 * Return: the resulting str
 */

char *string_toupper(char *j)
{
	int i;

	for (i = 0; j[i] != '\0'; i++)
	{
		if (j[i] >= 65 && j[i] <= 90)
		{
			j[i] =	j[i] + 32;
		}
	}
	return (j);
}
