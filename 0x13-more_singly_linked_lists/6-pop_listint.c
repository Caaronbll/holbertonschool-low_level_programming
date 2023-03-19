#include "lists.h"

/**
 * pop_listint - removes the head node
 * @head: head of the list
 * Return: headnodes data
 */

int pop_listint(listint_t **head)
{
	listint_t *newhead;
	int n = 0;

	if (head)
	{
		newhead = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = newhead;
	}
	return (n);
}
