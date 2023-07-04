#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * free_list - frees a list
 * @head: pointer to head
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *task;

	for (task = head; task != NULL; task = task->next)
	{
		free(task->str);
		free(task);
	}
}
