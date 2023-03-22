#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of the list
 * @head: head of the list
 * @n: data of the node
 * Retrun: address of the new element or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}

	(*head)->prev = newnode;
	newnode->next = *head;
	newnode->n = n;
	newnode->prev = NULL;
	*head = newnode;
	 return (newnode);
}
