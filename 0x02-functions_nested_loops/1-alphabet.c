/* Author: Jonathan Boomni */

#include <stdio.h>
#include <main.h>

/**
 * print_alphabet - check the code
 * decription: Prints lowercase alphabets followed by newline
 * Return: Always 0.
 */
void print_alphabet(void);
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}

