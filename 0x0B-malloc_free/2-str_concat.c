#include "main.h"
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: bigger string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, new = 0, out = 0
	int out;
	char *s;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (s1[i])
		i++;
	while (s1[j])
		j++;

	out = i + j;
	s = malloc((sizeof(char) * out) + 1);

	if (!s)
		return (NULL);

	j = 0;
	while (new < out)
	{
		if (new <= i)
			s[n] = s1[n];
		if (n >= i)
		{
			s[n] = s2[j];
			j++;
		}
		n++;
	}
	s[n] = '\0';
	return (s);
}
