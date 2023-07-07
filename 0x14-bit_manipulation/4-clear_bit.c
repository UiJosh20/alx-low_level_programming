#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the numbers to be passed
 * @index: is the index of the bit you want to set
 * Return: 1 if success, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}

	*n &= mask;
	return (1);
}
