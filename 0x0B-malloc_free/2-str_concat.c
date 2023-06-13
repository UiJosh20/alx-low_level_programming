#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	char *result;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	result = malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL)
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
