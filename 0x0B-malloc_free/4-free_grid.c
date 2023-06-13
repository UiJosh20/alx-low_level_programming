#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees the memory of a 2D grid
 * @grid: address of the 2D grid
 * @height: height of the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
