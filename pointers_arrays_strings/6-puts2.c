#include "main.h"

/**
 * puts2 - prints every other char of a str starting,
 * with the 1st char followed by a new line.
 *
 * @str: prints a string
 */

void puts2(char *str)
{
	int i, j;
	i  = 0;

	while (str[i] != '\0')
		i++;

	for (j = 0; j < i;  j += 2)
		_putchar(str[j]);

	_putchar('\n');
}
