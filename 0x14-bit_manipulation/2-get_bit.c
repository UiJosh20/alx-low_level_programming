#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the number to be passed
 * @index: is the index starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	mask = 1UL << index;
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	if ((n & mask) == 0)
	{
		return (0);
	}
	return (1);
}
