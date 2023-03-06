#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function iterator for each iteration
 * @array: array
 * @size: size of array
 * @action: function pointer
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
