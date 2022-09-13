/* Author: Jonathan Boomni */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * decription: Prints lowercase alphabets followed by newline
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - Called on from main
 *
 * Return: void
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a', x <= 'z', x++;)
	{
		putchar(x);
	}
		putchar('\n');
}

