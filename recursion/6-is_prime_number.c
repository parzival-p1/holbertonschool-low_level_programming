#include "main.h"
/**
 * is_prime_number - returns 1 if the input int is a
 * prime number if not returns 0
 * @n: number to be evaluated
 * Return: 1 if prime num, 0 if not a prime number
 */

int is_prime_number(int n)
{
	int div;

	div = 2;
	div = calc(n, div);
	return (div);
}

/**
 * calc - Calculates if a num is prime
 * @n: number to check if prime
 * @div: counter for prime
 *
 * Return: 1 if prime 0 if not
 */
int calc(int n, int div)
{
	/* prime */
	if (n == div)
		return (1);

	/* not prime */
	if (n % div == 0 || n <= 1)
		return (0);

	return (calc(n, div + 1));
}

