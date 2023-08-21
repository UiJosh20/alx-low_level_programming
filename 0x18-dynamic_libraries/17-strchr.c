#include "main.h"
/**
 * _strchr - print char of string
 * @s: string
 * @c: character
 * Return: a character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}
