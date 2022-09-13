/* Author: Jonathan Boomni */

#include "main.h"

/**
 * print_alphabet - Make the alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
}

