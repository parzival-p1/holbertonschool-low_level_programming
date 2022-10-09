#include "main.h"
#include <stdlib.h>

/**
 * _abs - computes the absolute value of an integer
 * @i: i is an integer
 *
 * Return: integer
 */

int _abs(int i)
{
	if (i >= 0)
		return (i);
	else
		return (i * -1);
}
