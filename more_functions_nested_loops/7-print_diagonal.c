#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the int for the paramaters of my function
 * Return: 0
 */


void print_diagonal(int n)
{
	int o, p;

	if (n <= 0)
		_putchar('\n');
	for (o = 0; o < n; o++)

	{
		for (p = 0; p <= o; p++)
		{
			if (o == p)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
