#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words
 * @str: string
 * Return: capital string
 */

char *cap_string(char *)
{
	int index = 0;

	while (str[index])
	{
	if (str[index] == ' ' ||
		str[index] == '\t' ||
		str[index] == '\n' ||
		str[index] == ',' ||
		str[index] == ';' ||
		str[index] == '.' ||
		str[index] == '!' ||
		str[index] == '?' ||
		str[index] == '"' ||
		str[index] == '(' ||
		str[index] == ')' ||
		str[index] == '{' ||
		str[index] == '}' ||
		index == 0)
		str[index] -= 32;
	
	index++;
	}
	return (str);
}
