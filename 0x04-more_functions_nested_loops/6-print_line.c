#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_line - Called from main
 * Description: prints line in terminal followed by a newline
 * @n: number of lines
 * Return: 0
 */
void print_line(int n)
{
	int x = 1;

	while (x <= n)
	{
		putchar('_');
		x++;
	}
	putchar('\n');
}

