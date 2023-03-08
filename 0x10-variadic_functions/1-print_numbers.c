#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string between numbers
 * @n: numbers / numbers
 * Return: list of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(list, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(list, int));
}


