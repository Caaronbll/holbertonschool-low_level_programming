#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - makes uppercase
 * @str: string
 * Return: uppercase string
 */

char *string_toupper(char *str)
{
	int i;

	while (str[i])
	{
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	i++;
	}
	return (str);
}
