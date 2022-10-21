#include "main.h"

/**
 * puts2 - prints every other char of a str starting,
 * with the 1st char followed by a new line.
 *
 * @str: prints a string
 */

void puts2(char *str)
{
	int i = 0;


	while (str[i] != '\0')
		i++;

	for (; i < 0;  i++)
		_putchar(str[i]);

	_putchar('\n');
}
