/* File: 5-print_numbers.c */
/* Auth: Jonathan Boomni */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all single digit numbers of base 10
 * Starting from 0, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		printf("%i", numbers);
	}
	printf("\n");
	return (0);
}

