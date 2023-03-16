#include "lists.h"

/**
 * print_listint - prints all elements of a the list
 * @h: pointer to the head
 * Return: all elements of the list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	int nodes = 0;
	
	if (!(*h))
		return (NULL);

	while (temp)
	{		
		printf("%d\n", temp->n);
		nodes++;
		temp = temp->next;
	}
	return (nodes);
}
