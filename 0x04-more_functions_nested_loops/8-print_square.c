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
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
