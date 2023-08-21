#include "main.h"
/**
 * _islower - print a lower number
 * @c: represents an integer
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
