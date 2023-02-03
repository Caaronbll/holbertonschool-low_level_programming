#include "main.h"
#include <stdio.h>

/**
 *print_square - i am printing squares!
 *@size: size of square
 *Return: a square
 */

void print_square(int size)
{
	int h, w;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (h = 1; h <= size; h++)
		{
			for (w = 1; w <= size; w++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
