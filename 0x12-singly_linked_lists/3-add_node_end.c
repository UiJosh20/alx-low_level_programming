#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds a node at the end of a list
 * @head: pointer to the head
 * @str: pointer to the strings
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int j;
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (str == NULL)
	{
		return (NULL);
	}
	if (new == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (str[j])
	{
		j++;
	}
	if (*head == NULL)
	{
		*head = new;
		new->len = j;
		new->str = strdup(str);
		new->next = NULL;
		return (new);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->len = j;
	new->str = strdup(str);
	new->next = NULL;
	return (new);
}
