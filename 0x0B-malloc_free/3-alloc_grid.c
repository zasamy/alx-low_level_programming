#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a matrix of integers
 *
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to a 2 dimensional array of integers
 * NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	grid = malloc(sizeof(*grid) * height);

	if (width <= 0 || height <= 0 || grid == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(sizeof(**grid) * width);

			if (grid[i] == 0)
			{
				while (i--)
					free(grid[i]);
				free(grid);
				return (NULL);
			}

			for (j = 0; j < width; j++)
				grid[i][j] = 0;
		}
	}
	return (grid);
}

