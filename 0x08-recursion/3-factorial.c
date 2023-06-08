#include "main.h"
#include <stdio.h>
/**
 * factorial - returns the factorial of a given number
 * @n: this represent the number
 * Return: factorial of a num
 */
int factorial(int n)
{
	if (n <= 1)
	{
	return (1);
	}
	else
	return (n * factorial(n - 1));
}
