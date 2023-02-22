#include "main.h"
#include <stdio.h>

/**
 * main - main
 *
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (!size)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (!array)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = c;
	return (array);
}
