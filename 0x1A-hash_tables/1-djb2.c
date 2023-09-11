#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int i;

	h = 5381;
	while ((i = *str++))
	{
		h = ((h << 5) + h) + i; /* h * 33 + i */
	}
	return (h);
}
