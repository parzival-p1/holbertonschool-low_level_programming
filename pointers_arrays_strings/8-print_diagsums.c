#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: ptr to a var
 * @size: int size
 *
 */

void print_diagsums(int *a, int size)
{
	int i, j, row, col, sum = 0;

	int n = sizeof(a)

	for (int i = 0; i < n; i++)
		sum += mat[i][i] + mat[i][n - i - 1];

	if (n % 2)
		sum -= size[n / 2][n / 2];

	return (sum);
}

