#include "main.h"

/**
  * _isupper - Check if a letter is upper
  * @c: The character to be checked
  *
  * Return: 1 if c is a uppercase, 0 for otherwise
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
