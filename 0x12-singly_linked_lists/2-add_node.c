#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer of struct list_t for beginning
 * @str: pointer to string
 * Return: new node for list
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int count;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (str == NULL)
	{
		new->str = NULL;
		new->len = 0;
		new->next = *head;
	}
	if (new == NULL)
	{
		return (NULL);
	}
	new->next = *head;
	*head = new;
	new->str = strdup(str);

	count = 0;
	while (str[count])
	{
		count++;
	}
	new->len = count;
	return (new);

}
