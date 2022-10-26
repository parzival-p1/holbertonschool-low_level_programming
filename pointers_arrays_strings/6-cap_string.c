#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * 
 * @s: string to be capitalized
 *
 */

char *cap_string(char *s)
{
	
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 65 && s[i] <= 132)
			s[i] = s[i] + 32;
	}
	return (s);
}

