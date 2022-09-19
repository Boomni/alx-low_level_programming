#include "main.h"
#include <stdio.h>

/**
 * _puts - Entry point after main
 * Description: Prints a string
 * followed by a new line to stdout
 * Author: Jonathan Boomni
 * @str: character string passed
 * Return: 0
 */
void _puts(char *str)
{
	int x = 0;

	while (str[x])
	{
		putchar(str[x]);
		x++;
	}
	putchar('\n');
}

