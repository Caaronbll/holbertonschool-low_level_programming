#include "lists.h"

/**
 * print_dlistint - prints all elements of the list
 * @h: head of the list
 * Return: all the data of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;


	while (h)
	{
	printf("%d\n", h->n);
	h = h->next;
	nodes++;
	}
	return (nodes);
}
