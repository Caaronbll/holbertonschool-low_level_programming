#include "lists.h"

/**
 * sum_dlistint - sums the nodes
 * @head: head of the list
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (!head)
		return (sum);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
