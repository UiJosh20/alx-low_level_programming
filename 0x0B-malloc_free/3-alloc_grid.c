#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
	int *column;
	int **grid;
	int row;
	int col;
	int count;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}

	column = (int *)malloc(width * height * sizeof(int));
	if (column == NULL)
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}
	row = 0;
	col = 0;
	count = 0;
	while (count < height)
	{
		grid[count] = column + (row * width) + col;
		col++;
		if (col == width)
		{
			col = 0;
			row++;
		}
		count++;
	}
	return (grid);
}
