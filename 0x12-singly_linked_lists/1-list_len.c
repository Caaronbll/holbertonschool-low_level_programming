#include "lists.h"
#include <stdio.h>

/**
 * list_len - counts the length of list
 * @h: head pointer
 * Return: number of nodes in list
 */

size_t list_len(const list_t *h)
{
	const list_t *body = h;
	int nodes = 0;

	while (body)
	{
		nodes++;
		body = body->next;
	}
	return (nodes);
}
