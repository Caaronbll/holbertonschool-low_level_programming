#include "holberton.h"

/**
 * reverse_array - reverse array
 * @a: array
 * @n: elements
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
	int temp, index;

	index = n - 1;

	while (index >= n / 2)
	{
		temp = a[index - n - 1];
		a[index - n - 1] = a[index];
		a[index] = temp;
		index--;
	}
	return (a);
}
