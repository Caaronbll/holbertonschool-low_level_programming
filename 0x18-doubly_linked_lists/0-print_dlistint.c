#include "lists.h"

/**
 * print_dlistint - prints all elements of the list
 * @h: head of the list
 * Return: all the data of the list
 */

size_t print_dlistint(const dlistint_t *h);
{
	dlistint_t *temp;
	int nodes = 0;

	temp = h;

	while (h)
	{
	printf("%d", temp->n)
	temp = temp->next;
	nodes++;
	}
	return (nodes);
}
