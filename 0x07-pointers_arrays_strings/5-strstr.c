#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string to look through
 * @needle: string to search for
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i, s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;

		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
