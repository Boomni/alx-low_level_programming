/* Author: Jonathan Boomni */

#include "main.h"

/**
 * print_alphabet_x10 - Entry point after going through main
 * Description: Make the alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a = 0;
	char x;

	while (a < 10)
	{
		x = 'a';

		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		a++;
	}
}
