#include <stdio.h>

#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: the array
 * @size: number of elements int the array
 * @cmp: a pointer
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
