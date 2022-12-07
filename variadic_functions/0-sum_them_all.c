#include "variadic_functions.h"
/**
 * sum_them_all - retunr the sum of all its parameters
 * @n: elements to be sum
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, const unsigned int);
	}
	va_end(valist);
	return (sum);
}

