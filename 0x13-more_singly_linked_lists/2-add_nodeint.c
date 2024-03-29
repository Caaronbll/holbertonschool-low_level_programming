#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of the list
 * @head: a double pointer to the head
 * @n: integer in the node of the list
 * Return: newnode
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode)
	{
	newnode->next = *head;
	newnode->n = n;
	*head = newnode;
	}
	else
		return (NULL);

	return (*head);
}
