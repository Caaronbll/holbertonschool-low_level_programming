#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int y;
	for (y = 48; y < 58; y++)
	{
		int x;
		for (x = 48; x < 58; x++)
		{
			_putchar(x * y);
			_putchar(', ');
		}
	}
}	
