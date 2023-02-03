#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of lines and spaces
 * Return: void
 */

print_diagonal(int n)
{
	int line, start;

	for (line = 0; line < n; line++)
	{

		for (start = 0; start < n; start++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
