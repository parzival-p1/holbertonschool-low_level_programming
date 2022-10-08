#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowcase
 * followed by a new line.
 * Return: Always 0 (succes)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
