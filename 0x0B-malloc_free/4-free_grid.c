#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d array
 * @grid: the 2d array
 * @height: the height of the array
 * Return: the result
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height <= 0)
		return;

	for (; i < height ; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
			grid[i] = NULL;
		}
	}

	free(grid);
}
