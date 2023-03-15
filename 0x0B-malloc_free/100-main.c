#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 * @ac: argument of an int
 * @av: argument of a char
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	char *s;

	ac = 0;
	av = NULL;
	s = argstostr(ac, av);
	if (s == NULL)
	{
	return (1);
	}
	printf("%s", s);
	free(s);
	return (0);
}
