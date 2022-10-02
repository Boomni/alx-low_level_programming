/* File: 6-print_numberz.c */
/* Auth: Jonathan Boomni */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Start Point
 * Description: Prints all single digit numbers of base 10
 * Starting from 0, followed by a new line.
 * Function allowed: putchar
 * Return: Always 0.
 */
int main(void)
{
	char num;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}

