#include "main.h"
#include <stdio.h>

/**
 * search - search for base
 * @n: number
 * @base: base of number
 * Return: base
 */

int search(int n, int, base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (search(n + 1, base));
}
/**
 * _sqrt_recursion - natural sqr root
 * @n: number
 * Return: sqr rt
 */
int _sqrt_recursion(int n)
{
	return (search(1, n));
}
