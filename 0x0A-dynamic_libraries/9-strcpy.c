#include "main.h"

/**
 * _strcpy - copies string
 * @dest: destination
 * @src: source
 * Return: copy of string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		dest[i] = *(src + i);
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
