#include "lists.h"

/**
 * free_listint2 - frees a list and sets the head to null
 * @head: double ppointer to the head of the list
 * Return: more memory
 */

void free_listint2(listint_t **head)
{
	listint_t *body = *head;

	while (body)
	{
		body->next = body;
		free(body);
	}

	*head = NULL;
}
