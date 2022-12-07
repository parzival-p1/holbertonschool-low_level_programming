#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: strint to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int p = 0;
	unsigned int i = 0;
	va_list valist;

	if (separator == NULL)
		separator = "";

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(valist, int);
		printf("%d\n", p);

	}
	va_end(valist);
}

