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
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
		}
	}
}

