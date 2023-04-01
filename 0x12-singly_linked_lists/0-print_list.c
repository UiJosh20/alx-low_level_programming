#include "lists.h"

/**
 * print_list - this will print all the elements of a list
 * @h: this is a linked list
 *
 * Return: it should return the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		nodes++;
		h = h->next;
	}
	return (nodes);
}
