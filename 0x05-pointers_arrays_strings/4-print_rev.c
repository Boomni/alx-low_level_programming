#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 *
 * @s: character string passed
 *
 * Return: 0
 */
void print_rev(char *s)
{
	unsigned long int len = 0;

	while (s[len] != '\0')
		len++;
	while (len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}

