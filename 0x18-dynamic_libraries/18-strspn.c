#include "main.h"
/**
 * _strspn -  returns spacing of a string
 * @s: string
 * @accept: to accept
 * Return: an integer
 */
unsigned int _strspn(char *s, char *accept)
{
	size_t count = 0;

	while (*s != '\0')
	{
		if (strchr(accept, *s) == NULL)
		{
			return (count);
		}
		count++;
		s++;
	}
	return (count);

}
