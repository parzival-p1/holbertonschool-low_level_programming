#include "main.h"
/**
 * rev_string - reverse a string
 *
 * @s: prints a string
 * return: Always 0 (succes)
 */


void rev_string(char *s)
{
	int i;
	int j = 0;
	char k = s[0];

	while (s[j] != '\0')
		j++;

	for (i = 0; i < j; i++)
	{
		j--;
		k = s[i];
		s[i] = s[j];
		s[j] = k;
	}
}

