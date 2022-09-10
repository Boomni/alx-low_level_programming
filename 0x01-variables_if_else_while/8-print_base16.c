
/* File: 8.c */
/* Auth: Jonathan Boomni */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Start Point
 * Description: Prints all single digit numbers of base 16
 * Starting from 0, followed by a new line.
 * Function allowed: only putchar
 * Return: Always 0.
 */
int main(void)
{
	int x;
	char y;

	for (x = 0; x < 10; x++)
		putchar(x + '0');
	for (y = 'a'; y < 'g'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}

