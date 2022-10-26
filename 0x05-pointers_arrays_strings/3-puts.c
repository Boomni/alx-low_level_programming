#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line to stdout
 * 
 * @str: character string passed
 *
 * Return: 0
 */
void _puts(char *str)
{
	unsigned long int len = 0;

	while (str[len] != '\0')
	{
		putchar(str[len]);
		len++;
	}
	putchar('\n');
}

