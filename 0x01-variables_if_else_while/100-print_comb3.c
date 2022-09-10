
/* File: 8.c */
/* Auth: Jonathan Boomni */
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print single digit numbers starting from 0
 *
 * Return: returns zero at the end
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			if (a < b)
			{
				putchar(a + '0');
				putchar(b + '0');
				if (a != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

