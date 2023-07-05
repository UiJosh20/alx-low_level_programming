#include "lists.h"
/**
 * sum_listint - returns the sm of all the data of a list
 * @head: pointer to the head of the list
 * Return: sum of the data oof the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
