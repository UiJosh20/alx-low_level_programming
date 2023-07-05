#include "lists.h"
/**
 * get_nodeint_at_index - returns the node of a list
 * @head: pointer to head
 * @index: index of the node, sstarting at 0
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}
