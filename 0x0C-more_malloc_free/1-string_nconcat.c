#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2
 * Return: string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2, i, j, scope;
	char *sout;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (s1[len1])
		len1++;

	len2 = n;
	scope = len1 + len2;

	sout = malloc(sizeof(char) * (scope));
	if (!sout)
	{
		return (NULL);
	}

	len1 = 0;
	for (i = 0; s1[i]; i++)
	{
		sout[len1] = s1[i];
		len1++;
	}
	for (j = 0; s2[j] && j < n; j++)
	{
		sout[len1] = s2[j];
		len1++;
		len2++;
	}
	sout[len1] = '\0';
	return (sout);
}
