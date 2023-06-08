#include "main.h"
#include <stdio.h>
/**
 * square_root_assist - helps the sqrt_number code
 * @n: the number
 * @gnumber: the guessed number
 * Return: always integer
 */
int square_root_assist(int n, int gnumber)
{
	if (gnumber * gnumber == n)
	{
		return (gnumber);
	}
	else if (gnumber * gnumber > n)
	{
		return (-1);
	}
	else
	{
		return (square_root_assist(n, gnumber + 1));
	}

}
/**
 * _sqrt_recursion - give the sqaure root of a number
 * @n: the number given
 * Return: Always integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (square_root_assist(n, 0));
}
