#include "main.h"
#include <stdio.h>

/**
 * print_rev - Entry point after main
 * Description: Prints a string in reverse
 * followed by a new line
 * Author: Jonathan Boomni
 * @s: character string passed
 * Return: 0
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x])
		x++;
	while (x--)
	{
		putchar(s[x]);
	}
	putchar('\n');
}

