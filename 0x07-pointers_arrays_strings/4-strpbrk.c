#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - searches for a set of bytes
 * @s: string
 * @accept: bytes to search
 * Return: pointer to the bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
