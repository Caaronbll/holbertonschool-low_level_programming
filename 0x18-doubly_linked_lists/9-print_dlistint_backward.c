#include "lists.h"

/**
 * print_dlistint_backward - printing a list backward
 * @h: head of the list
 * Return: number of nodes
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	dlistint_t *temp = h;
	size_t nodes = 0;

	while (h->next)
		h = h->next;
	

	while (h->prev)
	{
		h->prev = h;
		nodes++;
		printf("%d\n", h->n);
	}
	return (nodes);
}
