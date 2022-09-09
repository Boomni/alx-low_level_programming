/* File: 5-print_numbers.c */
/* Auth: Jonathan Boomni */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Start Point
 * Description: Prints all single digit numbers of base 10
 * Starting from 0, followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%i", x);
	}
	printf("\n");
	return (0);
}

