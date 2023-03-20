#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: head of the list
 * @index: position of deletion
 * Return: a smaller list
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, del_node;
	unsigned int i = 0;

	if (!head)
		return (-1);

	temp = *head;

	while (temp && i < (index - 1))
	{
		temp = temp->next;
		i++;
	}

	del_node = temp->next;
	temp->next = del_node->next;
	free(del_node);
	return (1);
}
