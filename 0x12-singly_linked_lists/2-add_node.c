#include "lists.h"
#include <stdio.h>

/**
 * add_node - adds a new node to the beginning of the list
 * @head: pointer to the head of the list
 * @str: string
 * Return: new head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	if (!(newnode))
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = *head;
	*head = newnode;
	(*head)->str = strdup(str);
	(*head)->len = strlen(str);
	(*head)->next = newnode->next;
	return (*head);
}
