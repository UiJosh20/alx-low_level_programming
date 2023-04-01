#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: the pointer to the first node of linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *free_mode;

	while (head != NULL)
	{
		free_mode = head;
		head = head->next;
		free(free_mode->str);
		free(free_mode);
	}
	free(head);
}
