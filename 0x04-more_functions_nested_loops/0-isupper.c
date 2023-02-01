#include "main.h"
#include <stdio.h>

/**
 * main - check for uppercase.
 * @c: check ascii table for the characters
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
