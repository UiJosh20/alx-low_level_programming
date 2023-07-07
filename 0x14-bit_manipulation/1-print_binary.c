#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be represented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int leading_zeros = 1;

	if (n == 0)
	{
		printf("0");
		return;
	}

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			leading_zeros = 0;
		}
		if (!leading_zeros)
		{
			printf("%d", (n & mask) ? 1 : 0);
		}
		mask >>= 1;
	}
}
