#include "main.h"
#include <stdio.h>
/**
 * prime_divisor - the divisor of a prime number
 * @n: an integer
 * @d: a divisor
 * Return: Always an integer
 */
int prime_divisor(int n, int d)
{
	if (d == 1)
	{
		return (0);
	}
	else if (n % d == 0)
	{
		return (1);
	}
	else
	{
		return (prime_divisor(n, d - 1));
	}
}

/**
 * is_prime_number - fucntion of a prime number
 * @n: the number
 * Return: Always integer
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (!prime_divisor(n, n - 1));
}
