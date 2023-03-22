#include "lists.h"

/**
 * dlistint_len - counts the number of elements in the linked list
 * @h: head of the list
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
