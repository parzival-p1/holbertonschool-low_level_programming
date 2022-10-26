#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @s: string to be capitalized
 * Return: caps on first letter of a separator
 */

char *cap_string(char *s)
{

	int i, j;
	int cap = 32;
	int sprtrs[] = {44, 59, 46, 63, 34, 40, 41, 123,
				125, ' ', '\n', '\t'}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - cap;
			cap = 0;

		for (j = 0; j  <= 12; j++)
		{
			if (n[i] == sprtrs[j])
				j = 12;
				cap = 32;
		}

	}
	return (s);
}


