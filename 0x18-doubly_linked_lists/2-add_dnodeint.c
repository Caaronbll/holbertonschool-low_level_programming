#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of the list
 * @head: head of the list
 * @n: data of the node
 * Retrun: address of the new element or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(*newnode));
	dlistint_t *temp = *head;

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;

	if (!temp)
		newnode->next = NULL;
	else
	{
		while (temp->prev)
			temp = temp->prev;

		temp->prev = newnode;
		newnode->next = temp;
	}
	*head = newnode;

	return (newnode);
}
