#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string, followed by a new line
 *
 * @s: represents the string
 *
 * Return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}

	printf("%c", *s);
	_puts_recursion(s + 1);

}
