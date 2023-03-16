#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: head of the list
 * @n: input integer
 * Return: address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(size_t));
	listint_t *temp = *head;

	if (newnode)
	{
		while (temp)
			temp = temp->next;
		temp->next = newnode;
		newnode->n = n;
		newnode->next = NULL;

	}
	else
		return (NULL);

return (newnode);
}
