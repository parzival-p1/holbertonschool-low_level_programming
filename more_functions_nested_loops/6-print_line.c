#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a line '_'
 * @n: lenght of line
 * Return: void
 */

void print_line(int n)
{
	int m = 0;

	while (m < n)
	{
		_putchar('_')
		m++;
	}
	_putchar("\n");
}
