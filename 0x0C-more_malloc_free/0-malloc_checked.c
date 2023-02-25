#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: variable
 * Return: cleared memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (!mem)
	{
		free(mem);
		exit(98);
	}
	return (mem);
}
