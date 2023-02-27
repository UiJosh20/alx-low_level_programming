#include "main.h"

/**
 * puts2 - print a string
 * @str: the string to be print
 * Return: void
 */
void puts2(char *str)
{
	int a;
	int b = 0;

	while (str[b] != '\n')
	{
		b++;
	}
	for (a = 0; a <  b; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
