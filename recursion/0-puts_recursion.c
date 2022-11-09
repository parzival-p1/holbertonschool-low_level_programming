#include "main.h"
/**
 * _puts_recursion - prints a str, followed by a new line
 *
 * @s: ptr to the 1st element of a str of charachters
 * return: Always 0 (success);
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
		_putchar(s++);
}

