#include "main.h"

/**
 * puts2 - prints everyother char in a string
 * @*str: input string
 * Return: every other charcter
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(srt[i]);
		}
		i++;
	}
	_putchar('\n');
}
