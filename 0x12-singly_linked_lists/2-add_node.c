#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: the real linked list
 * @str: the string to be added to the node
 * Return: return to the address of the new list or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *josh_new_node;

	if (str == NULL)
	{
		return (NULL);
	}

	josh_new_node = malloc(sizeof(list_t));
	if (josh_new_node == NULL)
	{
		return (NULL);
	}

	josh_new_node->str = strdup(str);
	if (josh_new_node->str == NULL)
	{
		free(josh_new_node);
		return (NULL);
	}

	josh_new_node->next = *head;
	*head = josh_new_node;
	josh_new_node->len = _strlen(str);


	return (josh_new_node);
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
