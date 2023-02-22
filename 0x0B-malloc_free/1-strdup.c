#include "main.h"
#include <stdio.h>

/**
 * _strdup - pointer to the copy of a string
 * @str: string
 * Return: a pointer to a string
 */

char *_strdup(char *str)
{
	int j = 0;
	int i = 0;
	char *s;

	if (!str)
		return (NULL);
	for (; str[i]; i++)

	s = malloc((sizeof(char) * i) + 1);

	if (!s)
		return (NULL);
	for (; j < i; j++)
		s[j] = str[j];
	return (s);
}
