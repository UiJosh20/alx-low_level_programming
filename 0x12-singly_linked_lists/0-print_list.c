#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the element of a list
 * @h: pointer
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	printf("[");
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("%s", h->str);
		}
		else
		{
			printf("[0] (nil)");
		}
		count++;
		h = h->next;
		if (h != NULL)
		{
			printf(", ");
		}

	}
	printf("]\n");
	return (count);
}
