#include "list.h"

/**
 * delete_dnodeint_at_index - deletes node at an index
 * @head: head of the list
 * @index: spot of deletion
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;

	if (!head)
		return (-1);

	if (index == 0 && temp)
	{
		if (temp->next)
			temp->next->prev = NULL;
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp)
	{
		if (count == index)
		{
			temp->prev->next = temp->next;
			if (temp->next)
				temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
