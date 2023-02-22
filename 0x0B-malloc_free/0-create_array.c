#include "main.h"
#include <stdio.h>

/**
 * create_array - creates an array of strings
 * @size: this is the size
 * @c: character
 * Return: an array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (!size)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (!array)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = c;
	return (array);
}
