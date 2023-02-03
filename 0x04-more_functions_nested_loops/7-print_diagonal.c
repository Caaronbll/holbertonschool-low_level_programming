#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of lines and spaces
 * Return: void
 */

void print_diagonal(int n)
{
	int line, start;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (start = 0; start < line; start++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
