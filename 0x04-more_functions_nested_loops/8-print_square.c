#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_square - Called from main
 * Description: prints square in terminal followed by a newline
 * @size: number of lines
 * Return: 0
 */
void print_square(int size)
{
	int a = 1;

	while (size >= a)
	{
		putchar('#');
		a++;
	}
	putchar('\n');
}

