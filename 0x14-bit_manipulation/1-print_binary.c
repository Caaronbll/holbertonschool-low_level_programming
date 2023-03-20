#include "main.h"

/**
 * print_binary - prints the input in binary
 * @n: long input
 * Return: binary output
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 2, j = 0;

	while (i <= n && j < 62)
	{
		i = i << 1;
		j++;
	}

	if (j != 62)
		i = i >> 1;

	while (i != 0)
	{
		if ((i & n) != o)
		{
			_putchar('1');
			j++;
		}
		else
		{
			_putchar('0');
			j++;
		}
		i = i >> 1;
	}
}
