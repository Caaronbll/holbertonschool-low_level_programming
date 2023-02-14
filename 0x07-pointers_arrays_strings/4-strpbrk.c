#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches for a set of bytes
 * @s: string
 * @accept: bytes to search
 * Return: pointer to the bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i])
	{
		for (; accept[i] != '\0'; i++)
		{
			if (s[i] == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
