#include "main.h"
#include "stdio.h"

/**
 * _is - checks for digit 0 - 9 
 * @c: character to checked for digit
 *
 * Return: 1 if is a digit, return 0 if not a digit
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}
