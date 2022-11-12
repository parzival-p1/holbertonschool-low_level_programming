#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: any given number
 *
 * return: Always 0 (success)
 */
int factorial(int n)
{
	int i = 0;

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}

