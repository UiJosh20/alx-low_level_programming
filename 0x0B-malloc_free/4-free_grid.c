#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimentional grid
 * @grid: grid created by alloc
 * @height: height of the free grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
