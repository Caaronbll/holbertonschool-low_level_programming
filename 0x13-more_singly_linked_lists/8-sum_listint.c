#include "lists.h"

/**
 * sum_listint - adds all the data
 * @head: head of the list
 * Return: sum of the data in the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
