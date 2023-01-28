/*
 * File: 2-add_node.c
 * Auth: Solomon Kassa
 */

#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = dup;
	new->len = _strlen(str);
	new->next = *head;

	*head = new;

	return (new);
}

int _strlen(char *d)
{
    if (*d == NULL)
    {
        return (NULL);
    }
    else
        return (1 + _strlen(d + 1));
}

