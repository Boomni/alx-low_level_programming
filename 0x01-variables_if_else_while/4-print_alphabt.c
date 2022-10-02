/* File: 4-print_alphabt */
/* Auth: Jonathan Boomni */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the alphabet in lowercase.
 * Description: Prints  alphabet in lowcase except q and e
 * Return: Always 0.
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets != 'e' && alphabets != 'q')
			putchar(alphabets);
	}
	putchar('\n');
	return (0);
}

