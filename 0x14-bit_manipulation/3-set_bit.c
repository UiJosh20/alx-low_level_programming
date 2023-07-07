#include "main.h"
/**
 * set_bit - sets the value of a bit to '1' at a given index
 * @n: numbers to be passed
 * @index: index of the bit you want to set
 * Return: 1 if successful or -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}

	*n |= mask;
	return (1);
}
