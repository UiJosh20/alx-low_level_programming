#include "main.h"
#include <stdbool.h>
#include <string.h>
/**
 * is_helper - helps the is_palindrome code
 * @str: string
 * @x: an integer
 * @e: an integer
 * Return: Always an integer
 */

bool is_helper(char *str, int x, int e)
{
	if (x >= e)
	{
		return (true);
	}
	if (str[x] != str[e])
	{
		return (false);
	}
	return (is_helper(str, x + 1, e - 1));
}

/**
 * is_palindrome - returns for a palindrome string
 * @s: a string
 * Return: Always 0
 */
int is_palindrome(char *s)
{
	int length = strlen(s);
	return (is_helper(s, 0, length - 1));
}


