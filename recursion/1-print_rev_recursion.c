#include "main.h"
/**
 * _print_rev_recursion - prints a str, in reverse.
 *
 * @s: ptr to the 1st char of a str
 * return: Always 0 (success);
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}

