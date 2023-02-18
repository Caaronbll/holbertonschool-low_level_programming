#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a charater in a string
 * @s: string
 * @c: charater
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
