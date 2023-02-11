#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - makes uppercase
 * @str: string
 * Return: uppercase string
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
		str[index] -= 32;
	index++;
	}
	return (str);
}
