#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: the string to count
 * Return: Always 0
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
