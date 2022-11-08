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
	int i, j, row, col = 0;

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < size; i++)
		{
			if (i == j)
				row += size[i][j];

			if ((i + j) == (a - 1))
				col += size[i][j];
		}
	}
}

