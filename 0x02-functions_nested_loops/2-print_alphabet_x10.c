/* Author: Jonathan Boomni */

#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 * followed by newline
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char alpha;

	for (n = 0; n < 10; n++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
