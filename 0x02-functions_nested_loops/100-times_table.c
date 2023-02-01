#include "main.h"
#include <stdio.h>

/**
 * main - print times table
 *
 * Return: Always 0.
 */

void print_times_table(int n)
{
	int x, y;
	for (x = 0;x <= n; x++)
	{
		for (y = 0;y <= n; y++)
		{
		_putchar('x*y');
		_putchar(', ');
		}
	}
	printf('\n');
}
