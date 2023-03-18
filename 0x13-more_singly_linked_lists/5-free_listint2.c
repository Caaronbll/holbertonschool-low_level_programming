#include "lists.h"
#include "4-free_listint.c"

/**
 * free_listint2 - frees a list and sets the head to null
 * @head: double ppointer to the head of the list
 * Return: more memory
 */

void free_listint2(listint_t **head)
{
	if (!head)
		return;
	free_listint(*head);
	*head = NULL;
}
