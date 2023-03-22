#include "lists.h"

/**
 * get_dnodeint_at_index - makes a node at an index
 * @head: head of the list
 * @index: index position
 * Return: newnode
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int check = 0;
	dlistint_t *temp = *head;

	while (temp && check < index)
	{
		temp = temp->next;
		check++;
	}
	return (temp);

}
