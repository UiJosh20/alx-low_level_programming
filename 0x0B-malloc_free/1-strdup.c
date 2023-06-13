#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer
 * @str: represents a string
 * Return: copy of a string
 */
char *_strdup(char *str)
{
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	copy = strdup(str);
	if (copy == NULL)
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}
	return (copy);
}
