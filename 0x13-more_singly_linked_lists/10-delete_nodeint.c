#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: double pointer to the head of the list
 * @index: index of the to be deleted
 * Return: 1 if it succeeded
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous;
	unsigned int count;

	if (current == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head =(*head)->next;
		free(current);
		return (1);
	}

	for (count = 0; count < (index - 1); count++)
	{
		if (current->next == NULL)
		{
			return (-1);
		}
		current = current->next;
	}

	previous = current->next;
	current->next = previous->next;
	free(previous);
	return (1);

}
