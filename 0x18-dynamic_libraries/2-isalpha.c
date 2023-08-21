#include "main.h"
/**
 * _isalpha - print an alpha integer
 * @c: represents an integer
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
