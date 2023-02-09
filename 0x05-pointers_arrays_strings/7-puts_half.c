#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: half of a string
 */

void puts_half(char *str)
{
	int n, len = 0;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}
	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
