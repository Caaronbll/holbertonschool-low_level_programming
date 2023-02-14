#include "holberton.h"
#include <stdio.h>

/**
 * print_chessboard - prints chess board
 * @a: row of array
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
