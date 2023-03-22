#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: head of the list
 * Return: more memory
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = *head;

	while (tmp)
	{
		free(tmp->n);
		tmp = tmp->next;
	}
	free(head);
}
