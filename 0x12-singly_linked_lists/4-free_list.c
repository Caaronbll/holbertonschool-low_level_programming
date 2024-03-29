#include "lists.h"
#include <stdio.h>

/**
 * free_list - frees a list
 * @head: pointer to the head of the list
 * Return: a freed list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
