#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowcase
 * followed by a new line.
 * Return: Always 0 (succes)
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
