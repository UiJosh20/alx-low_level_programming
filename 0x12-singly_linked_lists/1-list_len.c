#include "lists.h"
/**
 * list_len - Returns the number of elements in a list
 * @h: a pointer to the head
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 1;
	if (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
