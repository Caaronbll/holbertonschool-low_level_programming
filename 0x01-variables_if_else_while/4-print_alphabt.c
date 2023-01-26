#include <stdio.h>

/**
 * main - print the letters of the alphabet
 * Description: print the letters of the alphabet except e, q
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = 97;

	while (c < 123)
	{
		if (c != 113 && c != 101)
		{
		putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
