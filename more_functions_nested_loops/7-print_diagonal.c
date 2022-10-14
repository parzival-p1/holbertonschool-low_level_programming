#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the int for the paramaters of my function
 * Return: 0
 */

void print_diagonal(int n)
{
	int o = 0;
	int p = 0;

	if (n > 0)
	{
		while (o < n)
		{
			while (p < o)
			{
				putchar(' ');
				p++;
			}
			o++;
			p = 0;
			_putchar('\\');
			_putchar('\n');

		}
	}
	else
	_putchar('\n');
}
