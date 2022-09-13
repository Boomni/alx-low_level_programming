/* Author: Jonathan Boomni */
#include "main.h"
/**
 * jack_bauer - Entry point after main is read
 * Description: Print every minute of the day of Jack Bauer
 * Return: Start from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int a = 0, b = 0, c = 0, d = 0, x = 0;

	while (x < 1440)
	{
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(':');
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar('\n');

		d++;
		if (d > 9)
		{
			d = 0;
			c++;
		}
		if (c > 5)
		{
			c = 0;
			b++;
		}
		if (b > 9)
		{
			b = 0;
			a++;
		}
		x++;
	}
}
