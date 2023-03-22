#include "lists.h"

/**
 * print_dlistint_backward - printing a list backward
 * @h: head of the list
 * Return: number of nodes
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	dlistint_t *temp = h;
	int nodes = 0;

	while (temp->next)
	{
		temp->next = temp;
	}

	while (temp->prev)
	{
		temp->prev = temp;
		node++;
		printf("%d\n", temp->n);
	}
	return (nodes);
}
