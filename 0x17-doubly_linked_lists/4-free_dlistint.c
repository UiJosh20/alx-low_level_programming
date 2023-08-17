#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of a list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *temp = current;

	while (current != NULL)
	{
		current = current->next;
		free(temp);
	}
}
