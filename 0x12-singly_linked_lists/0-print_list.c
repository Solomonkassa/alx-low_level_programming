/*
 * File: 0-print_list.c
 * Auth: Solomon Kassa
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @s: The list_t list.
 *
 * Return: The number of nodes in h.
 */

size_t print_list(const list_t *s)
{
	size_t nodes;

	while (s)
	{
		if (s->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", s->len, s->str);
		
		nodes++;
		s = s->next;
	}

	return (nodes);
}

