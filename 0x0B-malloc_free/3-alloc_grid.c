#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a 2D array
 * @width: the width
 * @height: height
 * Return: returns pointer
 */

int **alloc_grid(int width, int height)
{
	 int **arr, i, h, w, j;

	if (width == 0 || height == 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < height ; i++)
	{
		arr[i] = malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			for (j = i - 1; j >= 0 ; j--)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
	}

	for (h = 0 ; h < height ; h++)
	{
		for (w = 0 ; w < width ; w++)
		{
			arr[h][w] = 0;
		}
	}

	return (arr);
}
