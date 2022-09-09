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
	char skip2;

	for (skip2 = 'a'; skip2 <= 'z'; skip2++)
	{
		if (skip2 != 'e' && skip2 != 'q')
			putchar(skip2);
	}
	putchar('\n');
	return (0);
}

