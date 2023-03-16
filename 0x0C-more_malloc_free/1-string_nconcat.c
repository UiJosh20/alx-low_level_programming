#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string to be concatenated
 * @n: the postive integer
 *
 * Return: array of character
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, copy_len;
	char *r;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (s2_len < n)
	{
		copy_len = n;
	}
	else
	{
		copy_len = n;
	}

	r = malloc(s1_len + copy_len + 1);
	if (r == NULL)
	{
		return (NULL);
	}

	memcpy(r, s1, s1_len);
	memcpy(r + s1_len, s2, copy_len);
	r[s1_len + copy_len] = '\0';

	return (r);
}


