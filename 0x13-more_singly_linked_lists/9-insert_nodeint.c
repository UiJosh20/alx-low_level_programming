#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: double pointer to the head of the list
 * @idx: index where the new node should be added
 * @n: value to be stored in the new node
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new_node, *current;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
