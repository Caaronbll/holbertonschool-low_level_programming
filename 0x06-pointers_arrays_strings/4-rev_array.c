#include "holberton.h"

/**
 * reverse_array - reverse array
 * @a: array
 * @n: elements
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
	int temp, max;

	max = n - 1;

	while (max >= n / 2)
	{
		temp = a[max - n - 1];
		a[max - n - 1] = a[max];
		a[max] = temp;
		max--;
	}
	return (a);
}
