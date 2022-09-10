
/* File: 7-print_comb3.c */
/* Auth: Jonathan Boomni */

#include <stdio.h>
#include <stdlib.h>
/**
 * main - Start Point
 * Description: Prints all single digit numbers of base 10
 * Starting from 0, followed by a new line.
 * Function allowed: only putchar
 * Return: Always 0.
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

