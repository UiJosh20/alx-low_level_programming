#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of integers
 * @min: minimum valur
 * @max: maximum value
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	ar = malloc((max - min + 1) * sizeof(int));
	if (ar == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i <= max - min)
	{
		ar[i] = min + i;
		i++;
	}
	return (ar);
}
