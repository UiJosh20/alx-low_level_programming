#include "main.h"
#include <stdio.h>

/**
 * print_rev - print a string in reverse
 * @s: the string to be reversed
 * Return: Always 0
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	for (x -= 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}


