#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Entry point
 * @c: check ascii table for the characters
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
