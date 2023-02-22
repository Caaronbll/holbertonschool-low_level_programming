#include "main.h"
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **a;

	if (!width || !height)
		return (NULL);
	if (width < 1 || height < 1)
		return (NULL);
	a = malloc(sizeof(int *) * height);

	if (!a)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int  * width);

		if (!a[i])
		{
		for (j = i; j >= 0; j--)
		{

	}
}
