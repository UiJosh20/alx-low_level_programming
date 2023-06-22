#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all it parameter
 * @n: an integer;
 * Return: the sum of all its parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	int result;
	unsigned int i;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	i = 0;
	result = 0;
	while (i < n)
	{
		result += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (result);
}
