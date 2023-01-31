#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Description: prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h = 0, m;
	while(h < 240 )
	{
		m = 0;
		while(m < 600)
		{
		_putchar(h/10);
		_putchar(':');
		_putchar(m/10);
		_putchar(10);

		m = m + 10;
		}
	h = h + 10;
	}
}
