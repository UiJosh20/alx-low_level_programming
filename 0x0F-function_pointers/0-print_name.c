#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name of a person
 * @f: variable
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
/**
 * printing - print on the console
 * @name: name of person
 * Return: nothing
 */
void printing(char *name)
{
	printf("%s\n", name);
}
