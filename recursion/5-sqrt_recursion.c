#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root,
 * of a number
 *
 * @n: value to be returned
 * Return: if natural sqr root, return -1. Else return
 * natural sqr root
 */
int _sqrt_recursion(int n)
{
	int sqrt_func(int n, int sq);

	int sq = 1;

	return (sqrt_func(n, sq));
}

/**
 * sqrt_func - helper functio to solve _sqrt_recursion
 * compares a given num to the sqr of a natural number
 * of various numbers recursevely
 * @sq: number to determinate if sqr root
 * @n: number to be compared
 * Return: sqr root if natural sqr root, or -1 if not
 */
int sqrt_func(int n, int sq)
{
	if (n == sq * sq)

	{
		return (sq);
	}
	else if (sq < n)
	{
		return (sqrt_func(n, ++sq));
	}
	else

	{
		return (-1);
	}
}

