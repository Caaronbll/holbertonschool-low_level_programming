#include "main.h"
#include <stdio.h>

/**
 *print_triangle - Function that prints a triangle, followed by a new line.
 *@size: size of triangle
 *Return: Always 0.
 */

void print_triangle(int size)
{
int x, y;
int space;

	if (size > 0)
	{
	for (y = 0; y < size; y++)
	{
		space = size - y - 1;
		for (x = 0; x < size; x++)
		{
			if (space > x)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
