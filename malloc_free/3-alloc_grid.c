#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional,
 * arr of integers.
 *
 * @width: width input
 * @height: height imput
 * Return: ptr to 2 dimensional arr of int
 */

int **alloc_grid(int width, int height)
{

	int w, h;

	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (w = 0; w < height; w++)
	{
		grid[w] = malloc(width * sizeof(int));
		if (grid[w] == NULL)
		{
			while (w >= 0)
				free(grid[w--]);
			free(grid);
			return (NULL);
		}

		for (h = 0; h < width; h++)
			grid[w][h] = 0;
	}

	return (grid);
}
