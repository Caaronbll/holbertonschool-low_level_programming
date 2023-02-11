#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
