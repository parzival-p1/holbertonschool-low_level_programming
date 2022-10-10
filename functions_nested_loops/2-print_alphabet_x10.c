#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowcase
 * 10 times followed by a new line.
 * Return: Always 0 (succes)
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}

			_putchar('\n');
	}
}
