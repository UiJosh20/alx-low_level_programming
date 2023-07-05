#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head of a list
 * @head: pointer to the head
 * Return: and integer
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
