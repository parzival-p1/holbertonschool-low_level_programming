#include "main.h"
/**
 * _puts_recursion - prints a str, followed by a new line
 *
 * @s: ptr to a str of charachters
 *
 *
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(*(s++));
	}
	_putchar('\n');
}

