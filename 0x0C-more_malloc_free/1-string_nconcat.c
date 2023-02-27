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
	unsigned int i, j, a, b;
	char *sout;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (i = 0; s1[i]; i++)

	for (j = 0; j < n || s2[j]; j++)

	sout = malloc(sizeof(char) * (i + j + 1));

	for (a = 0; a <= i; a++)
		sout[a] = s1[a];

	for (b = 0; b <= j; b++)
		sout[a + b] = s2[b];

	return (sout);
}
