#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints a string
 * @separator: string to be printed between strings
 * @n: ...
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	s = va_arg(args, char *);
	if (s == NULL)
	{
	printf("(nil)");
	}
	else
	{
	printf("%s", s);
	}
	if (i < n - 1 && separator != NULL)
	{
	printf("%s", separator);
	}
	}
	va_end(args);

	printf("\n");

}
