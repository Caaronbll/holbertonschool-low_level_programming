#include "holberton.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int index;

	while (dest[index++])
		destlen++;
	for (index = 0; src[index] && index < n; index++)
		dest[destlen++] = src[index];
	return (dest);
}
