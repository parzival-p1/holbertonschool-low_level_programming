#include "main.h"

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
		putchar('_');
		m++;
	}
	putchar("\n");
}
