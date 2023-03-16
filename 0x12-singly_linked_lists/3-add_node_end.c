#include "lists.h"
#include <stdio.h>

/**
 * add_node_end - adds a new node at the end of the list
 * @head: pointer that points to the head
 * @str: string
 * Return: pointer at the end of the string
 */

list_t *add_node_end(list_t **head, const char *str);
{
	list_t *newnode = malloc(sizeof(size_t));
	list_t *temp = *head;

	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;

	while (*head == NULL)
		head = newnode;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
