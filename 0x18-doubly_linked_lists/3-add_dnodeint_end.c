#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: head of the list
 * @n: data point
 * Return: address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *newnode;

	*newnode = malloc(sizeof(*newnode));
	temp = *head;

	while (temp->next)
		temp = temp->next;

	temp->next = newnode;
	newnode->n = n;
	newnode->prev = temp;
	newnode->next = NULL;

	return (newnode);
}
