#include "main.h"

/**
 * print_sign - prints the sign of a n number
 * @n: n is an integer
 * return: 1 (if +), 0 (if 0), -1 (if negative)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	else if (n <= 0)
	{
		_putchar(45);
		return (-1);
	}

	else
	{
		_putchar(48);
		return (0);
	}
		_putchar('\n');
}
