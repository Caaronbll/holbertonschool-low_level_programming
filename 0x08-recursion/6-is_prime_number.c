#include "main.h"
#include <stdio.h>

/**
 * prime - checks for a prime number
 * @n: number
 * @base: base
 * Return: 1 or 0
 */

int prime(int n, int base)
{
	if (base < 2 || base % n == 0)
		return (0);
	else if (n == base - 1)
		return (1);
	else if (base > 2)
		return (prime(n + 1, base));
	return (1);
}
/**
 * is_prime_number - decides if a number is prime
 * @n: number
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	return (prime(2, n));
}
