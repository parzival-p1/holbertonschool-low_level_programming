#include "main.h"
/**
 * _print_rev_recursion - prints a str, in reverse.
 *
 * @s: ptr to the 1st element of a str of charachters
 * return: Always 0 (success);
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
		_putchar(*s);
	_print_rev_recursion(s - 1);
}

