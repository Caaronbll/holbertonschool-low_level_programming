#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - sums up all the arguments
 * @n: argument or arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
