#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: string to print
 * Return: void
 */
void _puts(char *str)tr
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
