#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: the first integer's value to be swapped
 * @b: the second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int zip;

	zip = *a;
	*a = *b;
	*b = zip;
}
