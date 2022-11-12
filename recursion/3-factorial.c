#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: any given number
 *
 * return: Always 0 (success)
 * factorial: factorial of a given numbe
 * factorial: factorial of a given number
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

