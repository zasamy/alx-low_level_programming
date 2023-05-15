#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 *
 * @grid: grid to free
 * @height: height of grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (!grid)
		return;
	if (!grid[0])
		return;
	while (height-- > 0)
		free(grid[height]);
	free(grid);
}
