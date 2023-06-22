#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string between numbers
 * @n: number of integer passed
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	i = 0;
	while (i < n)
	{
		int num = va_arg(args, int);

		printf("%d", num);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
