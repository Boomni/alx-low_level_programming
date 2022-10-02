/* File: 8.c */
/* Auth: Jonathan Boomni */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Start Point
 * Description: Prints all single digit numbers of base 16
 * Starting from 0, followed by a new line.
 * Function allowed: only putchar
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char letters;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	for (letters = 'a'; letters < 'g'; letters++)
		putchar(letters);
	putchar('\n');
	return (0);
}

