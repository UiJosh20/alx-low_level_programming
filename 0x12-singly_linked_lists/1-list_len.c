#include "lists.h"

/**
 * list_len - it shows the amount of elements of a list
 * @h: a linked list
 * Return: return to the numbr of element of the list
 */
size_t list_len(const list_t *h)
{
	size_t josh = 0;

	while (h != NULL)
	{
		h = h->next;
		josh++;
	}
	return (josh);
}
