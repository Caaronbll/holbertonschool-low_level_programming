#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of list_t
 * @h: linked list
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	int nodes = 0;
	const list_t *body = h;

	while (body)
	{
		if (!(body->str))
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", body->len, body->str);
		nodes++;

		body = body->next;

	}
	return (nodes);
}
