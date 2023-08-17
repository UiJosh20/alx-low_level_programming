#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to the next node
 * @index: index of the list
 * Return: 1 if succeed -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;
	dlistint_t *node_to_delete = current->next;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	while (i < index - 1)
	{
		if (current == NULL || current->next == NULL)
		{
			return (-1);
		}
		current = current->next;
		i++;
	}
	current->next = node_to_delete->next;
	if (node_to_delete->next != NULL)
	{
		node_to_delete->next->prev = current;
	}
	free(node_to_delete);
	return (1);
}
