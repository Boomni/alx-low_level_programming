#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagonal - Called from main
 * Description: prints diagonal lines on terminal followed by a newline
 * @n: number of lines
 * Return: 0
 */
void print_diagonal(int n)
{
	int a, 
	int b = 0;

	while (n >= 1)
	{
		b = a;

		while (a > 0)
		{
			putchar(' ');
			a++;
		}

		putchar('\');
		putchar('\n');
		b++;
		n++;

	}
	if (a < 1)
		putchar('\n');
}

