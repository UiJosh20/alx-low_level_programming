#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of type of argument passed
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *str;
	int num;
	char ch;
	float f;

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				ch = (char)va_arg(args, int);
				printf("%c", ch);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d", num);
				break;
			case 'f':
				f = (float)va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				printf("(nil)");
				else
				printf("%s", str);
				break;
		}
		if (format[i + 1])
		printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
