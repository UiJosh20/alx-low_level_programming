#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - returns the lenght of a string
 * @s: this represents the string
 * Return: always 0
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
