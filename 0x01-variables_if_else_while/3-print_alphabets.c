/* File: 3-print_alphabet.c */
/* Auth: Jonathan Boomni */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);
	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
		putchar(alphabets);


	putchar('\n');

	return (0);
}

