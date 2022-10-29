#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2 dimensiona grid
 *
 * @grid: 2 dimensional arr to be free
 * @height: input height (size)
 * Return: free grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);

		free(grid);
	}
}

