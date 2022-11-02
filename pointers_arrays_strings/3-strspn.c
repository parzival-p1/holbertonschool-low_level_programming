#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 *
 * @s: initial string
 * @accept: source
 * Return: Always 0 (succes)
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accepti[j] != '\0' && accept[j] != s[i]; j++)
			;

			if (s[i] == accept[j])
				len++;
			if (accept[j] == '\0')
				return (len);
	}
	return (len);
}
