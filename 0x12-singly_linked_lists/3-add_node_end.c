#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list
 * @head: the real linked list
 * @str: the string to be added to node
 * Return: the address or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *first_node;
	list_t *final_node;

	if (str == NULL)
	{
		return (NULL);
	}

	first_node = malloc(sizeof(list_t));
	if (first_node == NULL)
	{
		return (NULL);
	}

	first_node->str = strdup(str);
	first_node->len = _strlen(str);
	if (first_node->str == NULL)
	{
		free(first_node);
		return (NULL);
	}

	first_node->next = NULL;

	if (*head == NULL)
	{
		*head = first_node;
	}
	else
	{
		final_node = *head;
		while (final_node->next != NULL)
		{
			final_node = final_node->next;
		}
		final_node->next = first_node;
	}
	return (first_node);
}

/**
 * _strlen - Returns the lenght of a string
 * @s: counting string
 * Return: string lenght
 */

int _strlen(const char *s)
{
	int shownum = 0;

	while (*s)
	{
	s++;
	shownum++;
	}
	return (shownum);
}

