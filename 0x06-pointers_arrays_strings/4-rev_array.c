#include "holberton.h"

/**
 * reverse_array - reverse array
 * @a: array
 * @n: elements
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
	int temp;
	int *end = a + n - 1;

	while (a != end && n > 0)
	{
		tmp = *a;
		*a = *end;
		*end = tmp;
		if (a + 1 == end)
			break;
		a++;
		end--;
	}
}
