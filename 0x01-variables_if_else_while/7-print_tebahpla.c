/* File: 7-print_comb3.c */
/* Auth: Jonathan Boomni */

#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all lowercase alphabet in reverse.
 * Starting from 0, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'z'; alphabets >= 'a'; alphabets--)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}

