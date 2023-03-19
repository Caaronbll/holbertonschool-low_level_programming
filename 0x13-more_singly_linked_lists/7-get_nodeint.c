#include "lists.h"

/**
 * get_nodeint_at_index - get a node at the nth index
 * @head: head of the list
 * index: index of list
 * Return: nth node of index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	int i;

	for (i = 0; i <= index; i++)
	{
		head = head->next;
	}
	
	if (!(*head)->n)
		return (NULL);

	return ((*head)->n);
}
