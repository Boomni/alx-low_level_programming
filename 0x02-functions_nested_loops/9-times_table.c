/* Author: Jonathan Boomni */

#include "main.h"

/**
 * times_table - Entry point after main is read
 * Description: Prints the nine times table starting with zero
 * Return: void
 */
void times_table(void)
{
	int a , x;
	x = 0;

	while (x <= 109)
	{
		for (a = 0; a <= 10; a++)
		{
			_putchar(a * x);
		}
		x++;
	}
}

