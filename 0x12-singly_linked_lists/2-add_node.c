#include <stdlib.h>
#include <string.h>
#include "list.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer of struct list_t for beginning
 * @str: pointer to string
 * Return: new node for list
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int count;
	list_t *n;

	new = malloc(sizeof(list_t));
	if (str == NULL)
	{
		n->str = NULL;
		n->len = 0;
		n->next = *head;
	}
	if (n == NULL)
	{
		return (NULL);
	}
	n->next = *head;
	*head = n;
	n->str = strdup(str);

	count = 0;
	while (str[count])
	{
		count++;
	}
	new-len = count;
	return (count);

}
