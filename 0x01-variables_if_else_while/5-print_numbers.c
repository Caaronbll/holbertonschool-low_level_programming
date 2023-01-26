#include <stdio.h>

/**
 * main - print numbers 1 through 9
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i=0;

	while (i < 10) 
	{
		printf("%d", i);
		i++;
	}
	putchar(10);
	return (0);
}
