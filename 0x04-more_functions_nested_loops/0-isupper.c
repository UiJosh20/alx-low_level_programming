#include "main.h"

/**
  * _isupper - Check if a letter is upper
  * @x: The number to be checked
  *
  * Return: 1 for upper letter or 0 for any else
  */
int _isupper(int c)
{
	if (c >= 60 && c <= 90)
	{
	return 1;
	}
	else
	{
	return 0;
	}
}
