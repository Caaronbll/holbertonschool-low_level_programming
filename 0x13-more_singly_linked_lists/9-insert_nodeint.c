#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given index
 * @head: head of the list
 * @idx: index in lest for added node
 * @n: data of new node
 * Return: newnode
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp = *head;
	listint_t *newNode = malloc(sizeof(size_t));

	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (temp)
	{
		if (i == idx - 1)
			break;
		i++;
		temp = temp->next;
	}

	if (i < idx - 1)
		return (NULL);

	newNode->next = temp->next;
	temp->next = newNode;

	return (&newNode);
}
