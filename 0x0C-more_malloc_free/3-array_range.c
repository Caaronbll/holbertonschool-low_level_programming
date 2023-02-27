#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array
 * @min: minimum number in array
 * @max: maximum number in array
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int a = min;
	int b = max;
	int counter;
	int length = b - a;
	int *new_array;

	if (a > b)
		return (NULL);

	new_array = malloc(sizeof(int) * length);

	if (!new_array)
		return (NULL);

	for (counter = min; counter <= max; counter ++)
		new_array[counter] = counter;

	return (new_array);
}
