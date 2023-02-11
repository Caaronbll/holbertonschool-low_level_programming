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
	int index, len = 0;
	
	while(dest[index++])
		len++;
	for (index = 0; src[index] && index < n; index ++)
		dest[len++] = src[index];
       return (dest);
}       
