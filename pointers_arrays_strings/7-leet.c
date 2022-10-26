#include "main.h"

/**
 * char *leet - encodes a str into 1337
 *
 * @s: str to be encodedr
 * Return: returns encoded str into 1337
 */

char *leet(char *s)
{

	int i, j;

	char *a = "aAeEoOtTlL";

	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}

	return (s);
}
