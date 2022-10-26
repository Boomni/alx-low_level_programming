/* File: 8.c */
/* Auth: Jonathan Boomni */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all single digit numbers of base 16
 * Starting from 0, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 15; num++)
	{
		if (num < 10)
			putchar(num + '0');
		else if (num >= 10)
			putchar(num - 10 + 'a');
	}
	putchar('\n');
	return (0);
}

