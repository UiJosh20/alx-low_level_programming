#include "main.h"
/**
 * flip_bits - returns the number of bits to be flipped
 * @n: numbers passed
 * @m: numbers flipped
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result != 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
