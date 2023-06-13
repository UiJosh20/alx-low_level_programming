#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_array - creates an array of chars and initializes it
 * @size: size of the array
 * @c: chaacter
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc((size + 1) * sizeof(char));

	memset(array, c, size);
	array[size] = '\0';

	return (array);
}
